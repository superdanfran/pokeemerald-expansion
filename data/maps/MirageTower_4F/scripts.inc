# 1 "data/maps/MirageTower_4F/scripts.pory"

# 2 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_MapScripts::
# 3 "data/maps/MirageTower_4F/scripts.pory"
	.byte 0
# 4 "data/maps/MirageTower_4F/scripts.pory"

# 5 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_DinoFossil::
# 6 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 7 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 8 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeDinoFossil, MSGBOX_YESNO
# 9 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveDinoFossil
# 10 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_FOSSILIZED_DINO
# 11 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 12 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 13 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_DINO_FOSSIL
# 14 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_DRAKE_FOSSIL
# 15 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_FISH_FOSSIL
# 16 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_BIRD_FOSSIL
# 17 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_MIRAGE_DINO_FOSSIL
# 18 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 19 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_DINO_FOSSIL
# 20 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 21 "data/maps/MirageTower_4F/scripts.pory"
	end
# 22 "data/maps/MirageTower_4F/scripts.pory"

# 23 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeaveDinoFossil::
# 24 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeftDinoFossilAlone, MSGBOX_DEFAULT
# 25 "data/maps/MirageTower_4F/scripts.pory"
	release
# 26 "data/maps/MirageTower_4F/scripts.pory"
	end
# 27 "data/maps/MirageTower_4F/scripts.pory"

# 28 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_DrakeFossil::
# 29 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 30 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 31 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeDrakeFossil, MSGBOX_YESNO
# 32 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveDrakeFossil
# 33 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_FOSSILIZED_DRAKE
# 34 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 35 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 36 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_DINO_FOSSIL
# 37 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_DRAKE_FOSSIL
# 38 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_FISH_FOSSIL
# 39 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_BIRD_FOSSIL
# 40 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_MIRAGE_DRAKE_FOSSIL
# 41 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 42 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_DRAKE_FOSSIL
# 43 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 44 "data/maps/MirageTower_4F/scripts.pory"
	end
# 45 "data/maps/MirageTower_4F/scripts.pory"

# 46 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeaveDrakeFossil::
# 47 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeftDrakeFossilAlone, MSGBOX_DEFAULT
# 48 "data/maps/MirageTower_4F/scripts.pory"
	release
# 49 "data/maps/MirageTower_4F/scripts.pory"
	end
# 50 "data/maps/MirageTower_4F/scripts.pory"

# 51 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_FishFossil::
# 52 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 53 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 54 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeFishFossil, MSGBOX_YESNO
# 55 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveFishFossil
# 56 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_FOSSILIZED_FISH
# 57 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 58 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 59 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_DINO_FOSSIL
# 60 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_DRAKE_FOSSIL
# 61 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_FISH_FOSSIL
# 62 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_BIRD_FOSSIL
# 63 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_MIRAGE_FISH_FOSSIL
# 64 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 65 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_FISH_FOSSIL
# 66 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 67 "data/maps/MirageTower_4F/scripts.pory"
	end
# 68 "data/maps/MirageTower_4F/scripts.pory"

# 69 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeaveFishFossil::
# 70 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeftFishFossilAlone, MSGBOX_DEFAULT
# 71 "data/maps/MirageTower_4F/scripts.pory"
	release
# 72 "data/maps/MirageTower_4F/scripts.pory"
	end
# 73 "data/maps/MirageTower_4F/scripts.pory"

# 74 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_BirdFossil::
# 75 "data/maps/MirageTower_4F/scripts.pory"
	lock
# 76 "data/maps/MirageTower_4F/scripts.pory"
	faceplayer
# 77 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_TakeBirdFossil, MSGBOX_YESNO
# 78 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveBirdFossil
# 79 "data/maps/MirageTower_4F/scripts.pory"
	giveitem ITEM_FOSSILIZED_BIRD
# 80 "data/maps/MirageTower_4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 81 "data/maps/MirageTower_4F/scripts.pory"
	closemessage
# 82 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_DINO_FOSSIL
# 83 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_DRAKE_FOSSIL
# 84 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_FISH_FOSSIL
# 85 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_HIDE_MIRAGE_TOWER_BIRD_FOSSIL
# 86 "data/maps/MirageTower_4F/scripts.pory"
	removeobject LOCALID_MIRAGE_BIRD_FOSSIL
# 87 "data/maps/MirageTower_4F/scripts.pory"
	delay 30
# 88 "data/maps/MirageTower_4F/scripts.pory"
	setflag FLAG_CHOSE_BIRD_FOSSIL
# 89 "data/maps/MirageTower_4F/scripts.pory"
	goto MirageTower_4F_EventScript_CollapseMirageTower
# 90 "data/maps/MirageTower_4F/scripts.pory"
	end
# 91 "data/maps/MirageTower_4F/scripts.pory"

# 92 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_LeaveBirdFossil::
# 93 "data/maps/MirageTower_4F/scripts.pory"
	msgbox MirageTower_4F_Text_LeftBirdFossilAlone, MSGBOX_DEFAULT
# 94 "data/maps/MirageTower_4F/scripts.pory"
	release
# 95 "data/maps/MirageTower_4F/scripts.pory"
	end
# 96 "data/maps/MirageTower_4F/scripts.pory"

# 97 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_EventScript_CollapseMirageTower::
# 98 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 99 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8005, 1   @ horizontal pan
# 100 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8006, 32  @ num shakes
# 101 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_0x8007, 2   @ shake delay
# 102 "data/maps/MirageTower_4F/scripts.pory"
	special ShakeCamera
# 103 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 104 "data/maps/MirageTower_4F/scripts.pory"
	special DoMirageTowerCeilingCrumble
# 105 "data/maps/MirageTower_4F/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 1
# 106 "data/maps/MirageTower_4F/scripts.pory"
	clearflag FLAG_LANDMARK_MIRAGE_TOWER
# 107 "data/maps/MirageTower_4F/scripts.pory"
	warp MAP_ROUTE111, 19, 59
# 108 "data/maps/MirageTower_4F/scripts.pory"
	waitstate
# 109 "data/maps/MirageTower_4F/scripts.pory"
	release
# 110 "data/maps/MirageTower_4F/scripts.pory"
	end
# 111 "data/maps/MirageTower_4F/scripts.pory"

# 112 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_TakeDinoFossil:
# 113 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found a FOSSILIZED DINO.\p"
# 114 "data/maps/MirageTower_4F/scripts.pory"
	.string "If this FOSSIL is taken, the ground\n"
# 115 "data/maps/MirageTower_4F/scripts.pory"
	.string "around it will likely crumble away…\p"
# 116 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the FOSSILIZED DINO anyway?$"
# 117 "data/maps/MirageTower_4F/scripts.pory"

# 118 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeftDinoFossilAlone:
# 119 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the FOSSILIZED DINO.$"
# 120 "data/maps/MirageTower_4F/scripts.pory"

# 121 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_TakeDrakeFossil:
# 122 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found a FOSSILIZED DRAKE.\p"
# 123 "data/maps/MirageTower_4F/scripts.pory"
	.string "If this FOSSIL is taken, the ground\n"
# 124 "data/maps/MirageTower_4F/scripts.pory"
	.string "around it will likely crumble away…\p"
# 125 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the FOSSILIZED DRAKE anyway?$"
# 126 "data/maps/MirageTower_4F/scripts.pory"

# 127 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeftDrakeFossilAlone:
# 128 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the FOSSILIZED DRAKE.$"
# 129 "data/maps/MirageTower_4F/scripts.pory"

# 130 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_TakeFishFossil:
# 131 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found a FOSSILIZED FISH.\p"
# 132 "data/maps/MirageTower_4F/scripts.pory"
	.string "If this FOSSIL is taken, the ground\n"
# 133 "data/maps/MirageTower_4F/scripts.pory"
	.string "around it will likely crumble away…\p"
# 134 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the FOSSILIZED FISH anyway?$"
# 135 "data/maps/MirageTower_4F/scripts.pory"

# 136 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeftFishFossilAlone:
# 137 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the FOSSILIZED FISH.$"
# 138 "data/maps/MirageTower_4F/scripts.pory"

# 139 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_TakeBirdFossil:
# 140 "data/maps/MirageTower_4F/scripts.pory"
	.string "You found a FOSSILIZED BIRD.\p"
# 141 "data/maps/MirageTower_4F/scripts.pory"
	.string "If this FOSSIL is taken, the ground\n"
# 142 "data/maps/MirageTower_4F/scripts.pory"
	.string "around it will likely crumble away…\p"
# 143 "data/maps/MirageTower_4F/scripts.pory"
	.string "Take the FOSSILIZED BIRD anyway?$"
# 144 "data/maps/MirageTower_4F/scripts.pory"

# 145 "data/maps/MirageTower_4F/scripts.pory"
MirageTower_4F_Text_LeftBirdFossilAlone:
# 146 "data/maps/MirageTower_4F/scripts.pory"
	.string "{PLAYER} left the FOSSILIZED BIRD.$"
