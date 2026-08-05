# 1 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 2 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Frlg_MapScripts::
# 3 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmber_Exterior_OnTransition
# 4 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MtEmber_Exterior_OnLoad
# 5 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 7 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_OnTransition::
# 8 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_MT_EMBER_EXTERIOR
# 9 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	call_if_eq VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 2, MtEmber_Exterior_EventScript_RocketsFaceDown
# 10 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 11 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 12 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_RocketsFaceDown::
# 13 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_MT_EMBER_GRUNT1, MOVEMENT_TYPE_FACE_DOWN
# 14 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_MT_EMBER_GRUNT2, MOVEMENT_TYPE_FACE_DOWN
# 15 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	return
# 16 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 17 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_OnLoad::
# 18 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	call_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, MtEmber_Exterior_EventScript_OpenCave
# 19 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 20 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 21 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_OpenCave::
# 22 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	setmetatile 42, 39, METATILE_MtEmber_CaveEntrance, 0
# 23 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	return
# 24 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 25 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_Grunt1::
# 26 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	lock
# 27 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_EventScript_Grunt1Defeated
# 28 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, MtEmber_Exterior_EventScript_BattleGrunt1
# 29 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_WellTryDiggingHere
# 30 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	release
# 31 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 32 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 33 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_Grunt1Defeated::
# 34 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt1PostBattle
# 35 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	release
# 36 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 37 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 38 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_BattleGrunt1::
# 39 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_FacePlayer
# 40 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 41 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
# 42 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt1Intro
# 43 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_Text_Grunt1Defeat
# 44 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt1PostBattle
# 45 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_EventScript_DefeatedBothGrunts
# 46 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	release
# 47 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 48 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 49 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_DefeatedBothGrunts::
# 50 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_WellRegroupDontStepInsideThere
# 51 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	closemessage
# 52 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 53 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	removeobject LOCALID_MT_EMBER_GRUNT1
# 54 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	removeobject LOCALID_MT_EMBER_GRUNT2
# 55 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 56 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	release
# 57 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 58 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 59 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_Grunt2::
# 60 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	lock
# 61 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	faceplayer
# 62 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_EventScript_DefeatedGrunt2
# 63 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, MtEmber_Exterior_EventScript_BattleGrunt2
# 64 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_YoureInTheWayGetLost
# 65 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	closemessage
# 66 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_FaceOriginalDirection
# 67 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 68 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	release
# 69 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 70 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 71 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_DefeatedGrunt2::
# 72 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt2PostBattle
# 73 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	release
# 74 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 75 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 76 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_BattleGrunt2::
# 77 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
# 78 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt2Intro
# 79 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_Text_Grunt2Defeat
# 80 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_Grunt2PostBattle
# 81 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_EventScript_DefeatedBothGrunts
# 82 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	release
# 83 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 84 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 85 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_RocketPasswordScene::
# 86 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	lockall
# 87 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 88 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_PunchedThroughAtLast
# 89 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	message MtEmber_Exterior_Text_WhatsPasswordAgain
# 90 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmessage
# 91 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	playse SE_PIN
# 92 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_QuestionMark
# 93 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 94 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitbuttonpress
# 95 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_FirstPasswordGoldeen
# 96 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_WalkInPlaceFasterDown
# 97 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 98 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	playse SE_PIN
# 99 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_ExclamationMark
# 100 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 101 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_Delay48
# 102 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 103 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_WalkInPlaceFasterDown
# 104 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	waitmovement 0
# 105 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	call MtEmber_Exterior_EventScript_RocketsFaceDown
# 106 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_SnoopsBeenListeningIn
# 107 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 2
# 108 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	releaseall
# 109 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 110 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 111 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_Logan::
# 112 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_LOGAN, MtEmber_Exterior_Text_LoganIntro, MtEmber_Exterior_Text_LoganDefeat
# 113 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_LoganPostBattle, MSGBOX_AUTOCLOSE
# 114 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 115 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 116 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_Beth::
# 117 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_BETH, MtEmber_Exterior_Text_BethIntro, MtEmber_Exterior_Text_BethDefeat
# 118 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_BethPostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 120 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 121 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_EventScript_Jocelyn::
# 122 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CRUSH_GIRL_JOCELYN, MtEmber_Exterior_Text_JocelynIntro, MtEmber_Exterior_Text_JocelynDefeat
# 123 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	msgbox MtEmber_Exterior_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	end
# 125 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 126 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
Text_ExplosionTeach::
# 127 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Can you imagine?\n"
# 128 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "If this volcano were to erupt?\p"
# 129 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "The explosion would be the end of\n"
# 130 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "us. How terrifying is that?\p"
# 131 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "While we're terrified, would you\n"
# 132 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "like me to teach EXPLOSION?$"
# 133 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 134 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
Text_ExplosionDeclined::
# 135 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Yeah, you're right.\n"
# 136 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "It is too terrifying.$"
# 137 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 138 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
Text_ExplosionWhichMon::
# 139 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "You're terribly brave!\p"
# 140 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Which POKéMON should I teach\n"
# 141 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "EXPLOSION?$"
# 142 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 143 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
Text_ExplosionTaught::
# 144 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Using EXPLOSION while on this\n"
# 145 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "volcano…\p"
# 146 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "What a terrifying thrill!$"
# 147 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 148 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_WellTryDiggingHere::
# 149 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Over here.\n"
# 150 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "We'll try digging here.\p"
# 151 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "That treasure the ADMINS've been\n"
# 152 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "talking about should be here.$"
# 153 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 154 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_YoureInTheWayGetLost::
# 155 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "What the…?\n"
# 156 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "You're in the way. Get lost.$"
# 157 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 158 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_PunchedThroughAtLast::
# 159 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Whew, punched through at last.\n"
# 160 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Let's go treasure hunting!$"
# 161 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 162 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_WhatsPasswordAgain::
# 163 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Any treasure we find, we haul back\n"
# 164 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "to the WAREHOUSE, understood?\p"
# 165 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "…Oh, and what're the passwords?\n"
# 166 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "At the ROCKET WAREHOUSE, I mean.$"
# 167 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 168 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_FirstPasswordGoldeen::
# 169 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "What, you forgot the password?\n"
# 170 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "There're actually two.\p"
# 171 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "The first one's “GOLDEEN need\n"
# 172 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "log.”\p"
# 173 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "And the second one is…$"
# 174 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 175 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_SnoopsBeenListeningIn::
# 176 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Hey!\n"
# 177 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "This snoop's been listening in!$"
# 178 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 179 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_Grunt1Intro::
# 180 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "You've been eavesdropping on us,\n"
# 181 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "haven't you?$"
# 182 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 183 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_Grunt1Defeat::
# 184 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Huh, what?$"
# 185 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 186 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_Grunt1PostBattle::
# 187 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Why'd you have to win?$"
# 188 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 189 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_Grunt2Intro::
# 190 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Trying to horn in on our treasure?\n"
# 191 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Don't bet on it!$"
# 192 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 193 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_Grunt2Defeat::
# 194 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Wait!\n"
# 195 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "But how?$"
# 196 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 197 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_Grunt2PostBattle::
# 198 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Develop amnesia conveniently and\n"
# 199 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "forget everything you heard!$"
# 200 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 201 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_WellRegroupDontStepInsideThere::
# 202 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "What a setback…\n"
# 203 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "We'll have to regroup.\p"
# 204 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "You! Don't even think about taking\n"
# 205 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "a step inside here!\p"
# 206 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "If you know what's good for you,\n"
# 207 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "don't even think about this!$"
# 208 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 209 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_LoganIntro::
# 210 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "An active volcano is one that's\n"
# 211 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "erupting, or about to.$"
# 212 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 213 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_LoganDefeat::
# 214 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Whew… That was hot!\n"
# 215 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Sweat's erupting from me!$"
# 216 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 217 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_LoganPostBattle::
# 218 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "They say there're over 1,500\n"
# 219 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "active volcanoes in the world.\p"
# 220 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Just thinking about them makes me\n"
# 221 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "feel all hot and gooey inside!$"
# 222 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 223 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_BethIntro::
# 224 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Do you know how caves form inside\n"
# 225 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "volcanoes?$"
# 226 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 227 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_BethDefeat::
# 228 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "Atchah!\n"
# 229 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "You're shockingly good!$"
# 230 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 231 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_BethPostBattle::
# 232 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "When lava at the surface of magma\n"
# 233 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "hardens, and the magma inside flows\l"
# 234 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "out, caverns are left behind.$"
# 235 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 236 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_JocelynIntro::
# 237 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "I've been in training so I can mend\n"
# 238 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "my broken heart…\p"
# 239 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "It toughened me up physically at\n"
# 240 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "least! Hi-yah!$"
# 241 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 242 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_JocelynDefeat::
# 243 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "I think I tried to overdo it…$"
# 244 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"

# 245 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
MtEmber_Exterior_Text_JocelynPostBattle::
# 246 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "The way you battle, it reminds me\n"
# 247 "data/maps/MtEmber_Exterior_Frlg/scripts.pory"
	.string "of the guy who dumped me…$"
