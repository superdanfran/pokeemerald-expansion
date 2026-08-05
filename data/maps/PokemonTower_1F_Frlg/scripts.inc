# 1 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 2 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_Frlg_MapScripts::
# 3 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonTower_1F_OnTransition
# 4 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 6 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_OnTransition::
# 7 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_POKEMON_TOWER_1F
# 8 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	end
# 9 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 10 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_EventScript_Channeler::
# 11 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_SenseSpiritsUpToMischief, MSGBOX_NPC
# 12 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	end
# 13 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 14 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_EventScript_Woman1::
# 15 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_GrowlitheWhyDidYouDie, MSGBOX_NPC
# 16 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	end
# 17 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 18 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_EventScript_BaldingMan::
# 19 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_CameToPrayForDepartedClefairy, MSGBOX_NPC
# 20 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	end
# 21 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 22 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_EventScript_Woman2::
# 23 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	lock
# 24 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	faceplayer
# 25 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	checkplayergender
# 26 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, PokemonTower_1F_EventScript_Woman2MalePlayer
# 27 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_ComeToPayRespectsGirl
# 28 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	release
# 29 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	end
# 30 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 31 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_EventScript_Woman2MalePlayer::
# 32 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_ComeToPayRespectsSon
# 33 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	release
# 34 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	end
# 35 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 36 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_EventScript_WorkerF::
# 37 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	msgbox PokemonTower_1F_Text_ErectedInMemoryOfDeadMons, MSGBOX_NPC
# 38 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	end
# 39 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 40 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_Text_ErectedInMemoryOfDeadMons::
# 41 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "POKéMON TOWER was erected in the\n"
# 42 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "memory of POKéMON that died.$"
# 43 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 44 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_Text_ComeToPayRespectsSon::
# 45 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "Did you come to pay respects?\p"
# 46 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "Bless your POKéMON-loving heart,\n"
# 47 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "son.$"
# 48 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 49 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_Text_ComeToPayRespectsGirl::
# 50 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "Did you come to pay respects?\p"
# 51 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "Bless your POKéMON-loving heart,\n"
# 52 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "girl.$"
# 53 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 54 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_Text_CameToPrayForDepartedClefairy::
# 55 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "I came to pray for my dearly\n"
# 56 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "departed CLEFAIRY.\p"
# 57 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "Sniff!\n"
# 58 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "I'm awash in tears…$"
# 59 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 60 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_Text_GrowlitheWhyDidYouDie::
# 61 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "My GROWLITHE…\n"
# 62 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "Why did you die?$"
# 63 "data/maps/PokemonTower_1F_Frlg/scripts.pory"

# 64 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
PokemonTower_1F_Text_SenseSpiritsUpToMischief::
# 65 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "I am a CHANNELER.\p"
# 66 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "There are spirits up to mischief.\n"
# 67 "data/maps/PokemonTower_1F_Frlg/scripts.pory"
	.string "I sense them high in the TOWER.$"
