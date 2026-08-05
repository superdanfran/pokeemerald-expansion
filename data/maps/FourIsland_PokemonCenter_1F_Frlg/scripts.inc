# 1 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
FourIsland_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_PokemonCenter_1F_OnTransition
# 4 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 7 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
FourIsland_PokemonCenter_1F_OnTransition::
# 8 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_FOUR_ISLAND
# 9 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 10 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 11 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
FourIsland_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 15 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 16 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 17 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 18 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
FourIsland_PokemonCenter_1F_EventScript_Man::
# 19 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FourIsland_PokemonCenter_1F_Text_RareIceMonsInCave, MSGBOX_NPC
# 20 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 21 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 22 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
FourIsland_PokemonCenter_1F_EventScript_Woman::
# 23 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FourIsland_PokemonCenter_1F_Text_DayCarePeopleFoundEggBefore, MSGBOX_NPC
# 24 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 25 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 26 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
FourIsland_PokemonCenter_1F_EventScript_Gentleman::
# 27 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox FourIsland_PokemonCenter_1F_Text_NewPokemonJournalHasntArrived, MSGBOX_NPC
# 28 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 29 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 30 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
@ The 5 texts below are supposed to be in FourIsland_House1
# 31 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
Text_BodySlamTeach::
# 32 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Ready?\n"
# 33 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Boing!\p"
# 34 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "We're having a BODY SLAM match\n"
# 35 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "to see who wimps out first.\p"
# 36 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "If you were to join us, you'd be\n"
# 37 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "squashed like a bug, though…\p"
# 38 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "How about I teach BODY SLAM to\n"
# 39 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "a POKéMON of yours instead?$"
# 40 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 41 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
Text_BodySlamDeclined::
# 42 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Come again!\n"
# 43 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Boing!$"
# 44 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 45 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
Text_BodySlamWhichMon::
# 46 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Which POKéMON wants to learn how\n"
# 47 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "to BODY SLAM?$"
# 48 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 49 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
Text_BodySlamTaught::
# 50 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Boioing!$"
# 51 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 52 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
FourIsland_House1_Text_FatMan::
# 53 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "それ　ぼよーん！\n"
# 54 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "おまえ　おもいなあー！$"
# 55 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 56 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
FourIsland_PokemonCenter_1F_Text_RareIceMonsInCave::
# 57 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "There's a rare kind of ICE POKéMON\n"
# 58 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "that lives in the cave.\p"
# 59 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "We get a lot of visitors hoping to\n"
# 60 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "see that POKéMON.$"
# 61 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 62 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
FourIsland_PokemonCenter_1F_Text_DayCarePeopleFoundEggBefore::
# 63 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Oh? A POKéMON EGG?\n"
# 64 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "…I have no idea.\p"
# 65 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "…Oh, wait. The DAY-CARE people\n"
# 66 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "in town were saying something.\p"
# 67 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "They said that they'd found EGGS\n"
# 68 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "before on their property.$"
# 69 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"

# 70 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
FourIsland_PokemonCenter_1F_Text_NewPokemonJournalHasntArrived::
# 71 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "What's this?\p"
# 72 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "The new POKéMON JOURNAL hasn't\n"
# 73 "data/maps/FourIsland_PokemonCenter_1F_Frlg/scripts.pory"
	.string "arrived on this island?$"
