# 1 "data/maps/SevenIsland_Frlg/scripts.pory"

# 2 "data/maps/SevenIsland_Frlg/scripts.pory"
SevenIsland_Frlg_MapScripts::
# 3 "data/maps/SevenIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_OnTransition
# 4 "data/maps/SevenIsland_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/SevenIsland_Frlg/scripts.pory"

# 6 "data/maps/SevenIsland_Frlg/scripts.pory"
SevenIsland_OnTransition::
# 7 "data/maps/SevenIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SEVEN_ISLAND
# 8 "data/maps/SevenIsland_Frlg/scripts.pory"
	end
# 9 "data/maps/SevenIsland_Frlg/scripts.pory"

# 10 "data/maps/SevenIsland_Frlg/scripts.pory"
SevenIsland_EventScript_IslandSign::
# 11 "data/maps/SevenIsland_Frlg/scripts.pory"
	msgbox SevenIsland_Text_IslandSign, MSGBOX_SIGN
# 12 "data/maps/SevenIsland_Frlg/scripts.pory"
	end
# 13 "data/maps/SevenIsland_Frlg/scripts.pory"

# 14 "data/maps/SevenIsland_Frlg/scripts.pory"
SevenIsland_EventScript_OldWoman::
# 15 "data/maps/SevenIsland_Frlg/scripts.pory"
	msgbox SevenIsland_Text_IslandsMadeInSevenDays, MSGBOX_NPC
# 16 "data/maps/SevenIsland_Frlg/scripts.pory"
	end
# 17 "data/maps/SevenIsland_Frlg/scripts.pory"

# 18 "data/maps/SevenIsland_Frlg/scripts.pory"
SevenIsland_EventScript_Scientist::
# 19 "data/maps/SevenIsland_Frlg/scripts.pory"
	msgbox SevenIsland_Text_IslandVirtuallyUntouched, MSGBOX_NPC
# 20 "data/maps/SevenIsland_Frlg/scripts.pory"
	end
# 21 "data/maps/SevenIsland_Frlg/scripts.pory"

# 22 "data/maps/SevenIsland_Frlg/scripts.pory"
Text_SwordsDanceTeach::
# 23 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "Not many people come out here.\p"
# 24 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "If I train here, I'm convinced that\n"
# 25 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "I'll get stronger and stronger.\p"
# 26 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "Yep, stronger and stronger…\p"
# 27 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "How would you like to learn a move\n"
# 28 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "like that? It's SWORDS DANCE.$"
# 29 "data/maps/SevenIsland_Frlg/scripts.pory"

# 30 "data/maps/SevenIsland_Frlg/scripts.pory"
Text_SwordsDanceDeclined::
# 31 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "Well, that's fine, too.$"
# 32 "data/maps/SevenIsland_Frlg/scripts.pory"

# 33 "data/maps/SevenIsland_Frlg/scripts.pory"
Text_SwordsDanceWhichMon::
# 34 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "All right, pick which POKéMON\n"
# 35 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "I should teach it to.$"
# 36 "data/maps/SevenIsland_Frlg/scripts.pory"

# 37 "data/maps/SevenIsland_Frlg/scripts.pory"
Text_SwordsDanceTaught::
# 38 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "If only we could keep getting\n"
# 39 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "stronger and stronger, eh?$"
# 40 "data/maps/SevenIsland_Frlg/scripts.pory"

# 41 "data/maps/SevenIsland_Frlg/scripts.pory"
SevenIsland_Text_IslandSign::
# 42 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "SEVEN ISLAND\n"
# 43 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "Quest Island of Infinity$"
# 44 "data/maps/SevenIsland_Frlg/scripts.pory"

# 45 "data/maps/SevenIsland_Frlg/scripts.pory"
SevenIsland_Text_IslandsMadeInSevenDays::
# 46 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "These islands are called the SEVII\n"
# 47 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "ISLANDS because there are seven.\p"
# 48 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "…Or at least that's what the young\n"
# 49 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "people believe.\p"
# 50 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "The truth is, these islands are so\n"
# 51 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "named because they are said to\l"
# 52 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "have been made in seven days.$"
# 53 "data/maps/SevenIsland_Frlg/scripts.pory"

# 54 "data/maps/SevenIsland_Frlg/scripts.pory"
SevenIsland_Text_IslandVirtuallyUntouched::
# 55 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "This island has been left virtually\n"
# 56 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "untouched in its natural state.\p"
# 57 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "It could be a little difficult to\n"
# 58 "data/maps/SevenIsland_Frlg/scripts.pory"
	.string "hike around because of that.$"
