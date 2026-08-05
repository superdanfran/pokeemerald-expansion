# 1 "data/maps/FortreeCity/scripts.pory"

# 2 "data/maps/FortreeCity/scripts.pory"
FortreeCity_MapScripts::
# 3 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_OnTransition
# 4 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_OnResume
# 5 "data/maps/FortreeCity/scripts.pory"
	.byte 0
# 6 "data/maps/FortreeCity/scripts.pory"

# 7 "data/maps/FortreeCity/scripts.pory"
FortreeCity_OnTransition:
# 8 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_VISITED_FORTREE_CITY
# 9 "data/maps/FortreeCity/scripts.pory"
	end
# 10 "data/maps/FortreeCity/scripts.pory"

# 11 "data/maps/FortreeCity/scripts.pory"
FortreeCity_OnResume:
# 12 "data/maps/FortreeCity/scripts.pory"
	setstepcallback STEP_CB_FORTREE_BRIDGE
# 13 "data/maps/FortreeCity/scripts.pory"
	end
# 14 "data/maps/FortreeCity/scripts.pory"

# 15 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_OgerponScene::
# 16 "data/maps/FortreeCity/scripts.pory"
	lockall
# 17 "data/maps/FortreeCity/scripts.pory"
	addobject LOCALID_OGERPON
# 18 "data/maps/FortreeCity/scripts.pory"
	playse SE_PIN
# 19 "data/maps/FortreeCity/scripts.pory"
	applymovement LOCALID_OGERPON, Common_Movement_FacePlayer
# 20 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 21 "data/maps/FortreeCity/scripts.pory"
	applymovement LOCALID_OGERPON, Common_Movement_ExclamationMark
# 22 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 23 "data/maps/FortreeCity/scripts.pory"
	applymovement LOCALID_OGERPON, Common_Movement_Delay48
# 24 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 25 "data/maps/FortreeCity/scripts.pory"
	applymovement LOCALID_OGERPON, ForetreeCity_Movement_OgerponExit
# 26 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 27 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_HIDE_FORTREE_OGERPON
# 28 "data/maps/FortreeCity/scripts.pory"
	removeobject LOCALID_OGERPON
# 29 "data/maps/FortreeCity/scripts.pory"
	setvar VAR_FORTREE_CITY_STATE, 1
# 30 "data/maps/FortreeCity/scripts.pory"
	releaseall
# 31 "data/maps/FortreeCity/scripts.pory"
	end
# 32 "data/maps/FortreeCity/scripts.pory"

# 33 "data/maps/FortreeCity/scripts.pory"
ForetreeCity_Movement_OgerponExit::
# 34 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 35 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 36 "data/maps/FortreeCity/scripts.pory"
	walk_up
# 37 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 38 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 39 "data/maps/FortreeCity/scripts.pory"
	step_end
# 40 "data/maps/FortreeCity/scripts.pory"

# 41 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Man::
# 42 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SawGiganticPokemonInSky, MSGBOX_NPC
# 43 "data/maps/FortreeCity/scripts.pory"
	end
# 44 "data/maps/FortreeCity/scripts.pory"

# 45 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Woman::
# 46 "data/maps/FortreeCity/scripts.pory"
	lock
# 47 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 48 "data/maps/FortreeCity/scripts.pory"
	goto_if_set FLAG_KECLEON_FLED_FORTREE, FortreeCity_EventScript_WomanGymAccessible
# 49 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingBlockingGym, MSGBOX_DEFAULT
# 50 "data/maps/FortreeCity/scripts.pory"
	release
# 51 "data/maps/FortreeCity/scripts.pory"
	end
# 52 "data/maps/FortreeCity/scripts.pory"

# 53 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_WomanGymAccessible::
# 54 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_ThisTimeIllBeatWinona, MSGBOX_DEFAULT
# 55 "data/maps/FortreeCity/scripts.pory"
	release
# 56 "data/maps/FortreeCity/scripts.pory"
	end
# 57 "data/maps/FortreeCity/scripts.pory"

# 58 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Girl::
# 59 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_TreesGrowByDrinkingRainwater, MSGBOX_NPC
# 60 "data/maps/FortreeCity/scripts.pory"
	end
# 61 "data/maps/FortreeCity/scripts.pory"

# 62 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_OldMan::
# 63 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_EveryoneHealthyAndLively, MSGBOX_NPC
# 64 "data/maps/FortreeCity/scripts.pory"
	end
# 65 "data/maps/FortreeCity/scripts.pory"

# 66 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Boy::
# 67 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_BugPokemonComeThroughWindow, MSGBOX_NPC
# 68 "data/maps/FortreeCity/scripts.pory"
	end
# 69 "data/maps/FortreeCity/scripts.pory"

# 70 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GameboyKid::
# 71 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_PokemonThatEvolveWhenTraded, MSGBOX_NPC
# 72 "data/maps/FortreeCity/scripts.pory"
	end
# 73 "data/maps/FortreeCity/scripts.pory"

# 74 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_CitySign::
# 75 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_CitySign, MSGBOX_SIGN
# 76 "data/maps/FortreeCity/scripts.pory"
	end
# 77 "data/maps/FortreeCity/scripts.pory"

# 78 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GymSign::
# 79 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_GymSign, MSGBOX_SIGN
# 80 "data/maps/FortreeCity/scripts.pory"
	end
# 81 "data/maps/FortreeCity/scripts.pory"

# 82 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Kecleon::
# 83 "data/maps/FortreeCity/scripts.pory"
	lock
# 84 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 85 "data/maps/FortreeCity/scripts.pory"
	checkitem ITEM_DEVON_SCOPE
# 86 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_EventScript_AskUseDevonScope
# 87 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingUnseeable, MSGBOX_DEFAULT
# 88 "data/maps/FortreeCity/scripts.pory"
	release
# 89 "data/maps/FortreeCity/scripts.pory"
	end
# 90 "data/maps/FortreeCity/scripts.pory"

# 91 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_AskUseDevonScope::
# 92 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UnseeableUseDevonScope, MSGBOX_YESNO
# 93 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FortreeCity_EventScript_UseDevonScope
# 94 "data/maps/FortreeCity/scripts.pory"
	release
# 95 "data/maps/FortreeCity/scripts.pory"
	end
# 96 "data/maps/FortreeCity/scripts.pory"

# 97 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_UseDevonScope::
# 98 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
# 99 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 100 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
# 101 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 102 "data/maps/FortreeCity/scripts.pory"
	waitse
# 103 "data/maps/FortreeCity/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 104 "data/maps/FortreeCity/scripts.pory"
	delay 40
# 105 "data/maps/FortreeCity/scripts.pory"
	waitmoncry
# 106 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, FortreeCity_Movement_KecleonFlee
# 107 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 108 "data/maps/FortreeCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 109 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_KECLEON_FLED_FORTREE
# 110 "data/maps/FortreeCity/scripts.pory"
	release
# 111 "data/maps/FortreeCity/scripts.pory"
	end
# 112 "data/maps/FortreeCity/scripts.pory"

# 113 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_KecleonFlee:
# 114 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 115 "data/maps/FortreeCity/scripts.pory"
	step_end
# 116 "data/maps/FortreeCity/scripts.pory"

# 117 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SawGiganticPokemonInSky:
# 118 "data/maps/FortreeCity/scripts.pory"
	.string "No one believes me, but I saw this\n"
# 119 "data/maps/FortreeCity/scripts.pory"
	.string "gigantic POKéMON in the sky.\p"
# 120 "data/maps/FortreeCity/scripts.pory"
	.string "It seemed to squirm as it flew toward\n"
# 121 "data/maps/FortreeCity/scripts.pory"
	.string "ROUTE 131.\p"
# 122 "data/maps/FortreeCity/scripts.pory"
	.string "By the way… Sniff…\n"
# 123 "data/maps/FortreeCity/scripts.pory"
	.string "Um… You, uh…smell singed.\p"
# 124 "data/maps/FortreeCity/scripts.pory"
	.string "Were you at a volcano or something?$"
# 125 "data/maps/FortreeCity/scripts.pory"

# 126 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingBlockingGym:
# 127 "data/maps/FortreeCity/scripts.pory"
	.string "I want to go to the POKéMON GYM,\n"
# 128 "data/maps/FortreeCity/scripts.pory"
	.string "but something's blocking the way.\p"
# 129 "data/maps/FortreeCity/scripts.pory"
	.string "After all the bother I went through\n"
# 130 "data/maps/FortreeCity/scripts.pory"
	.string "training on ROUTE 120…$"
# 131 "data/maps/FortreeCity/scripts.pory"

# 132 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_ThisTimeIllBeatWinona:
# 133 "data/maps/FortreeCity/scripts.pory"
	.string "I've got my pride-and-joy POKéMON\n"
# 134 "data/maps/FortreeCity/scripts.pory"
	.string "with me. This time, I'll beat WINONA.$"
# 135 "data/maps/FortreeCity/scripts.pory"

# 136 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_TreesGrowByDrinkingRainwater:
# 137 "data/maps/FortreeCity/scripts.pory"
	.string "The ground absorbs rainwater, and\n"
# 138 "data/maps/FortreeCity/scripts.pory"
	.string "trees grow by drinking that water…\p"
# 139 "data/maps/FortreeCity/scripts.pory"
	.string "Our FORTREE CITY exists because\n"
# 140 "data/maps/FortreeCity/scripts.pory"
	.string "there's both water and soil.$"
# 141 "data/maps/FortreeCity/scripts.pory"

# 142 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_EveryoneHealthyAndLively:
# 143 "data/maps/FortreeCity/scripts.pory"
	.string "The CITY consists of homes built on\n"
# 144 "data/maps/FortreeCity/scripts.pory"
	.string "trees.\p"
# 145 "data/maps/FortreeCity/scripts.pory"
	.string "Perhaps because of that lifestyle,\n"
# 146 "data/maps/FortreeCity/scripts.pory"
	.string "everyone is healthy and lively.\p"
# 147 "data/maps/FortreeCity/scripts.pory"
	.string "Why, even myself--I feel as if I've\n"
# 148 "data/maps/FortreeCity/scripts.pory"
	.string "grown thirty years younger.$"
# 149 "data/maps/FortreeCity/scripts.pory"

# 150 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_BugPokemonComeThroughWindow:
# 151 "data/maps/FortreeCity/scripts.pory"
	.string "Living on top of trees is okay.\p"
# 152 "data/maps/FortreeCity/scripts.pory"
	.string "But sometimes BUG POKéMON come in\n"
# 153 "data/maps/FortreeCity/scripts.pory"
	.string "through windows.\l"
# 154 "data/maps/FortreeCity/scripts.pory"
	.string "It can be really startling.$"
# 155 "data/maps/FortreeCity/scripts.pory"

# 156 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_PokemonThatEvolveWhenTraded:
# 157 "data/maps/FortreeCity/scripts.pory"
	.string "There are POKéMON that evolve when\n"
# 158 "data/maps/FortreeCity/scripts.pory"
	.string "you trade them! That's what I heard.$"
# 159 "data/maps/FortreeCity/scripts.pory"

# 160 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingUnseeable:
# 161 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.$"
# 162 "data/maps/FortreeCity/scripts.pory"

# 163 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UnseeableUseDevonScope:
# 164 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 165 "data/maps/FortreeCity/scripts.pory"
	.string "Want to use the DEVON SCOPE?$"
# 166 "data/maps/FortreeCity/scripts.pory"

# 167 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UsedDevonScopePokemonFled:
# 168 "data/maps/FortreeCity/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
# 169 "data/maps/FortreeCity/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 170 "data/maps/FortreeCity/scripts.pory"
	.string "visible!\p"
# 171 "data/maps/FortreeCity/scripts.pory"
	.string "The startled POKéMON fled!$"
# 172 "data/maps/FortreeCity/scripts.pory"

# 173 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_CitySign:
# 174 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY\n"
# 175 "data/maps/FortreeCity/scripts.pory"
	.string "“The treetop city that frolics with\l"
# 176 "data/maps/FortreeCity/scripts.pory"
	.string "nature.”$"
# 177 "data/maps/FortreeCity/scripts.pory"

# 178 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_GymSign:
# 179 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\n"
# 180 "data/maps/FortreeCity/scripts.pory"
	.string "LEADER: WINONA\p"
# 181 "data/maps/FortreeCity/scripts.pory"
	.string "“The bird user taking flight into\n"
# 182 "data/maps/FortreeCity/scripts.pory"
	.string "the world.”$"
