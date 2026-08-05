# 1 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Frlg_MapScripts::
# 3 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 5 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_MemorialMan::
# 6 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	lock
# 7 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42
# 8 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_ReturnedForTM42
# 9 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrub
# 10 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	closemessage
# 11 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_FacePlayer
# 12 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	waitmovement 0
# 13 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	delay 45
# 14 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_YourMonsLookHealthy
# 15 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
# 16 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	waitmovement 0
# 17 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ThisIsWhereIBuriedMyOnix
# 18 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	release
# 19 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	end
# 20 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 21 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42::
# 22 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrubTectonix
# 23 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	release
# 24 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	end
# 25 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 26 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_ReturnedForTM42::
# 27 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_StillHaveThingAsMyThanks
# 28 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	giveitem ITEM_TM42
# 29 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
# 30 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
# 31 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	release
# 32 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	end
# 33 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 34 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_Memorial::
# 35 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	lockall
# 36 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
# 37 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
# 38 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonixLemonadeOffering
# 39 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	checkitem ITEM_LEMONADE
# 40 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade
# 41 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	releaseall
# 42 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	end
# 43 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 44 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade::
# 45 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_LeaveAnotherLemonadeOffering, MSGBOX_YESNO
# 46 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FiveIsland_MemorialPillar_EventScript_PlaceLemonade
# 47 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	releaseall
# 48 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	end
# 49 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 50 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_PlaceLemonade::
# 51 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	removeitem ITEM_LEMONADE
# 52 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_PlacedCanOfLemonade
# 53 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	closemessage
# 54 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
# 55 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	waitmovement 0
# 56 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	delay 45
# 57 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 58 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	waitmovement 0
# 59 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 60 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ThankYouPleaseTakeThis
# 61 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	giveitem ITEM_TM42
# 62 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
# 63 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
# 64 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	releaseall
# 65 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	end
# 66 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 67 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_ReceivedTM42::
# 68 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_BeGoodToYourMonsToo
# 69 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
# 70 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	waitmovement 0
# 71 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	setflag FLAG_GOT_TM42_AT_MEMORIAL_PILLAR
# 72 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	return
# 73 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 74 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_NoRoomForTM42::
# 75 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR
# 76 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_DontHaveRoomForIt
# 77 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	releaseall
# 78 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	end
# 79 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 80 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced::
# 81 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonix
# 82 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	releaseall
# 83 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	end
# 84 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 85 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_MiloIntro::
# 86 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "I'm the eldest of the BIRD\n"
# 87 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "BROTHERS.\p"
# 88 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "The best thing about birds…\n"
# 89 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "It has to be the beak.$"
# 90 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 91 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_MiloDefeat::
# 92 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Oh, so sharp!$"
# 93 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 94 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_MiloPostBattle::
# 95 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "You can fly to FOUR ISLAND from\n"
# 96 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "here.$"
# 97 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 98 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_ChazIntro::
# 99 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "I'm the middle kid of the BIRD\n"
# 100 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "BROTHERS.\p"
# 101 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "The best thing about birds…\n"
# 102 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "It has to be the wings.$"
# 103 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 104 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_ChazDefeat::
# 105 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Flap, flap!$"
# 106 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 107 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_ChazPostBattle::
# 108 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "There was a really somber guy\n"
# 109 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "over that way.$"
# 110 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 111 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_HaroldIntro::
# 112 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "I'm the youngest of the BIRD\n"
# 113 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "BROTHERS.\p"
# 114 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "The best thing about birds…\n"
# 115 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "It has to be the down.$"
# 116 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 117 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_HaroldDefeat::
# 118 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Down is so comfy…\n"
# 119 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "It makes me drowsy…$"
# 120 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 121 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_HaroldPostBattle::
# 122 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "It fills me with happiness when\n"
# 123 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "bird POKéMON beg playfully…$"
# 124 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 125 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_ScrubScrub::
# 126 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Scrub, scrub…$"
# 127 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 128 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_YourMonsLookHealthy::
# 129 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Hello…\n"
# 130 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Your POKéMON look healthy…$"
# 131 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 132 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_ThisIsWhereIBuriedMyOnix::
# 133 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "This is where I buried my ONIX…\n"
# 134 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "It was named TECTONIX…$"
# 135 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 136 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_HereLiesTectonixLemonadeOffering::
# 137 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "“Here lies TECTONIX” is engraved\n"
# 138 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "on a boulder.\p"
# 139 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "There is a LEMONADE placed as an\n"
# 140 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "offering in front of the grave.$"
# 141 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 142 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_LeaveAnotherLemonadeOffering::
# 143 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Would you like to leave another\n"
# 144 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "LEMONADE as an offering?$"
# 145 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 146 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_PlacedCanOfLemonade::
# 147 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "{PLAYER} placed a can of LEMONADE\n"
# 148 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "in front of the grave.$"
# 149 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 150 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_ThankYouPleaseTakeThis::
# 151 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Th-thank you…\p"
# 152 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "That was my TECTONIX's favorite\n"
# 153 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "drink…\p"
# 154 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "I don't even know you, but your\n"
# 155 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "act of kindness…\p"
# 156 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "It's uplifted me a little.\p"
# 157 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Can you please take this as my\n"
# 158 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "thanks?$"
# 159 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 160 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_BeGoodToYourMonsToo::
# 161 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Please be good to your POKéMON,\n"
# 162 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "too.$"
# 163 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 164 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_DontHaveRoomForIt::
# 165 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "If you don't have room for it,\n"
# 166 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "I'll hold it for you till next time.$"
# 167 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 168 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_StillHaveThingAsMyThanks::
# 169 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Oh, it's you from that time…\p"
# 170 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "I still have that thing I wanted\n"
# 171 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "you to have as my thanks.$"
# 172 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 173 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_ScrubScrubTectonix::
# 174 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Scrub, scrub…\p"
# 175 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "… … …\n"
# 176 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "TECTONIX…$"
# 177 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"

# 178 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
FiveIsland_MemorialPillar_Text_HereLiesTectonix::
# 179 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "Boulders and rocks are neatly piled\n"
# 180 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "up as a cairn.\p"
# 181 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "“Here lies TECTONIX” is engraved\n"
# 182 "data/maps/FiveIsland_MemorialPillar_Frlg/scripts.pory"
	.string "on a boulder.$"
