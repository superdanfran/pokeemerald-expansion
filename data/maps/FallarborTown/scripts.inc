.set LOCALID_ARVEN, 5

FallarborTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
	.byte 0

FallarborTown_OnTransition:
	setflag FLAG_VISITED_FALLARBOR_TOWN
	setvar VAR_CONTEST_HALL_STATE, 0
	clearflag FLAG_CONTEST_SKETCH_CREATED
	end

FallarborTown_EventScript_ArvenScene1::
	lockall
	setvar VAR_0x8008, 1
	goto FallarborTown_EventScript_ArvenScene

FallarborTown_EventScript_ArvenScene2::
	lockall
	setvar VAR_0x8008, 2
	goto FallarborTown_EventScript_ArvenScene

FallarborTown_EventScript_ArvenScene3::
	lockall
	setvar VAR_0x8008, 3
	goto FallarborTown_EventScript_ArvenScene

FallarborTown_EventScript_ArvenScene4::
	lockall
	setvar VAR_0x8008, 4
	goto FallarborTown_EventScript_ArvenScene

FallarborTown_EventScript_ArvenScene5::
	lockall
	setvar VAR_0x8008, 5
	goto FallarborTown_EventScript_ArvenScene

FallarborTown_EventScript_ArvenScene::
	addobject LOCALID_ARVEN
	applymovement LOCALID_ARVEN, FallarborTown_Movement_ArvenEntrance
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_ARVEN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_ARVEN, Common_Movement_Delay48
	waitmovement 0
	call_if_eq VAR_0x8008, 1, FallarborTown_EventScript_ArvenApproachPlayer1
	call_if_eq VAR_0x8008, 2, FallarborTown_EventScript_ArvenApproachPlayer2
	call_if_eq VAR_0x8008, 3, FallarborTown_EventScript_ArvenApproachPlayer3
	call_if_eq VAR_0x8008, 4, FallarborTown_EventScript_ArvenApproachPlayer4
	call_if_eq VAR_0x8008, 5, FallarborTown_EventScript_ArvenApproachPlayer5
	msgbox FallarborTown_Text_YouLookStrong, MSGBOX_DEFAULT
	closemessage
	call FallarborTown_EventScript_ArvenBattle
	setflag FLAG_ARVEN_BATTLE
	msgbox FallarborTown_Text_ComeToMeteorFalls, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_0x8008, 1, FallarborTown_EventScript_ArvenExit1
	call_if_eq VAR_0x8008, 2, FallarborTown_EventScript_ArvenExit2
	call_if_eq VAR_0x8008, 3, FallarborTown_EventScript_ArvenExit3
	call_if_eq VAR_0x8008, 4, FallarborTown_EventScript_ArvenExit4
	call_if_eq VAR_0x8008, 5, FallarborTown_EventScript_ArvenExit5
	setflag FLAG_HIDE_FALLARBOR_ARVEN
	removeobject LOCALID_ARVEN
	setvar VAR_ARVEN_STATE, 2
	releaseall
	end

FallarborTown_Movement_ArvenEntrance:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

FallarborTown_EventScript_ArvenApproachPlayer1::
	applymovement LOCALID_ARVEN, FallarborTown_Movement_ArvenApproachPlayer1
	waitmovement 0
	return

FallarborTown_EventScript_ArvenApproachPlayer2::
	applymovement LOCALID_ARVEN, FallarborTown_Movement_ArvenApproachPlayer2
	waitmovement 0
	return

FallarborTown_EventScript_ArvenApproachPlayer3::
	applymovement LOCALID_ARVEN, FallarborTown_Movement_ArvenApproachPlayer3
	waitmovement 0
	return

FallarborTown_EventScript_ArvenApproachPlayer4::
	applymovement LOCALID_ARVEN, FallarborTown_Movement_ArvenApproachPlayer4
	waitmovement 0
	return

FallarborTown_EventScript_ArvenApproachPlayer5::
	applymovement LOCALID_ARVEN, FallarborTown_Movement_ArvenApproachPlayer5
	waitmovement 0
	return

FallarborTown_EventScript_ArvenExit1::
	applymovement LOCALID_ARVEN, FallarborTown_Movement_ArvenExit1
	waitmovement 0
	return

FallarborTown_EventScript_ArvenExit2::
	applymovement LOCALID_ARVEN, FallarborTown_Movement_ArvenExit2
	waitmovement 0
	return

FallarborTown_EventScript_ArvenExit3::
	applymovement LOCALID_ARVEN, FallarborTown_Movement_ArvenExit3
	waitmovement 0
	return

FallarborTown_EventScript_ArvenExit4::
	applymovement LOCALID_ARVEN, FallarborTown_Movement_ArvenExit4
	waitmovement 0
	return

FallarborTown_EventScript_ArvenExit5::
	applymovement LOCALID_ARVEN, FallarborTown_Movement_ArvenExit5
	waitmovement 0
	return

FallarborTown_Movement_ArvenApproachPlayer1:
	walk_right
	walk_up
	step_end

FallarborTown_Movement_ArvenApproachPlayer2:
	walk_right
	step_end

FallarborTown_Movement_ArvenApproachPlayer3:
	walk_right
	walk_down
	step_end

FallarborTown_Movement_ArvenApproachPlayer4:
	walk_right
	walk_down
	walk_down
	step_end

FallarborTown_Movement_ArvenApproachPlayer5:
	walk_right
	walk_down
	walk_down
	walk_down
	step_end

FallarborTown_Movement_ArvenExit1:
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

FallarborTown_Movement_ArvenExit2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

FallarborTown_Movement_ArvenExit3:
	walk_left
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

FallarborTown_Movement_ArvenExit4:
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

FallarborTown_Movement_ArvenExit5:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

FallarborTown_EventScript_ArvenBattle::
	trainerbattle_no_intro TRAINER_ARVEN_1, FallarborTown_Text_ArvenDefeated
	return

FallarborTown_EventScript_ExpertM::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_ExpertMNormal::
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_Girl::
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
	end

FallarborTown_EventScript_Gentleman::
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
	end

FallarborTown_EventScript_Azurill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FallarborTown_EventScript_BattleTentSign::
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_TownSign::
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_MoveTutorSign::
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
	end

FallarborTown_Text_ShadyCharactersCozmosHome:
	.string "Something's happening,\n"
	.string "and I don't like it!\p"
	.string "I've seen shady characters wandering\n"
	.string "in and out of PROF. COZMO's home…$"

FallarborTown_Text_RegionKnownForMeteors:
	.string "This region's been known for meteors\n"
	.string "since the olden days.\p"
	.string "They say METEOR FALLS was gouged out\n"
	.string "by a falling meteorite long ago.$"

FallarborTown_Text_MyPreciousAzurill:
	.string "See! Take a look!\n"
	.string "This is my precious AZURILL!\p"
	.string "It's slick and smooth and plushy, too!$"

FallarborTown_Text_Azurill:
	.string "AZURILL: Rooreelooo.$"

FallarborTown_Text_HaveYouChallengedFlannery:
	.string "Have you already challenged FLANNERY,\n"
	.string "the LEADER of LAVARIDGE GYM?\p"
	.string "The girl's grandfather was famous.\n"
	.string "He was one of the ELITE FOUR in the\l"
	.string "POKéMON LEAGUE at one point.\p"
	.string "It wouldn't surprise me to see FLANNERY\n"
	.string "become a great TRAINER in her own\l"
	.string "right.$"

FallarborTown_Text_BattleTentSign:
	.string "BATTLE TENT FALLARBOR SITE\n"
	.string "“May the Greatest Teams Gather!”$"

FallarborTown_Text_TownSign:
	.string "FALLARBOR TOWN\n"
	.string "“A farm community with small gardens.”$"

FallarborTown_Text_MoveTutorSign:
	.string "MOVE TUTOR'S HOUSE\n"
	.string "“New moves taught to POKéMON.”$"

FallarborTown_Text_YouLookStrong:
	.string "Hey, {PLAYER}{KUN}. Good to meet you.\p"
	.string "NEMONA told me about you, said you're\n"
	.string "strong.\p"
	.string "So, uh. I need some help with something.\n"
	.string "But I need to know you're up to the task.\p"
	.string "I'm gonna have to test you myself!$"

FallarborTown_Text_ArvenDefeated:
	.string "Dang… You are strong after all."

FallarborTown_Text_ComeToMeteorFalls:
	.string "Will you help me then? I was looking for\n"
	.string "something by METEOR FALLS and there were\p"
	.string "these bad guys hanging out there. I was\n"
	.string "outnumbered, so I couldn't take them.\p"
	.string "I'll meet you there, yeah?$"
