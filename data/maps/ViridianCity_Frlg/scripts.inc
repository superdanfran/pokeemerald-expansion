# 1 "data/maps/ViridianCity_Frlg/scripts.pory"

# 2 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Frlg_MapScripts::
# 3 "data/maps/ViridianCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_OnTransition
# 4 "data/maps/ViridianCity_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/ViridianCity_Frlg/scripts.pory"

# 6 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_OnTransition::
# 7 "data/maps/ViridianCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_CITY
# 8 "data/maps/ViridianCity_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_SetOldManBlockingRoad
# 9 "data/maps/ViridianCity_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1, ViridianCity_EventScript_SetOldManStandingByRoad
# 10 "data/maps/ViridianCity_Frlg/scripts.pory"
	call_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2, ViridianCity_EventScript_SetOldManNormal
# 11 "data/maps/ViridianCity_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 0, ViridianCity_EventScript_TryUnlockGym
# 12 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 13 "data/maps/ViridianCity_Frlg/scripts.pory"

# 14 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_SetOldManNormal::
# 15 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_1
# 16 "data/maps/ViridianCity_Frlg/scripts.pory"
	return
# 17 "data/maps/ViridianCity_Frlg/scripts.pory"

# 18 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_SetOldManStandingByRoad::
# 19 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_1
# 20 "data/maps/ViridianCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TUTORIAL_MAN, 21, 8
# 21 "data/maps/ViridianCity_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TUTORIAL_MAN, MOVEMENT_TYPE_LOOK_AROUND
# 22 "data/maps/ViridianCity_Frlg/scripts.pory"
	return
# 23 "data/maps/ViridianCity_Frlg/scripts.pory"

# 24 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_SetOldManBlockingRoad::
# 25 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_LYING_DOWN
# 26 "data/maps/ViridianCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_TUTORIAL_MAN, 21, 11
# 27 "data/maps/ViridianCity_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_TUTORIAL_MAN, MOVEMENT_TYPE_FACE_DOWN
# 28 "data/maps/ViridianCity_Frlg/scripts.pory"
	return
# 29 "data/maps/ViridianCity_Frlg/scripts.pory"

# 30 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TryUnlockGym::
# 31 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, Common_EventScript_NopReturn
# 32 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Common_EventScript_NopReturn
# 33 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, Common_EventScript_NopReturn
# 34 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, Common_EventScript_NopReturn
# 35 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, Common_EventScript_NopReturn
# 36 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, Common_EventScript_NopReturn
# 37 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1
# 38 "data/maps/ViridianCity_Frlg/scripts.pory"
	return
# 39 "data/maps/ViridianCity_Frlg/scripts.pory"

# 40 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_GymDoorLocked::
# 41 "data/maps/ViridianCity_Frlg/scripts.pory"
	lockall
# 42 "data/maps/ViridianCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 43 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 44 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 45 "data/maps/ViridianCity_Frlg/scripts.pory"
	delay 20
# 46 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GymDoorsAreLocked
# 47 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 48 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ViridianCity_Movement_JumpDownLedge
# 49 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 50 "data/maps/ViridianCity_Frlg/scripts.pory"
	releaseall
# 51 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 52 "data/maps/ViridianCity_Frlg/scripts.pory"

# 53 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Movement_JumpDownLedge::
# 54 "data/maps/ViridianCity_Frlg/scripts.pory"
	jump_2_down
# 55 "data/maps/ViridianCity_Frlg/scripts.pory"
	step_end
# 56 "data/maps/ViridianCity_Frlg/scripts.pory"

# 57 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_CitySign::
# 58 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_CitySign, MSGBOX_SIGN
# 59 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 60 "data/maps/ViridianCity_Frlg/scripts.pory"

# 61 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TrainerTips1::
# 62 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_CatchMonsForEasierBattles, MSGBOX_SIGN
# 63 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 64 "data/maps/ViridianCity_Frlg/scripts.pory"

# 65 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TrainerTips2::
# 66 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_MovesLimitedByPP, MSGBOX_SIGN
# 67 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 68 "data/maps/ViridianCity_Frlg/scripts.pory"

# 69 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_GymSign::
# 70 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GymSign, MSGBOX_SIGN
# 71 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 72 "data/maps/ViridianCity_Frlg/scripts.pory"

# 73 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_GymDoor::
# 74 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GymDoorsAreLocked, MSGBOX_SIGN
# 75 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 76 "data/maps/ViridianCity_Frlg/scripts.pory"

# 77 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_Boy::
# 78 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_CanCarryMonsAnywhere, MSGBOX_NPC
# 79 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 80 "data/maps/ViridianCity_Frlg/scripts.pory"

# 81 "data/maps/ViridianCity_Frlg/scripts.pory"
@ Other old man, not the tutorial old man
# 82 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_OldMan::
# 83 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 84 "data/maps/ViridianCity_Frlg/scripts.pory"
	faceplayer
# 85 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1, ViridianCity_EventScript_OldManGymLeaderReturned
# 86 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GymClosedWonderWhoLeaderIs
# 87 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 88 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_VIRIDIAN_OLD_MAN, Common_Movement_FaceOriginalDirection
# 89 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 90 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 91 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 92 "data/maps/ViridianCity_Frlg/scripts.pory"

# 93 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_OldManGymLeaderReturned::
# 94 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ViridiansGymLeaderReturned
# 95 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 96 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 97 "data/maps/ViridianCity_Frlg/scripts.pory"

# 98 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialOldMan::
# 99 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 100 "data/maps/ViridianCity_Frlg/scripts.pory"
	faceplayer
# 101 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ViridianCity_EventScript_AskIfTeachyTVHelpful
# 102 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2, ViridianCity_EventScript_TutorialCompleted
# 103 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1, ViridianCity_EventScript_TutorialStart
# 104 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_TutorialNotReady
# 105 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 106 "data/maps/ViridianCity_Frlg/scripts.pory"

# 107 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_AskIfTeachyTVHelpful::
# 108 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_HowsTeachyTVHelping, MSGBOX_YESNO
# 109 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_EventScript_TeachyTVNotHelpful
# 110 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_MyGrandsonOnTheShow
# 111 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 112 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 113 "data/maps/ViridianCity_Frlg/scripts.pory"

# 114 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TeachyTVNotHelpful::
# 115 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_TooBusyForTeachyTV
# 116 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 117 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 118 "data/maps/ViridianCity_Frlg/scripts.pory"

# 119 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialCompleted::
# 120 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_WeakenMonsFirstToCatch
# 121 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 122 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 123 "data/maps/ViridianCity_Frlg/scripts.pory"

# 124 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialStart::
# 125 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 126 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 127 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 128 "data/maps/ViridianCity_Frlg/scripts.pory"

# 129 "data/maps/ViridianCity_Frlg/scripts.pory"
@ Unused
# 130 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_WatchToLearnBasics::
# 131 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_WatchThatToLearnBasics
# 132 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 133 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 134 "data/maps/ViridianCity_Frlg/scripts.pory"

# 135 "data/maps/ViridianCity_Frlg/scripts.pory"
@ Unused. Starts battle after the post battle text, which is odd.
# 136 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialUnused::
# 137 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
# 138 "data/maps/ViridianCity_Frlg/scripts.pory"
	special StartOldManTutorialBattle
# 139 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitstate
# 140 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 141 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 142 "data/maps/ViridianCity_Frlg/scripts.pory"

# 143 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialNotReady::
# 144 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty
# 145 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 146 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 147 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 148 "data/maps/ViridianCity_Frlg/scripts.pory"

# 149 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_Youngster::
# 150 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 151 "data/maps/ViridianCity_Frlg/scripts.pory"
	faceplayer
# 152 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_WantToKnowAboutCaterpillarMons, MSGBOX_YESNO
# 153 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, ViridianCity_EventScript_YoungsterExplainCaterpillars
# 154 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_EventScript_YoungsterDeclineExplanation
# 155 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 156 "data/maps/ViridianCity_Frlg/scripts.pory"

# 157 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_YoungsterExplainCaterpillars::
# 158 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ExplainCaterpieWeedle
# 159 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 160 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 161 "data/maps/ViridianCity_Frlg/scripts.pory"

# 162 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_YoungsterDeclineExplanation::
# 163 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_OhOkayThen
# 164 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 165 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 166 "data/maps/ViridianCity_Frlg/scripts.pory"

# 167 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_Woman::
# 168 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 169 "data/maps/ViridianCity_Frlg/scripts.pory"
	faceplayer
# 170 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_WomanRoadBlocked
# 171 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GoShoppingInPewterOccasionally
# 172 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 173 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 174 "data/maps/ViridianCity_Frlg/scripts.pory"

# 175 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_WomanRoadBlocked::
# 176 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_GrandpaHasntHadCoffeeYet
# 177 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 178 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_VIRIDIAN_WOMAN, Common_Movement_FaceOriginalDirection
# 179 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 180 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 181 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 182 "data/maps/ViridianCity_Frlg/scripts.pory"

# 183 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_DreamEaterTutor::
# 184 "data/maps/ViridianCity_Frlg/scripts.pory"
	goto EventScript_DreamEaterTutor
# 185 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 186 "data/maps/ViridianCity_Frlg/scripts.pory"

# 187 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_RoadBlocked::
# 188 "data/maps/ViridianCity_Frlg/scripts.pory"
	lockall
# 189 "data/maps/ViridianCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 190 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty
# 191 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 192 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, ViridianCity_Movement_WalkDown
# 193 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 194 "data/maps/ViridianCity_Frlg/scripts.pory"
	releaseall
# 195 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 196 "data/maps/ViridianCity_Frlg/scripts.pory"

# 197 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Movement_WalkDown::
# 198 "data/maps/ViridianCity_Frlg/scripts.pory"
	walk_down
# 199 "data/maps/ViridianCity_Frlg/scripts.pory"
	step_end
# 200 "data/maps/ViridianCity_Frlg/scripts.pory"

# 201 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialTriggerLeft::
# 202 "data/maps/ViridianCity_Frlg/scripts.pory"
	lockall
# 203 "data/maps/ViridianCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 204 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_TUTORIAL_MAN, Common_Movement_WalkInPlaceFasterLeft
# 205 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 206 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 207 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 208 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 209 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 210 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 211 "data/maps/ViridianCity_Frlg/scripts.pory"

# 212 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_TutorialTriggerRight::
# 213 "data/maps/ViridianCity_Frlg/scripts.pory"
	lockall
# 214 "data/maps/ViridianCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 215 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_TUTORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
# 216 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 217 "data/maps/ViridianCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 218 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitmovement 0
# 219 "data/maps/ViridianCity_Frlg/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 220 "data/maps/ViridianCity_Frlg/scripts.pory"
	release
# 221 "data/maps/ViridianCity_Frlg/scripts.pory"
	end
# 222 "data/maps/ViridianCity_Frlg/scripts.pory"

# 223 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_EventScript_DoTutorialBattle::
# 224 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ShowYouHowToCatchMons
# 225 "data/maps/ViridianCity_Frlg/scripts.pory"
	closemessage
# 226 "data/maps/ViridianCity_Frlg/scripts.pory"
	special StartOldManTutorialBattle
# 227 "data/maps/ViridianCity_Frlg/scripts.pory"
	waitstate
# 228 "data/maps/ViridianCity_Frlg/scripts.pory"
	lock
# 229 "data/maps/ViridianCity_Frlg/scripts.pory"
	faceplayer
# 230 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
# 231 "data/maps/ViridianCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2
# 232 "data/maps/ViridianCity_Frlg/scripts.pory"
	giveitem ITEM_TEACHY_TV
# 233 "data/maps/ViridianCity_Frlg/scripts.pory"
	msgbox ViridianCity_Text_WatchThatToLearnBasics
# 234 "data/maps/ViridianCity_Frlg/scripts.pory"
	return
# 235 "data/maps/ViridianCity_Frlg/scripts.pory"

# 236 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_CanCarryMonsAnywhere::
# 237 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Those POKé BALLS at your waist!\n"
# 238 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "You have POKéMON, don't you?\p"
# 239 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "It's great that you can carry and\n"
# 240 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "use POKéMON anytime, anywhere.$"
# 241 "data/maps/ViridianCity_Frlg/scripts.pory"

# 242 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_GymClosedWonderWhoLeaderIs::
# 243 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "This POKéMON GYM is always closed.\p"
# 244 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "I wonder who the LEADER is?$"
# 245 "data/maps/ViridianCity_Frlg/scripts.pory"

# 246 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_ViridiansGymLeaderReturned::
# 247 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN GYM's LEADER returned!$"
# 248 "data/maps/ViridianCity_Frlg/scripts.pory"

# 249 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_WantToKnowAboutCaterpillarMons::
# 250 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "You want to know about the two\n"
# 251 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "kinds of caterpillar POKéMON?$"
# 252 "data/maps/ViridianCity_Frlg/scripts.pory"

# 253 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_OhOkayThen::
# 254 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Oh, okay then!$"
# 255 "data/maps/ViridianCity_Frlg/scripts.pory"

# 256 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_ExplainCaterpieWeedle::
# 257 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "CATERPIE has no poison,\n"
# 258 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "but WEEDLE does.\p"
# 259 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Watch that your POKéMON aren't\n"
# 260 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "stabbed by WEEDLE's POISON STING.$"
# 261 "data/maps/ViridianCity_Frlg/scripts.pory"

# 262 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_GrandpaHasntHadCoffeeYet::
# 263 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Oh, Grandpa!\n"
# 264 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Don't be so mean!\p"
# 265 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "I'm so sorry.\n"
# 266 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "He hasn't had his coffee yet.$"
# 267 "data/maps/ViridianCity_Frlg/scripts.pory"

# 268 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_GoShoppingInPewterOccasionally::
# 269 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "I go shopping in PEWTER CITY\n"
# 270 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "occasionally.\p"
# 271 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "I have to take the winding trail in\n"
# 272 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN FOREST when I go.$"
# 273 "data/maps/ViridianCity_Frlg/scripts.pory"

# 274 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_ThisIsPrivateProperty::
# 275 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "I absolutely forbid you from\n"
# 276 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "going through here!\p"
# 277 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "This is private property!$"
# 278 "data/maps/ViridianCity_Frlg/scripts.pory"

# 279 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_ShowYouHowToCatchMons::
# 280 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Well, now, I've had my coffee, and\n"
# 281 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "that's what I need to get going!\p"
# 282 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Hm?\n"
# 283 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "What is that red box you have?\p"
# 284 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Ah, so you're working on your\n"
# 285 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "POKéDEX.\p"
# 286 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Then let me give you a word of\n"
# 287 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "advice.\p"
# 288 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Whenever you catch a POKéMON,\n"
# 289 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "the POKéDEX automatically updates\l"
# 290 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "its data.\p"
# 291 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "…You don't know how to catch\n"
# 292 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "a POKéMON?\p"
# 293 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "I suppose I had better show you\n"
# 294 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "then!$"
# 295 "data/maps/ViridianCity_Frlg/scripts.pory"

# 296 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_ThatWasEducationalTakeThis::
# 297 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "There! Now tell me, that was\n"
# 298 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "educational, was it not?\p"
# 299 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "And here, take this, too.$"
# 300 "data/maps/ViridianCity_Frlg/scripts.pory"

# 301 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_WatchThatToLearnBasics::
# 302 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "If there's something you don't\n"
# 303 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "understand, watch that.\p"
# 304 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "It will teach you about the basics\n"
# 305 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "of being a POKéMON TRAINER.$"
# 306 "data/maps/ViridianCity_Frlg/scripts.pory"

# 307 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_WeakenMonsFirstToCatch::
# 308 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Well, now, I've had my coffee, and\n"
# 309 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "that's what I need to get going!\p"
# 310 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "But I made it too strong.\n"
# 311 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "It gave me a headache…\p"
# 312 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Incidentally, are you filling your\n"
# 313 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "POKéDEX?\p"
# 314 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "At first, focus on weakening the\n"
# 315 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "POKéMON before trying to catch it.$"
# 316 "data/maps/ViridianCity_Frlg/scripts.pory"

# 317 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_HowsTeachyTVHelping::
# 318 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Well, now, I've had my coffee, and\n"
# 319 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "that's what I need to get going!\p"
# 320 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "But I made it too strong.\n"
# 321 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "It gave me a headache…\p"
# 322 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Incidentally, is my old TEACHY TV\n"
# 323 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "helping you?$"
# 324 "data/maps/ViridianCity_Frlg/scripts.pory"

# 325 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_MyGrandsonOnTheShow::
# 326 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Wahaha!\n"
# 327 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "It's my grandson on the show!\p"
# 328 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Since he's the one doing the\n"
# 329 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "teaching, you're bound to learn.$"
# 330 "data/maps/ViridianCity_Frlg/scripts.pory"

# 331 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_TooBusyForTeachyTV::
# 332 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Hm… You're too busy to not even\n"
# 333 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "have the time for TEACHY TV…\p"
# 334 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Time is money, and neither should\n"
# 335 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "be ill spent…$"
# 336 "data/maps/ViridianCity_Frlg/scripts.pory"

# 337 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_CitySign::
# 338 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN CITY \n"
# 339 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "The Eternally Green Paradise$"
# 340 "data/maps/ViridianCity_Frlg/scripts.pory"

# 341 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_CatchMonsForEasierBattles::
# 342 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 343 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "Catch POKéMON and expand your\n"
# 344 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "collection.\p"
# 345 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "The more you have, the easier it\n"
# 346 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "is to battle.$"
# 347 "data/maps/ViridianCity_Frlg/scripts.pory"

# 348 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_MovesLimitedByPP::
# 349 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 350 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "The battle moves of POKéMON are\n"
# 351 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "limited by their POWER POINTS, PP.\p"
# 352 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "To replenish PP, rest your tired\n"
# 353 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "POKéMON at a POKéMON CENTER.$"
# 354 "data/maps/ViridianCity_Frlg/scripts.pory"

# 355 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_GymSign::
# 356 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN CITY POKéMON GYM$"
# 357 "data/maps/ViridianCity_Frlg/scripts.pory"

# 358 "data/maps/ViridianCity_Frlg/scripts.pory"
ViridianCity_Text_GymDoorsAreLocked::
# 359 "data/maps/ViridianCity_Frlg/scripts.pory"
	.string "VIRIDIAN GYM's doors are locked…$"
