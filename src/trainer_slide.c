#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_message.h"
#include "battle_setup.h"
#include "battle_tower.h"
#include "battle_z_move.h"
#include "data.h"
#include "event_data.h"
#include "frontier_util.h"
#include "graphics.h"
#include "international_string_util.h"
#include "item.h"
#include "link.h"
#include "menu.h"
#include "palette.h"
#include "party_menu.h"
#include "recorded_battle.h"
#include "string_util.h"
#include "strings.h"
#include "test_runner.h"
#include "text.h"
#include "trainer_hill.h"
#include "window.h"
#include "line_break.h"
#include "constants/abilities.h"
#include "constants/battle_dome.h"
#include "constants/battle_string_ids.h"
#include "constants/comparison_operators.h"
#include "constants/flags.h"
#include "constants/frontier_util.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/opponents.h"
#include "constants/species.h"
#include "constants/trainers.h"
#include "constants/trainer_hill.h"
#include "constants/vars.h"
#include "constants/weather.h"
#include "trainer_slide.h"
#include "battle_message.h"

static u32 BattlerHPPercentage(enum BattlerId battler, enum ComparisonOperators operation, u32 threshold);
static u32 GetPartyMonCount(u32 lastId, struct Pokemon *party, bool32 onlyAlive);
static bool32 DoesTrainerHaveSlideMessage(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstCriticalHit(enum BattlerId battler, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideEnemyLandsFirstCriticalHit(enum BattlerId battler, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit(enum BattlerId battler, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstSTABMove(u32 lastId, enum BattlerId battler, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlidePlayerLandsFirstDown(u32 lastId, enum BattlerId battler);
static bool32 ShouldRunTrainerSlideEnemyMonUnaffected(u32 lastId, enum BattlerId battler, enum TrainerSlideType slideId);
static bool32 ShouldRunTrainerSlideLastSwitchIn(enum BattlerId battler);
static bool32 ShouldRunTrainerSlideLastHalfHP(u32 lastId, enum BattlerId battler);
static bool32 ShouldRunTrainerSlideLastLowHp(u32 lastId, enum BattlerId battler);
static void SetTrainerSlideParameters(enum BattlerId battler, u32* lastId, u32* trainerId, u32* retValue);
static bool32 IsSlideInitalizedOrPlayed(enum BattlerId battler, enum TrainerSlideType slideId);

// Partner trainers must be added as TRAINER_PARTNER(PARTNER_XXXX)
static const u8* const sTrainerSlides[DIFFICULTY_COUNT][TRAINER_PARTNER(PARTNER_COUNT)][TRAINER_SLIDE_COUNT] =
{
    [DIFFICULTY_NORMAL] =
    {
        [TRAINER_ROXANNE_1] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Here I come!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_MON_UNAFFECTED] = COMPOUND_STRING("Are you giving this me best shot?{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Watch out!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Great effort!{PAUSE_UNTIL_PRESS}"),
        },

        [TRAINER_NEMONA_SCHOOL_QUAXLY] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Wow, doing better than I expected!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_MON_UNAFFECTED] = COMPOUND_STRING("Try again! You'll get it!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Perfecto!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Oooh, lucky!{PAUSE_UNTIL_PRESS}"),
        },

        [TRAINER_NEMONA_SCHOOL_FUECOCO] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Wow, doing better than I expected!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_MON_UNAFFECTED] = COMPOUND_STRING("Try again! You'll get it!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Perfecto!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Oooh, lucky!{PAUSE_UNTIL_PRESS}"),
        },

        [TRAINER_NEMONA_SCHOOL_SPRIGATITO] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Wow, doing better than I expected!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_MON_UNAFFECTED] = COMPOUND_STRING("Try again! You'll get it!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Perfecto!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Oooh, lucky!{PAUSE_UNTIL_PRESS}"),
        },
    
        [TRAINER_NESSA_1] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Sorry mate, but you're washed!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_MON_UNAFFECTED] = COMPOUND_STRING("There's no sinking this ship!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Don't you dare underestimate me!{PAUSE_UNTIL_PRESS}"),
        },

        [TRAINER_WATTSON_1] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Now we're charged up!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_MON_UNAFFECTED] = COMPOUND_STRING("You look shocked! Wahahahah!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Wahahahah!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("You look like you have a lot of zip!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_ARVEN_1] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Seriously, you're this strong?{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_MON_UNAFFECTED] = COMPOUND_STRING("We're tougher than you think.{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("I'm getting pumped up!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Woah! You don't hold back!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_TABITHA_MT_CHIMNEY] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Just stay down already!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_MON_UNAFFECTED] = COMPOUND_STRING("Hyahyahya!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Hyahyahya!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Hyuhn?{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_MAXIE_MT_CHIMNEY] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("You're more capable than I had assumed.{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_MON_UNAFFECTED] = COMPOUND_STRING("Pathetic.{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("I will bury you!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("...{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_FLANNERY_1] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("My fiery passion! It's gonna overheat!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_MON_UNAFFECTED] = COMPOUND_STRING("Ice cold!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Haiyaaaaaaaaaaaaa!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Here we go!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_SIDNEY] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Now my blood's pumping!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_MON_UNAFFECTED] = COMPOUND_STRING("Aha! Try again!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Lookin' real good!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Ack!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_NORMAN_1] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("I will do everything in my power to win.{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_MON_UNAFFECTED] = COMPOUND_STRING("I hoped you knew better than that.{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("All right.{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Well done.{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_SHELLY_WEATHER_INSTITUTE] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Punish them!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_MON_UNAFFECTED] = COMPOUND_STRING("Ahahahaha!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Sink em!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Arrrrgh!{PAUSE_UNTIL_PRESS}"),
        },
        [TRAINER_BRASSIUS_1] =
        {
            [TRAINER_SLIDE_LAST_SWITCHIN] = COMPOUND_STRING("Let us lead this artistic endeavor to its conclusion!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_MON_UNAFFECTED] = COMPOUND_STRING("Can you keep up?{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("We are inspired!{PAUSE_UNTIL_PRESS}"),
            [TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT] = COMPOUND_STRING("Avant garde!{PAUSE_UNTIL_PRESS}"),
        }
    },
};

static const u8* const sFrontierTrainerSlides[DIFFICULTY_COUNT][FRONTIER_TRAINERS_COUNT][TRAINER_SLIDE_COUNT] =
{
    [DIFFICULTY_NORMAL] =
    {
    },
};

#define TRAINER_RED_TEST    1
#define TRAINER_LEAF_TEST   2
#define PARTNER_STEVEN_TEST 1

static const u8* const sTestTrainerSlides[DIFFICULTY_COUNT][MAX_TRAINERS_COUNT_EMERALD + PARTNER_COUNT][TRAINER_SLIDE_COUNT] =
{
#include "../test/battle/trainer_slides.h"
};

static u32 BattlerHPPercentage(enum BattlerId battler, enum ComparisonOperators operation, u32 threshold)
{
    switch (operation)
    {
    case LESS_THAN:
        return gBattleMons[battler].hp < (gBattleMons[battler].maxHP / threshold);
    case EQUAL:
        return gBattleMons[battler].hp == (gBattleMons[battler].maxHP / threshold);
    case GREATER_THAN:
        return gBattleMons[battler].hp > (gBattleMons[battler].maxHP / threshold);
    case LESS_THAN_OR_EQUAL:
        return gBattleMons[battler].hp <= (gBattleMons[battler].maxHP / threshold);
    case GREATER_THAN_OR_EQUAL:
        return gBattleMons[battler].hp >= (gBattleMons[battler].maxHP / threshold);
    case NOT_EQUAL:
    default:
        return gBattleMons[battler].hp != (gBattleMons[battler].maxHP / threshold);
    }
}

static const s8 sMultiBattleOrder[] = {0, 2, 3, 1, 4, 5};

static u32 GetPartyMonCount(u32 lastId, struct Pokemon *party, bool32 onlyAlive)
{
    u32 count = 0;

    for (u32 i = 0; i < lastId; i++)
    {
        enum Species species = GetMonData(&party[i], MON_DATA_SPECIES_OR_EGG);
        if (species != SPECIES_NONE
                && species != SPECIES_EGG
                && (!onlyAlive || GetMonData(&party[i], MON_DATA_HP)))
        {
            count++;
        }
    }

    return count;
}

static const u8* const *GetTrainerSlideArray(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId)
{
#if TESTING
    return (FlagGet(TESTING_FLAG_TRAINER_SLIDES) ? sTestTrainerSlides[difficulty][trainerId] : NULL);
#else
    if (gBattleTypeFlags & BATTLE_TYPE_FRONTIER)
        return sFrontierTrainerSlides[difficulty][trainerId];
    else
        return sTrainerSlides[difficulty][trainerId];
#endif // TESTING
}

static bool32 DoesTrainerHaveSlideMessage(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId)
{
    const u8* const *trainerSlides = GetTrainerSlideArray(difficulty, trainerId, slideId);
    const u8* const *trainerSlidesNormal = GetTrainerSlideArray(DIFFICULTY_NORMAL, trainerId, slideId);

#if TESTING
    if (VarGet(TESTING_VAR_TRAINER_SLIDES) == slideId)
    {
        if (trainerSlides[slideId] == NULL)
            return (trainerSlidesNormal[slideId] != NULL);
        else
            return TRUE;
    }
    else
    {
        return FALSE;
    }
#else
    if (trainerSlides[slideId] == NULL)
        return (trainerSlidesNormal[slideId] != NULL);
    else
        return TRUE;
#endif // TESTING
}

void SetTrainerSlideMessage(enum DifficultyLevel difficulty, u32 trainerId, u32 slideId)
{
    const u8* const *trainerSlides = GetTrainerSlideArray(difficulty, trainerId, slideId);
    const u8* const *trainerSlidesNormal = GetTrainerSlideArray(DIFFICULTY_NORMAL, trainerId, slideId);

    if (trainerSlides[slideId] != NULL)
        gBattleStruct->trainerSlideMsg = trainerSlides[slideId];
    else
        gBattleStruct->trainerSlideMsg = trainerSlidesNormal[slideId];
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstCriticalHit(enum BattlerId battler, enum TrainerSlideType slideId)
{
    return IsTrainerSlideInitialized(battler, slideId);
}

static bool32 ShouldRunTrainerSlideEnemyLandsFirstCriticalHit(enum BattlerId battler, enum TrainerSlideType slideId)
{
    return IsTrainerSlideInitialized(battler, slideId);
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit(enum BattlerId battler, enum TrainerSlideType slideId)
{
    if (!IsTrainerSlideInitialized(battler, slideId))
        return FALSE;

    if (!IsBattlerAlive(battler))
        return FALSE;

    return TRUE;
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstSTABMove(u32 lastId, enum BattlerId battler, enum TrainerSlideType slideId)
{
    if (!IsTrainerSlideInitialized(battler, slideId))
        return FALSE;

    if (GetPartyMonCount(lastId, GetBattlerParty(battler), TRUE) != GetPartyMonCount(lastId, GetBattlerParty(battler), FALSE))
        return FALSE;

    return TRUE;
}

static bool32 ShouldRunTrainerSlidePlayerLandsFirstDown(u32 lastId, enum BattlerId battler)
{
    return ((GetPartyMonCount(lastId, GetBattlerParty(battler), TRUE) == (GetPartyMonCount(lastId, GetBattlerParty(battler), FALSE) - 1)));
}

static bool32 ShouldRunTrainerSlideEnemyMonUnaffected(u32 lastId, enum BattlerId battler, enum TrainerSlideType slideId)
{
    if (!IsTrainerSlideInitialized(battler, slideId))
        return FALSE;

    return (GetPartyMonCount(lastId, GetBattlerParty(battler), TRUE) == GetPartyMonCount(lastId, GetBattlerParty(battler), FALSE));
}

static bool32 ShouldRunTrainerSlideLastSwitchIn(enum BattlerId battler)
{
    return !CanBattlerSwitch(battler);
}

static bool32 ShouldRunTrainerSlideLastHalfHP(u32 lastId, enum BattlerId battler)
{
    if (GetPartyMonCount(lastId, GetBattlerParty(battler), TRUE) != 1)
        return FALSE;

    if (BattlerHPPercentage(battler, GREATER_THAN, 2))
        return FALSE;

    return (BattlerHPPercentage(battler, GREATER_THAN, 4));
}

static bool32 ShouldRunTrainerSlideLastLowHp(u32 lastId, enum BattlerId battler)
{
    if (GetPartyMonCount(lastId, GetBattlerParty(battler), TRUE) != 1)
        return FALSE;

    if (!IsBattlerAlive(battler))
        return FALSE;

    return (BattlerHPPercentage(battler, LESS_THAN_OR_EQUAL, 4));
}

static void SetTrainerSlideParameters(enum BattlerId battler, u32* lastId, u32* trainerId, u32* retValue)
{
    if ((battler & BIT_SIDE) == B_SIDE_OPPONENT)
    {
        if (gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS)
        {
            if (!AreMultiPartiesFullTeams())
                *lastId = MULTI_PARTY_SIZE;
            if (GetBattlerTrainer(battler) == B_TRAINER_OPPONENT_B)
            {
                *trainerId = TRAINER_BATTLE_PARAM.opponentB;
                *retValue = TRAINER_SLIDE_TARGET_TRAINER_B;
            }
        }
    }
    else if (GetBattlerTrainer(battler) == B_TRAINER_PARTNER && gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER)
    {
        if (!AreMultiPartiesFullTeams())
            *lastId = MULTI_PARTY_SIZE;
        *trainerId = gPartnerTrainerId;
        *retValue = TRAINER_SLIDE_TARGET_TRAINER_PARTNER;
    }
}

enum TrainerSlideTargets ShouldDoTrainerSlide(enum BattlerId battler, enum TrainerSlideType slideId)
{
    u32 lastId = PARTY_SIZE, trainerId = TRAINER_BATTLE_PARAM.opponentA;
    u32 retValue = TRAINER_SLIDE_TARGET_TRAINER_A;
    bool32 shouldRun = FALSE;

    if (!(gBattleTypeFlags & BATTLE_TYPE_TRAINER))
        return TRAINER_SLIDE_TARGET_NONE;

    if (!IsDoubleBattle() && (battler > B_BATTLER_1))
        return TRAINER_SLIDE_TARGET_NONE;

    SetTrainerSlideParameters(battler, &lastId, &trainerId, &retValue);
    if (IsSpecialTrainer(trainerId))
        return TRAINER_SLIDE_TARGET_NONE;

    enum DifficultyLevel difficulty = GetCurrentDifficultyLevel();
    gBattleScripting.battler = battler;

    if (IsTrainerSlidePlayed(battler, slideId))
        return TRAINER_SLIDE_TARGET_NONE;

    if (!DoesTrainerHaveSlideMessage(difficulty,trainerId,slideId))
        return TRAINER_SLIDE_TARGET_NONE;

    switch (slideId)
    {
    case TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT:
        shouldRun = ShouldRunTrainerSlidePlayerLandsFirstCriticalHit(battler, slideId);
        break;
    case TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT:
        shouldRun = ShouldRunTrainerSlideEnemyLandsFirstCriticalHit(battler, slideId);
        break;
    case TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT:
        shouldRun = ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit(battler, slideId);
        break;
    case TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE:
        shouldRun = ShouldRunTrainerSlidePlayerLandsFirstSTABMove(lastId, battler, slideId);
        break;
    case TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN:
        shouldRun = ShouldRunTrainerSlidePlayerLandsFirstDown(lastId, battler);
        break;
    case TRAINER_SLIDE_ENEMY_MON_UNAFFECTED:
        shouldRun = ShouldRunTrainerSlideEnemyMonUnaffected(lastId, battler, slideId);
        break;
    case TRAINER_SLIDE_LAST_SWITCHIN:
        shouldRun = ShouldRunTrainerSlideLastSwitchIn(battler);
        break;
    case TRAINER_SLIDE_LAST_HALF_HP:
        shouldRun = ShouldRunTrainerSlideLastHalfHP(lastId, battler);
        break;
    case TRAINER_SLIDE_LAST_LOW_HP:
        shouldRun = ShouldRunTrainerSlideLastLowHp(lastId, battler);
        break;
    case TRAINER_SLIDE_BEFORE_FIRST_TURN:
    case TRAINER_SLIDE_MEGA_EVOLUTION:
    case TRAINER_SLIDE_Z_MOVE:
    case TRAINER_SLIDE_DYNAMAX:
        shouldRun = TRUE;
        break;
    default:
            return TRAINER_SLIDE_TARGET_NONE;
    }

    if (shouldRun == FALSE)
        return TRAINER_SLIDE_TARGET_NONE;

    // Prevents slides triggering twice in single-trainer doubles (B == A / B == TRAINER_NONE) and 2v1 multibattles (B == 0xFFFF)
    if (((TRAINER_BATTLE_PARAM.opponentB == TRAINER_BATTLE_PARAM.opponentA)
     || (TRAINER_BATTLE_PARAM.opponentB == TRAINER_NONE)
     || (TRAINER_BATTLE_PARAM.opponentB == 0xFFFF)))
    {
        MarkTrainerSlideAsPlayed(BATTLE_PARTNER(battler), slideId);
    }

    MarkTrainerSlideAsPlayed(battler, slideId);
    SetTrainerSlideMessage(difficulty,trainerId,slideId);
    return retValue;
}

static bool32 IsSlideInitalizedOrPlayed(enum BattlerId battler, enum TrainerSlideType slideId)
{
    if (IsTrainerSlideInitialized(battler, slideId))
        return TRUE;

    if (IsTrainerSlidePlayed(battler, slideId))
        return TRUE;

    return FALSE;
}

void TryInitializeFirstSTABMoveTrainerSlide(enum BattlerId battlerDef, enum BattlerId battlerAtk, enum Type moveType)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_STAB_MOVE;

    if (IsSlideInitalizedOrPlayed(battlerDef, slideId))
        return;

    if ((IsOnPlayerSide(battlerDef)))
        return;

    if (IS_BATTLER_OF_TYPE(battlerAtk, moveType) == FALSE)
        return;

    InitalizeTrainerSlide(battlerDef, slideId);
}

void TryInitializeTrainerSlidePlayerLandsFirstCriticalHit(u32 target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT;

    if (IsSlideInitalizedOrPlayed(target, slideId))
        return;

    if (IsOnPlayerSide(target))
        return;

    InitalizeTrainerSlide(target, slideId);
}

void TryInitializeTrainerSlideEnemyLandsFirstCriticalHit(u32 target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_ENEMY_LANDS_FIRST_CRITICAL_HIT;

    if (IsSlideInitalizedOrPlayed(gBattlerAttacker, slideId))
        return;

    if (!IsOnPlayerSide(target))
        return;

    InitalizeTrainerSlide(gBattlerAttacker, slideId);
}

void TryInitializeTrainerSlidePlayerLandsFirstSuperEffectiveHit(u32 target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT;

    if (IsSlideInitalizedOrPlayed(target, slideId))
        return;

    if (IsOnPlayerSide(target))
        return;

    InitalizeTrainerSlide(target, slideId);
}

void TryInitializeTrainerSlideEnemyMonUnaffected(u32 target)
{
    enum TrainerSlideType slideId = TRAINER_SLIDE_ENEMY_MON_UNAFFECTED;

    if (IsSlideInitalizedOrPlayed(target, slideId))
        return;

    if (IsOnPlayerSide(target))
        return;

    InitalizeTrainerSlide(target, slideId);
}

bool32 IsTrainerSlideInitialized(enum BattlerId battler, enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    return (gBattleStruct->slideMessageStatus.messageInitalized[battler][arrayIndex] & (1 << bitPosition)) != 0;
}

bool32 IsTrainerSlidePlayed(enum BattlerId battler, enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    return (gBattleStruct->slideMessageStatus.messagePlayed[battler][arrayIndex] & (1 << bitPosition)) != 0;
}

void InitalizeTrainerSlide(enum BattlerId battler, enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    gBattleStruct->slideMessageStatus.messageInitalized[battler][arrayIndex] |= (1 << bitPosition);
}

void MarkInitializedTrainerSlidesAsPlayed(enum BattlerId battler, enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    if (IsTrainerSlideInitialized(battler, slideId) && !IsTrainerSlidePlayed(battler, slideId))
        gBattleStruct->slideMessageStatus.messagePlayed[battler][arrayIndex] |= (1 << bitPosition);
}

void MarkTrainerSlideAsPlayed(enum BattlerId battler, enum TrainerSlideType slideId)
{
    u32 arrayIndex = slideId / TRAINER_SLIDES_PER_ARRAY;
    u32 bitPosition = slideId % TRAINER_SLIDES_PER_ARRAY;

    gBattleStruct->slideMessageStatus.messagePlayed[battler][arrayIndex] |= (1 << bitPosition);
}
