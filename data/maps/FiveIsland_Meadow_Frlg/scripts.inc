# 1 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Frlg_MapScripts::
# 3 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_Meadow_OnLoad
# 4 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 6 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_OnLoad::
# 7 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	call_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked
# 8 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	end
# 9 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 10 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_EventScript_WarehouseDoor::
# 11 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	lockall
# 12 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	goto_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_EventScript_WarehouseDoorAlreadyOpen
# 13 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	goto_if_set FLAG_LEARNED_YES_NAH_CHANSEY, FiveIsland_Meadow_EventScript_OpenWarehouseDoor
# 14 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	msgbox FiveIsland_Meadow_Text_EnteredPasswordAnotherNeeded
# 15 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	releaseall
# 16 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	end
# 17 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 18 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_EventScript_OpenWarehouseDoor::
# 19 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	setflag FLAG_UNLOCKED_ROCKET_WAREHOUSE
# 20 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	message FiveIsland_Meadow_Text_EnteredPasswordDoorOpened
# 21 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	waitmessage
# 22 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	delay 60
# 23 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	call FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked
# 24 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	special DrawWholeMapView
# 25 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	playse SE_PIN
# 26 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	waitse
# 27 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	releaseall
# 28 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	end
# 29 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 30 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_EventScript_WarehouseDoorAlreadyOpen::
# 31 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	msgbox FiveIsland_Meadow_Text_WarehouseDoorAlreadyOpen
# 32 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	releaseall
# 33 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	end
# 34 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 35 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked::
# 36 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	setmetatile 12, 21, METATILE_SeviiIslands45_RocketWarehouseDoor_Unlocked, 1
# 37 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	return
# 38 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 39 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_EventScript_Rocket1::
# 40 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_49, FiveIsland_Meadow_Text_Rocket1Intro, FiveIsland_Meadow_Text_Rocket1Defeat
# 41 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket1PostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	end
# 43 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 44 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_EventScript_Rocket2::
# 45 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_50, FiveIsland_Meadow_Text_Rocket2Intro, FiveIsland_Meadow_Text_Rocket2Defeat
# 46 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	end
# 48 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 49 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_EventScript_Rocket3::
# 50 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_51, FiveIsland_Meadow_Text_Rocket3Intro, FiveIsland_Meadow_Text_Rocket3Defeat
# 51 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket3PostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	end
# 53 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 54 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
@ Unused
# 55 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_DoorNeedsTwoPasswords::
# 56 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "とびらを　あけるには\n"
# 57 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "パスワードが　2つ　いるようだ$"
# 58 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 59 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_EnteredPasswordAnotherNeeded::
# 60 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "{PLAYER} entered a password.\p"
# 61 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "“GOLDEEN need log.”\p"
# 62 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "… …  … …  … …\p"
# 63 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "Another password is needed to\n"
# 64 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "open the door…$"
# 65 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 66 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_EnteredPasswordDoorOpened::
# 67 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "{PLAYER} entered two passwords.\p"
# 68 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "“GOLDEEN need log.”\n"
# 69 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "“Yes, nah, CHANSEY.”\p"
# 70 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "… …  … …  … …\p"
# 71 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "The WAREHOUSE's door opened!$"
# 72 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 73 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_WarehouseDoorAlreadyOpen::
# 74 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "The WAREHOUSE's door is already\n"
# 75 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "open.$"
# 76 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 77 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_Rocket1Intro::
# 78 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "This area's strictly off-limits!\n"
# 79 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "Out, out!$"
# 80 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 81 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_Rocket1Defeat::
# 82 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "Is this for real?$"
# 83 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 84 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_Rocket1PostBattle::
# 85 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "You don't have any business here!\n"
# 86 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "Go home!$"
# 87 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 88 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_Rocket2Intro::
# 89 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "There's nothing past here except\n"
# 90 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "our WAREHOUSE.\p"
# 91 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "So what brings you here?$"
# 92 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 93 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_Rocket2Defeat::
# 94 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "That wasn't supposed to happen…$"
# 95 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 96 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_Rocket2PostBattle::
# 97 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "You're wanting to know what's inside\n"
# 98 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "this WAREHOUSE?\p"
# 99 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "It's better you didn't know.\n"
# 100 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "For your own sake, I mean.$"
# 101 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 102 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_Rocket3Intro::
# 103 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "You'd be wasting time even if you\n"
# 104 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "were to get by me.$"
# 105 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 106 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_Rocket3Defeat::
# 107 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "Oh, that makes me furious!$"
# 108 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"

# 109 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
FiveIsland_Meadow_Text_Rocket3PostBattle::
# 110 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "You won't be able to get in without\n"
# 111 "data/maps/FiveIsland_Meadow_Frlg/scripts.pory"
	.string "the passwords anyway.$"
