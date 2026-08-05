# 1 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 2 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_Frlg_MapScripts::
# 3 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_LoreleisHouse_OnTransition
# 4 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 6 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_OnTransition::
# 7 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	special UpdateLoreleiDollCollection
# 8 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	end
# 9 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 10 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_EventScript_Lorelei::
# 11 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	lock
# 12 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	faceplayer
# 13 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	goto_if_set FLAG_TALKED_TO_LORELEI_AFTER_WAREHOUSE, FourIsland_LoreleisHouse_EventScript_Lorelei3
# 14 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE, FourIsland_LoreleisHouse_EventScript_Lorelei2
# 15 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	msgbox FourIsland_LoreleisHouse_Text_IfAnythingWereToHappenToIsland
# 16 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	release
# 17 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	end
# 18 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 19 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_EventScript_Lorelei2::
# 20 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	setflag FLAG_TALKED_TO_LORELEI_AFTER_WAREHOUSE
# 21 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	msgbox FourIsland_LoreleisHouse_Text_IllReturnToLeagueInShortWhile
# 22 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	release
# 23 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	end
# 24 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 25 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_EventScript_Lorelei3::
# 26 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	msgbox FourIsland_LoreleisHouse_Text_WillDoWhatICanHereAndNow
# 27 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	release
# 28 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	end
# 29 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 30 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_EventScript_Doll::
# 31 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	lock
# 32 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	msgbox FourIsland_LoreleisHouse_Text_StuffedMonDollsGalore
# 33 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	release
# 34 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	end
# 35 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 36 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_Text_IfAnythingWereToHappenToIsland::
# 37 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "LORELEI: There's something weighing\n"
# 38 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "heavily on my mind.\p"
# 39 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "If anything were to happen on\n"
# 40 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "the island where I was born…\p"
# 41 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "I wouldn't know about it if I were\n"
# 42 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "in the POKéMON LEAGUE.\p"
# 43 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "I wonder if that would make me\n"
# 44 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "irresponsible to my home…$"
# 45 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 46 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_Text_IllReturnToLeagueInShortWhile::
# 47 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "LORELEI: So, you managed to solve\n"
# 48 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "all the problems here?\p"
# 49 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "That's wonderful.\p"
# 50 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "That means there isn't any reason\n"
# 51 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "for me to be here all the time.\p"
# 52 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "Thank you…\p"
# 53 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "I'll return to the POKéMON LEAGUE\n"
# 54 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "in a short while.$"
# 55 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 56 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_Text_WillDoWhatICanHereAndNow::
# 57 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "I don't know what will happen in\n"
# 58 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "the future, but…\p"
# 59 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "I will do what I can here and now.\n"
# 60 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "That's all I can do.$"
# 61 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"

# 62 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
FourIsland_LoreleisHouse_Text_StuffedMonDollsGalore::
# 63 "data/maps/FourIsland_LoreleisHouse_Frlg/scripts.pory"
	.string "Stuffed POKéMON dolls galore!$"
