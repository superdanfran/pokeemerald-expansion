# 1 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 2 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
ThreeIsland_Mart_Frlg_MapScripts::
# 3 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 5 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
ThreeIsland_Mart_EventScript_Clerk::
# 6 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	lock
# 7 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	waitmessage
# 10 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	pokemart ThreeIsland_Mart_Items
# 11 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 12 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	release
# 13 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	end
# 14 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 15 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.align 2
# 16 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
ThreeIsland_Mart_Items::
# 17 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 18 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 19 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_REVIVE
# 20 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 21 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 22 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 23 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 24 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	release
# 25 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	end
# 26 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 27 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
ThreeIsland_Mart_EventScript_Picnicker::
# 28 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	msgbox ThreeIsland_Mart_Text_TrueThatCeldadonDeptStoreBigger, MSGBOX_NPC
# 29 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	end
# 30 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 31 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
ThreeIsland_Mart_EventScript_BugCatcher::
# 32 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	msgbox ThreeIsland_Mart_Text_PeopleHealWithBerriesFromForest, MSGBOX_NPC
# 33 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	end
# 34 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 35 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
ThreeIsland_Mart_EventScript_Youngster::
# 36 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	msgbox ThreeIsland_Mart_Text_BikersWereAboutToTrashMart, MSGBOX_NPC
# 37 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	end
# 38 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 39 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
ThreeIsland_Mart_Text_TrueThatCeldadonDeptStoreBigger::
# 40 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "Is it true?\p"
# 41 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "CELADON DEPT. STORE is several\n"
# 42 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "times bigger than this shop?$"
# 43 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 44 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
ThreeIsland_Mart_Text_PeopleHealWithBerriesFromForest::
# 45 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "I sometimes buy medicine here.\p"
# 46 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "But a lot of people heal POKéMON\n"
# 47 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "with BERRIES from BERRY FOREST.\p"
# 48 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "After all, BERRIES are free and\n"
# 49 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "they never run out.$"
# 50 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"

# 51 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
ThreeIsland_Mart_Text_BikersWereAboutToTrashMart::
# 52 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "Those BIKERS were about to trash\n"
# 53 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "this POKéMON MART.\p"
# 54 "data/maps/ThreeIsland_Mart_Frlg/scripts.pory"
	.string "Am I glad they decided to leave!$"
