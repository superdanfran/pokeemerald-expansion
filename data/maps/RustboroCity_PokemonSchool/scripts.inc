RustboroCity_PokemonSchool_MapScripts::
	.byte 0

RustboroCity_PokemonSchool_EventScript_Blackboard::
	lockall
	msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
	waitmessage
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
	switch VAR_RESULT
	case 0, RustboroCity_PokemonSchool_EventScript_Poison
	case 1, RustboroCity_PokemonSchool_EventScript_Paralysis
	case 2, RustboroCity_PokemonSchool_EventScript_Sleep
	case 3, RustboroCity_PokemonSchool_EventScript_Burn
	case 4, RustboroCity_PokemonSchool_EventScript_Freeze
	case 5, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
	end

RustboroCity_PokemonSchool_EventScript_Poison::
	msgbox RustboroCity_PokemonSchool_Text_ExplainPoison, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Paralysis::
	msgbox RustboroCity_PokemonSchool_Text_ExplainParalysis, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Sleep::
	msgbox RustboroCity_PokemonSchool_Text_ExplainSleep, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Burn::
	msgbox RustboroCity_PokemonSchool_Text_ExplainBurn, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Freeze::
	msgbox RustboroCity_PokemonSchool_Text_ExplainFreeze, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_ExitTopicSelect::
	releaseall
	end

RustboroCity_PokemonSchool_EventScript_GameboyKid1::
	msgbox RustboroCity_PokemonSchool_Text_TradingRightNow, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_GameboyKid2::
	msgbox RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_RichBoy::
	msgbox RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_Lass::
	msgbox RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_SchoolKidM::
	msgbox RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_StudentNotebook::
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
	end

RustboroCity_PokemonSchool_EventScript_Teacher::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_GaveQuickClaw
	call_if_eq VAR_FACING, DIR_EAST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast
	call_if_eq VAR_FACING, DIR_WEST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest
	msgbox RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw, MSGBOX_DEFAULT
	giveitem ITEM_QUICK_CLAW
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	setflag FLAG_RECEIVED_QUICK_CLAW
	release
	end

RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast::
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast
	waitmovement 0
	return

RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest::
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest
	waitmovement 0
	return

RustboroCity_PokemonSchool_EventScript_GaveQuickClaw::
	msgbox RustboroCity_PokemonSchool_Text_ExplainQuickClaw, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	release
	end

RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest:
	walk_left
	walk_down
	walk_down
	walk_right
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_faster_left
	delay_16
	delay_16
	walk_right
	delay_16
	delay_16
	delay_8
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	walk_right
	step_end

RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_faster_left
	delay_16
	delay_16
	walk_right
	delay_16
	delay_16
	delay_8
	walk_up
	walk_right
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

RustboroCity_PokemonSchool_EventScript_Scott::
	lock
	faceplayer
	goto_if_set FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE, RustboroCity_PokemonSchool_EventScript_ScottWatchStudents
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut, MSGBOX_DEFAULT
	addvar VAR_SCOTT_STATE, 1
	setflag FLAG_MET_SCOTT_RUSTBORO
	release
	end

RustboroCity_PokemonSchool_EventScript_Nemona::
	lock
	faceplayer
	goto_if_set FLAG_MET_NEMONA_RUSTBORO, RustboroCity_PokemonSchool_EventScript_NemonaSpokeAlready
	msgbox RustboroCity_PokemonSchool_Text_NemonaIntro, MSGBOX_DEFAULT
	playbgm MUS_ENCOUNTER_MAY, TRUE
	goto RustboroCity_PokemonSchool_NemonaBattle
	release
	end

RustboroCity_PokemonSchool_EventScript_Dendra::
	lock
	faceplayer
	goto_if_unset FLAG_MET_NEMONA_RUSTBORO, RustboroCity_PokemonSchool_EventScript_DendraTalkToNemona
	goto_if_set FLAG_DENDRA_BATTLE, RustboroCity_PokemonSchool_EventScript_DendraTrade
	goto_if_set FLAG_DENDRA_TRADE_DONE, RustboroCity_PokemonSchool_EventScript_DendraTradeCompleted
	goto_if_set FLAG_MET_DENDRA_RUSTBORO, RustboroCity_PokemonSchool_EventScript_DendraSpokeAlready
	msgbox RustboroCity_PokemonSchool_Text_DendraIntro, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_DendraWantToBattle
	release
	end

RustboroCity_PokemonSchool_EventScript_DendraTalkToNemona::
	msgbox RustboroCity_PokemonSchool_Text_DendraTalkToNemona, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonSchool_EventScript_DendraWantToBattle::
	msgbox RustboroCity_PokemonSchool_Text_DendraWantToBattle, MSGBOX_DEFAULT
	waitmessage
	multichoicedefault 20, 8, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 0, RustboroCity_PokemonSchool_EventScript_DendraBattle
	case 1, RustboroCity_PokemonSchool_EventScript_DendraBattleLater
	release
	end

RustboroCity_PokemonSchool_EventScript_DendraBattle::
	trainerbattle_no_intro TRAINER_DENDRA, RustboroCity_PokemonSchool_Text_DendraDefeated
	goto RustboroCity_PokemonSchool_EventScript_DendraDefeated
	end

RustboroCity_PokemonSchool_EventScript_DendraBattleLater::
	msgbox RustboroCity_PokemonSchool_Text_DendraBattleLater, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonSchool_EventScript_DendraDefeated::
	msgbox RustboroCity_PokemonSchool_Text_DendraGift, MSGBOX_DEFAULT
	setflag FLAG_DENDRA_BATTLE
	end

RustboroCity_PokemonSchool_EventScript_DendraTrade::
	msgbox RustboroCity_PokemonSchool_Text_DendraWantToTrade, MSGBOX_DEFAULT
	multichoicedefault 20, 8, MULTI_YESNO, 0, FALSE
	switch VAR_RESULT
	case 0, RustboroCity_PokemonSchool_EventScript_DendraTradeAccepted
	case 1, RustboroCity_PokemonSchool_EventScript_DendraTradeLater
	return

RustboroCity_PokemonSchool_EventScript_DendraTradeAccepted::
	goto_if_set FLAG_DENDRA_TRADE_DONE, RustboroCity_PokemonSchool_EventScript_DendraTradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_MEDITITE
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, RustboroCity_PokemonSchool_EventScript_DendraTradeLater
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox RustboroCity_PokemonSchool_Text_DendraGoodLuck, MSGBOX_DEFAULT
	setflag FLAG_DENDRA_TRADE_DONE
	release
	end

RustboroCity_PokemonSchool_EventScript_DendraTradeLater::
	msgbox RustboroCity_PokemonSchool_Text_DendraTradeLater, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonSchool_EventScript_DendraTradeCompleted::
	msgbox RustboroCity_PokemonSchool_Text_DendraGoodLuck, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonSchool_EventScript_DendraSpokeAlready::
	msgbox RustboroCity_PokemonSchool_Text_DendraGoodLuck, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready::
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge::
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
	end

RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge::
	msgbox RustboroCity_PokemonSchool_Text_ScottStoneBadge, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
	end

RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge::
	addvar VAR_SCOTT_STATE, 1
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
	release
	end

RustboroCity_PokemonSchool_EventScript_ScottWatchStudents::
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges:
	.string "The blackboard lists status changes\n"
	.string "that may affect POKéMON in battle.$"

RustboroCity_PokemonSchool_Text_ReadWhichTopic:
	.string "Which topic do you want to read?$"

RustboroCity_PokemonSchool_Text_ExplainPoison:
	.string "If a POKéMON is poisoned, it will\n"
	.string "steadily lose HP.\p"
	.string "The effects of poison remain after\n"
	.string "a battle.\p"
	.string "A poisoned POKéMON's HP will drop\n"
	.string "while it is traveling.\p"
	.string "Heal a poisoning using an ANTIDOTE.$"

RustboroCity_PokemonSchool_Text_ExplainParalysis:
	.string "If a POKéMON becomes paralyzed,\n"
	.string "its SPEED drops.\p"
	.string "It may also not be able to move while\n"
	.string "it is in battle.\p"
	.string "Paralysis remains after battle.\n"
	.string "Cure it using a PARLYZ HEAL.$"

RustboroCity_PokemonSchool_Text_ExplainSleep:
	.string "If a POKéMON falls asleep, it will be\n"
	.string "unable to attack.\p"
	.string "A POKéMON may wake up on its own,\n"
	.string "but if a battle ends while it is\l"
	.string "sleeping, it will stay asleep.\p"
	.string "Wake it up using an AWAKENING.$"

RustboroCity_PokemonSchool_Text_ExplainBurn:
	.string "A burn reduces ATTACK power, and it\n"
	.string "steadily reduces the victim's HP.\p"
	.string "A burn lingers after battle.\n"
	.string "Cure a burn using a BURN HEAL.$"

RustboroCity_PokemonSchool_Text_ExplainFreeze:
	.string "If a POKéMON is frozen, it becomes\n"
	.string "completely helpless.\p"
	.string "It will remain frozen after battle.\n"
	.string "Thaw it out using an ICE HEAL.$"

RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw:
	.string "Students who don't study get a little\n"
	.string "taste of my QUICK CLAW.\p"
	.string "Whether or not you are a good student \n"
	.string "will be evident from the way you use\l"
	.string "this item.$"

RustboroCity_PokemonSchool_Text_ExplainQuickClaw:
	.string "A POKéMON holding the QUICK CLAW will\n"
	.string "occasionally speed up and get to move\l"
	.string "before its opponent.\p"
	.string "There are many other items that are\n"
	.string "meant to be held by POKéMON.\p"
	.string "Just those alone will give you many\n"
	.string "topics to study!$"

RustboroCity_PokemonSchool_Text_TradingRightNow:
	.string "I'm trading POKéMON with my friend\n"
	.string "right now.$"

RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot:
	.string "I always wanted a SEEDOT, and\n"
	.string "I'm finally getting one!$"

RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems:
	.string "POKéMON can hold items, but they\n"
	.string "don't know what to do with man-made\l"
	.string "items like POTION and ANTIDOTE.$"

RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself:
	.string "You know how some POKéMON moves can\n"
	.string "confuse a POKéMON?\p"
	.string "A confused POKéMON will sometimes\n"
	.string "attack itself without meaning to.\p"
	.string "But once it leaves battle, it will\n"
	.string "return to normal.$"

RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry:
	.string "A POKéMON holding a BERRY will heal\n"
	.string "itself…\p"
	.string "There are many kinds of items that\n"
	.string "POKéMON can hold…\p"
	.string "Boy, it sure is hard taking notes\n"
	.string "down…$"

RustboroCity_PokemonSchool_Text_StudentsNotes:
	.string "It's this student's notebook…\p"
	.string "POKéMON are to be caught using\n"
	.string "POKé BALLS.\p"
	.string "Up to six POKéMON can accompany\n"
	.string "a TRAINER.\p"
	.string "A TRAINER is someone who catches\n"
	.string "POKéMON, raises them, and battles\l"
	.string "with them.\p"
	.string "A TRAINER's mission is to defeat\n"
	.string "the strong TRAINERS who await\l"
	.string "challengers in POKéMON GYMS.$"

RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut:
	.string "Hello? Didn't we meet before?\n"
	.string "I think back in PETALBURG CITY.\p"
	.string "Let me introduce myself.\n"
	.string "My name's SCOTT.\p"
	.string "I've been traveling everywhere in\n"
	.string "search of outstanding TRAINERS.\p"
	.string "More specifically, I'm looking for\n"
	.string "POKéMON battle experts.\p"
	.string "So, what brings you to this SCHOOL?\n"
	.string "Are you a TRAINER, too?\p"
	.string "The first thing you should do is to\n"
	.string "have a POKéMON learn the move CUT.\p"
	.string "If I remember correctly, someone in\n"
	.string "this town has CUT.$"

RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown:
	.string "SCOTT: Hmm…\p"
	.string "The talent levels of the students here\n"
	.string "are unknown. The potential's there.$"

RustboroCity_PokemonSchool_Text_ScottStoneBadge:
	.string "SCOTT: Oh, what's that?\p"
	.string "It's a STONE BADGE, isn't it?\n"
	.string "That's pretty impressive, I'd say.\p"
	.string "But, you know, I would've loved to see\n"
	.string "you in battle.\p"
	.string "It's hard to tell what you're like as\n"
	.string "a TRAINER from a LEAGUE BADGE.$"

RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge:
	.string "Hello? Didn't we meet before?\n"
	.string "I think back in PETALBURG CITY.\p"
	.string "Let me introduce myself.\n"
	.string "My name's SCOTT.\p"
	.string "I've been traveling everywhere in\n"
	.string "search of outstanding TRAINERS.\p"
	.string "More specifically, I'm looking for\n"
	.string "POKéMON battle experts.\p"
	.string "Oh, what's that?\n"
	.string "It's a STONE BADGE, isn't it?\p"
	.string "That's pretty impressive, I'd say, for\n"
	.string "a starting TRAINER like yourself.\p"
	.string "But, you know, I would've loved to see\n"
	.string "you in battle.\p"
	.string "It's hard to tell what you're like as\n"
	.string "a TRAINER from a LEAGUE BADGE.$"

RustboroCity_PokemonSchool_Text_NemonaIntro:
	.string "Buenas! The professor told me you'd\n"
	.string "be coming here!.\p"
	.string "I've been dying to meet you!\n"
	.string "I'm NEMONA. I'm visiting from the\p"
	.string "PALDEA region with my SCHOOL,\n"
	.string "the NARANJA ACADEMY.$"

RustboroCity_PokemonSchool_Text_NemonaLetsBattle:
	.string "How about you show me all you've learned\n"
	.string "... in a battle?$"

RustboroCity_PokemonSchool_NemonaBattle::
	msgbox RustboroCity_PokemonSchool_Text_NemonaLetsBattle, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, RustboroCity_PokemonSchool_EventScript_NemonaBattleSprigatito
	case 1, RustboroCity_PokemonSchool_EventScript_NemonaBattleFuecoco
	case 2, RustboroCity_PokemonSchool_EventScript_NemonaBattleQuaxly
	end

RustboroCity_PokemonSchool_EventScript_NemonaBattleSprigatito::
	trainerbattle_no_intro TRAINER_NEMONA_SCHOOL_SPRIGATITO, RustboroCity_PokemonSchool_Text_NemonaDefeated
	goto RustboroCity_PokemonSchool_EventScript_NemonaDefeated
	end

RustboroCity_PokemonSchool_EventScript_NemonaBattleFuecoco::
	trainerbattle_no_intro TRAINER_NEMONA_SCHOOL_FUECOCO, RustboroCity_PokemonSchool_Text_NemonaDefeated
	goto RustboroCity_PokemonSchool_EventScript_NemonaDefeated
	end

RustboroCity_PokemonSchool_EventScript_NemonaBattleQuaxly::
	trainerbattle_no_intro TRAINER_NEMONA_SCHOOL_QUAXLY, RustboroCity_PokemonSchool_Text_NemonaDefeated
	goto RustboroCity_PokemonSchool_EventScript_NemonaDefeated
	end

RustboroCity_PokemonSchool_Text_NemonaDefeated::
	.string "Amazing!\n"
	.string "Look at you! Such potential!$"
	end

RustboroCity_PokemonSchool_EventScript_NemonaDefeated::
	msgbox RustboroCity_PokemonSchool_Text_NemonaTakeThis, MSGBOX_DEFAULT
	call RustboroCity_PokemonSchool_EventScript_GiveTeraOrb
	msgbox RustboroCity_PokemonSchool_Text_NemonaExplainTeraOrb, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_MET_NEMONA_RUSTBORO
	end

RustboroCity_PokemonSchool_Text_NemonaTakeThis:
.string "I know what's gonna really spice up\n"
.string "your battling, {PLAYER}!\p"
.string "Take this, straight from PALDEA!$"

RustboroCity_PokemonSchool_Text_NemonaExplainTeraOrb:
	.string "NEMONA: That's a TERA ORB.\p"
	.string "It can change the type of your POKéMON\n"
	.string "and give them a huge power boost!\p"
	.string "I hope it gives you an edge over ROXANNE!\p"
	.string "Press START in battle when you select\n"
	.string "a move and see what happens!$"

RustboroCity_PokemonSchool_EventScript_GiveTeraOrb::
	giveitem ITEM_TERA_ORB
	waitfanfare
	setflag B_FLAG_TERA_ORB_CHARGED
	return

RustboroCity_PokemonSchool_EventScript_NemonaSpokeAlready::
	msgbox RustboroCity_PokemonSchool_Text_GoodLuck, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonSchool_Text_GoodLuck:
	.string "NEMONA: Good luck with ROXANNE!\p"
	.string "Don't forget to TERASTALIZE!$"

RustboroCity_PokemonSchool_Text_DendraIntro:
	.string "Osu, kid! You here to train for the gym?\p"
	.string "I see the fighting spirit in your eyes!\p"
	.string "Call me DENDRA. I'm NEMONA's\n"
	.string "instructor at the NARANJA ACADEMY.$"

RustboroCity_PokemonSchool_Text_DendraWantToBattle:
	.string "DENDRA: Want to warm up for your battle?\p"
	.string "If you beat me I can give you something\n"
	.string "that will thrash ROXANNE!$"

RustboroCity_PokemonSchool_Text_DendraWantToTrade:
	.string "You beat me fair and square.\n"
	.string "How about we trade?$"

RustboroCity_PokemonSchool_Text_DendraTalkToNemona:
	.string "Hey, kid. That girl at the front wants\n"
	.string "to talk to you.$"

RustboroCity_PokemonSchool_Text_DendraBattleLater:
	.string "Hey, I don't mind waiting!$"

RustboroCity_PokemonSchool_Text_DendraDefeated::
	.string "No way! I got crushed!$"
	end

RustboroCity_PokemonSchool_Text_DendraGift::
	.string "Thanks for the battle!\p"
	.string "I got a lot out of this. Us adults are\n"
	.string "learning every day too!\p"
	.string "But, you beat me fair and square.\n"
	.string "How about we trade?$"
	end

RustboroCity_PokemonSchool_Text_DendraGoodLuck::
	.string "Look after little Sippy for me!$"
	end

RustboroCity_PokemonSchool_Text_DendraTradeLater::
	.string "We can always trade later!$"
	end
