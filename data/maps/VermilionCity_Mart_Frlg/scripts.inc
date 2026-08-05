# 1 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"

# 2 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
VermilionCity_Mart_Frlg_MapScripts::
# 3 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"

# 5 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
VermilionCity_Mart_EventScript_CooltrainerF::
# 6 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	msgbox VermilionCity_Mart_Text_MonsGoodOrBadDependingOnTrainer, MSGBOX_NPC
# 7 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	end
# 8 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"

# 9 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
VermilionCity_Mart_EventScript_BaldingMan::
# 10 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	msgbox VermilionCity_Mart_Text_TeamRocketAreWickedPeople, MSGBOX_NPC
# 11 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	end
# 12 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"

# 13 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
VermilionCity_Mart_EventScript_Clerk::
# 14 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	lock
# 15 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 17 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	waitmessage
# 18 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	pokemart VermilionCity_Mart_Items
# 19 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 20 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	release
# 21 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	end
# 22 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"

# 23 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.align 2
# 24 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
VermilionCity_Mart_Items::
# 25 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_POKE_BALL
# 26 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 27 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 28 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 29 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_AWAKENING
# 30 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 31 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_REPEL
# 32 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 33 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	release
# 34 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	end
# 35 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"

# 36 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
VermilionCity_Mart_Text_TeamRocketAreWickedPeople::
# 37 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.string "There are wicked people who will\n"
# 38 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.string "use POKéMON for criminal acts.\p"
# 39 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.string "TEAM ROCKET traffics in rare\n"
# 40 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.string "POKéMON, for example.\p"
# 41 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.string "They also abandon POKéMON that\n"
# 42 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.string "they consider unpopular or useless.\p"
# 43 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.string "That's the sort of horrid people\n"
# 44 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.string "they are, TEAM ROCKET.$"
# 45 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"

# 46 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
VermilionCity_Mart_Text_MonsGoodOrBadDependingOnTrainer::
# 47 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.string "I think POKéMON can be good or\n"
# 48 "data/maps/VermilionCity_Mart_Frlg/scripts.pory"
	.string "bad. It depends on the TRAINER.$"
