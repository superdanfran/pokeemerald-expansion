MirageTower_4F_MapScripts::
	.byte 0

MirageTower_4F_EventScript_DinoFossil::
	lock
	faceplayer
	msgbox MirageTower_4F_Text_TakeDinoFossil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveDinoFossil
	giveitem ITEM_FOSSILIZED_DINO
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	closemessage
	setflag FLAG_HIDE_MIRAGE_TOWER_DINO_FOSSIL
	setflag FLAG_HIDE_MIRAGE_TOWER_DRAKE_FOSSIL
	setflag FLAG_HIDE_MIRAGE_TOWER_FISH_FOSSIL
	setflag FLAG_HIDE_MIRAGE_TOWER_BIRD_FOSSIL
	removeobject LOCALID_MIRAGE_DINO_FOSSIL
	delay 30
	setflag FLAG_CHOSE_DINO_FOSSIL
	goto MirageTower_4F_EventScript_CollapseMirageTower
	end

MirageTower_4F_EventScript_LeaveDinoFossil::
	msgbox MirageTower_4F_Text_LeftDinoFossilAlone, MSGBOX_DEFAULT
	release
	end

MirageTower_4F_EventScript_DrakeFossil::
	lock
	faceplayer
	msgbox MirageTower_4F_Text_TakeDrakeFossil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveDrakeFossil
	giveitem ITEM_FOSSILIZED_DRAKE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	closemessage
	setflag FLAG_HIDE_MIRAGE_TOWER_DINO_FOSSIL
	setflag FLAG_HIDE_MIRAGE_TOWER_DRAKE_FOSSIL
	setflag FLAG_HIDE_MIRAGE_TOWER_FISH_FOSSIL
	setflag FLAG_HIDE_MIRAGE_TOWER_BIRD_FOSSIL
	removeobject LOCALID_MIRAGE_DRAKE_FOSSIL
	delay 30
	setflag FLAG_CHOSE_DRAKE_FOSSIL
	goto MirageTower_4F_EventScript_CollapseMirageTower
	end

MirageTower_4F_EventScript_LeaveDrakeFossil::
	msgbox MirageTower_4F_Text_LeftDrakeFossilAlone, MSGBOX_DEFAULT
	release
	end

MirageTower_4F_EventScript_FishFossil::
	lock
	faceplayer
	msgbox MirageTower_4F_Text_TakeFishFossil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveFishFossil
	giveitem ITEM_FOSSILIZED_FISH
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	closemessage
	setflag FLAG_HIDE_MIRAGE_TOWER_DINO_FOSSIL
	setflag FLAG_HIDE_MIRAGE_TOWER_DRAKE_FOSSIL
	setflag FLAG_HIDE_MIRAGE_TOWER_FISH_FOSSIL
	setflag FLAG_HIDE_MIRAGE_TOWER_BIRD_FOSSIL
	removeobject LOCALID_MIRAGE_FISH_FOSSIL
	delay 30
	setflag FLAG_CHOSE_FISH_FOSSIL
	goto MirageTower_4F_EventScript_CollapseMirageTower
	end

MirageTower_4F_EventScript_LeaveFishFossil::
	msgbox MirageTower_4F_Text_LeftFishFossilAlone, MSGBOX_DEFAULT
	release
	end

MirageTower_4F_EventScript_BirdFossil::
	lock
	faceplayer
	msgbox MirageTower_4F_Text_TakeBirdFossil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveBirdFossil
	giveitem ITEM_FOSSILIZED_BIRD
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	closemessage
	setflag FLAG_HIDE_MIRAGE_TOWER_DINO_FOSSIL
	setflag FLAG_HIDE_MIRAGE_TOWER_DRAKE_FOSSIL
	setflag FLAG_HIDE_MIRAGE_TOWER_FISH_FOSSIL
	setflag FLAG_HIDE_MIRAGE_TOWER_BIRD_FOSSIL
	removeobject LOCALID_MIRAGE_BIRD_FOSSIL
	delay 30
	setflag FLAG_CHOSE_BIRD_FOSSIL
	goto MirageTower_4F_EventScript_CollapseMirageTower
	end

MirageTower_4F_EventScript_LeaveBirdFossil::
	msgbox MirageTower_4F_Text_LeftBirdFossilAlone, MSGBOX_DEFAULT
	release
	end

MirageTower_4F_EventScript_CollapseMirageTower::
	setvar VAR_0x8004, 1   @ vertical pan
	setvar VAR_0x8005, 1   @ horizontal pan
	setvar VAR_0x8006, 32  @ num shakes
	setvar VAR_0x8007, 2   @ shake delay
	special ShakeCamera
	waitstate
	special DoMirageTowerCeilingCrumble
	setvar VAR_MIRAGE_TOWER_STATE, 1
	clearflag FLAG_LANDMARK_MIRAGE_TOWER
	warp MAP_ROUTE111, 19, 59
	waitstate
	release
	end

MirageTower_4F_Text_TakeDinoFossil:
	.string "You found a FOSSILIZED DINO.\p"
	.string "If this FOSSIL is taken, the ground\n"
	.string "around it will likely crumble away…\p"
	.string "Take the FOSSILIZED DINO anyway?$"

MirageTower_4F_Text_LeftDinoFossilAlone:
	.string "{PLAYER} left the FOSSILIZED DINO.$"

MirageTower_4F_Text_TakeDrakeFossil:
	.string "You found a FOSSILIZED DRAKE.\p"
	.string "If this FOSSIL is taken, the ground\n"
	.string "around it will likely crumble away…\p"
	.string "Take the FOSSILIZED DRAKE anyway?$"

MirageTower_4F_Text_LeftDrakeFossilAlone:
	.string "{PLAYER} left the FOSSILIZED DRAKE.$"

MirageTower_4F_Text_TakeFishFossil:
	.string "You found a FOSSILIZED FISH.\p"
	.string "If this FOSSIL is taken, the ground\n"
	.string "around it will likely crumble away…\p"
	.string "Take the FOSSILIZED FISH anyway?$"

MirageTower_4F_Text_LeftFishFossilAlone:
	.string "{PLAYER} left the FOSSILIZED FISH.$"

MirageTower_4F_Text_TakeBirdFossil:
	.string "You found a FOSSILIZED BIRD.\p"
	.string "If this FOSSIL is taken, the ground\n"
	.string "around it will likely crumble away…\p"
	.string "Take the FOSSILIZED BIRD anyway?$"

MirageTower_4F_Text_LeftBirdFossilAlone:
	.string "{PLAYER} left the FOSSILIZED BIRD.$"
