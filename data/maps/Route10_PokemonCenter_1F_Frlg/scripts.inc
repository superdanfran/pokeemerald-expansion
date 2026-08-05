# 1 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
.equ REQUIRED_OWNED_MONS, 20
# 3 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 4 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_Frlg_MapScripts::
# 5 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route10_PokemonCenter_1F_OnTransition
# 6 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 9 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_OnTransition::
# 10 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROUTE10_POKEMON_CENTER_1F
# 11 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE10
# 12 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 13 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 14 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 16 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 17 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 18 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 19 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 20 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 21 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_EventScript_FatMan::
# 22 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_NuggetUselessSoldFor5000, MSGBOX_NPC
# 23 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 24 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 25 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Gentleman::
# 26 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_EveryTypeStrongerThanOthers, MSGBOX_NPC
# 27 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 28 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 29 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Youngster::
# 30 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_HeardGhostsHauntLavender, MSGBOX_NPC
# 31 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 32 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 33 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Aide::
# 34 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 35 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 36 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	call Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo
# 37 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE, Route10_PokemonCenter_1F_EventScript_AlreadyGotEverstone
# 38 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_GiveEverstoneIfCaught20Mons, MSGBOX_YESNO
# 39 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
# 40 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 41 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 42 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 43 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	call Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo
# 44 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_lt VAR_0x8006, REQUIRED_OWNED_MONS, Aide_EventScript_HaventCaughtEnough
# 45 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_GreatHereYouGo
# 46 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	checkitemspace ITEM_EVERSTONE
# 47 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Aide_EventScript_NoRoomForItem
# 48 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	giveitem_msg Route10_PokemonCenter_1F_Text_ReceivedEverstoneFromAide, ITEM_EVERSTONE
# 49 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	setflag FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE
# 50 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_ExplainEverstone
# 51 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 52 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 53 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 54 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_EventScript_AlreadyGotEverstone::
# 55 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_ExplainEverstone
# 56 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 57 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 58 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 59 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo::
# 60 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, REQUIRED_OWNED_MONS
# 61 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_EVERSTONE
# 62 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	return
# 63 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 64 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_Text_EveryTypeStrongerThanOthers::
# 65 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The types of POKéMON match up\n"
# 66 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "differently with each other.\p"
# 67 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Every type is stronger than some\n"
# 68 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "types and weaker than others.$"
# 69 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 70 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_Text_NuggetUselessSoldFor5000::
# 71 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "A NUGGET is totally useless.\n"
# 72 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "So I sold it for ¥5000.$"
# 73 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 74 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_Text_HeardGhostsHauntLavender::
# 75 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I heard that ghosts haunt\n"
# 76 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "LAVENDER TOWN.$"
# 77 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 78 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_Text_GiveEverstoneIfCaught20Mons::
# 79 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Oh… {PLAYER}!\n"
# 80 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I've been looking for you!\p"
# 81 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It's me, one of the ever-present\n"
# 82 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "AIDES to PROF. OAK.\p"
# 83 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If your POKéDEX has complete data\n"
# 84 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "on twenty species, I'm supposed to\l"
# 85 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "give you a reward from PROF. OAK.\p"
# 86 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "He entrusted me with this\n"
# 87 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "EVERSTONE.\p"
# 88 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "So, {PLAYER}, let me ask you.\p"
# 89 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Have you gathered data on at least\n"
# 90 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "twenty kinds of POKéMON?$"
# 91 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 92 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_Text_GreatHereYouGo::
# 93 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Great! You have caught or owned\n"
# 94 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{STR_VAR_3} kinds of POKéMON!\p"
# 95 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Congratulations!\n"
# 96 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Here you go!$"
# 97 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 98 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_Text_ReceivedEverstoneFromAide::
# 99 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "{PLAYER} received the EVERSTONE\n"
# 100 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "from the AIDE.$"
# 101 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"

# 102 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
Route10_PokemonCenter_1F_Text_ExplainEverstone::
# 103 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Making POKéMON evolve certainly\n"
# 104 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "can add to the POKéDEX.\p"
# 105 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "However, at times, you may not\n"
# 106 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "want a certain POKéMON to evolve.\p"
# 107 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "In that case, give the EVERSTONE\n"
# 108 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "to that POKéMON.\p"
# 109 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "It will prevent evolution according\n"
# 110 "data/maps/Route10_PokemonCenter_1F_Frlg/scripts.pory"
	.string "to the PROFESSOR.$"
