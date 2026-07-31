//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file see expansion PR #7154
//

#line 1 "src/data/battle_partners.party"

#line 1
    [DIFFICULTY_NORMAL][PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_PIC_BRENDAN,
#line 5
        .gender = TRAINER_GENDER_MALE,
#line 6
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 8
    [DIFFICULTY_NORMAL][PARTNER_STEVEN] =
    {
#line 9
        .trainerName = _("STEVEN"),
#line 10
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11
        .trainerPic = TRAINER_PIC_STEVEN,
#line 12
        .gender = TRAINER_GENDER_MALE,
#line 13
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 14
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 16
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 20
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
#line 19
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 18
            .lvl = 42,
            .ball = POKEBALL_COUNT,
#line 17
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 21
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 26
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 30
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
#line 29
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 28
            .lvl = 43,
            .ball = POKEBALL_COUNT,
#line 27
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 31
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_PROTECT,
                MOVE_STEEL_WING,
            },
            },
            {
#line 36
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 40
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
#line 39
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 38
            .lvl = 44,
            .ball = POKEBALL_COUNT,
#line 37
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 41
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
        },
    },
#line 46
    [DIFFICULTY_NORMAL][PARTNER_ARVEN] =
    {
#line 47
        .trainerName = _("ARVEN"),
#line 48
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 49
        .trainerPic = TRAINER_PIC_BRENDAN,
#line 50
        .gender = TRAINER_GENDER_MALE,
#line 51
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
#line 52
        .aiFlags = AI_FLAG_SMART_TRAINER,
#line 0
        .multiTeamSize = MULTI_TEAM_SIZE_FULL,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 54
            .species = SPECIES_BOMBIRDIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 54
            .heldItem = ITEM_LIFE_ORB,
#line 58
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 55
            .ability = ABILITY_ROCKY_PAYLOAD,
#line 57
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 56
            .nature = NATURE_NAUGHTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 59
                MOVE_DUAL_WINGBEAT,
                MOVE_TAILWIND,
                MOVE_STEALTH_ROCK,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 64
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 64
            .heldItem = ITEM_SALAC_BERRY,
#line 68
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 65
            .ability = ABILITY_SKILL_LINK,
#line 67
            .lvl = 36,
            .ball = POKEBALL_COUNT,
#line 66
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 69
                MOVE_ROCK_BLAST,
                MOVE_ICICLE_SPEAR,
                MOVE_LIQUIDATION,
                MOVE_SHELL_SMASH,
            },
            },
            {
#line 74
            .species = SPECIES_GARGANACL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 74
            .heldItem = ITEM_LEFTOVERS,
#line 79
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 75
            .ability = ABILITY_PURIFYING_SALT,
#line 78
            .lvl = 38,
            .ball = POKEBALL_COUNT,
#line 76
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 77
            .teraType = TYPE_FAIRY,
            .moves = {
#line 80
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
                MOVE_SALT_CURE,
                MOVE_STONE_EDGE,
            },
            },
        },
    },
