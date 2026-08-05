# 1 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 2 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
.set SPOKE_TO_WOMAN_LAST,   FLAG_TEMP_2
# 3 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
.set SPOKE_TO_FAT_MAN_LAST, FLAG_TEMP_3
# 4 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 5 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Frlg_MapScripts::
# 6 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.byte 0
# 7 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 8 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_Chairman::
# 9 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	lock
# 10 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	faceplayer
# 11 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_BIKE_VOUCHER, VermilionCity_PokemonFanClub_EventScript_AlreadyHeardStory
# 12 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_DidYouComeToHearAboutMyMons, MSGBOX_YESNO
# 13 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, VermilionCity_PokemonFanClub_EventScript_ChairmanStory
# 14 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ComeBackToHearStory
# 15 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 16 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 17 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 18 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_AlreadyHeardStory::
# 19 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_DidntComeToSeeAboutMonsAgain
# 20 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 21 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 22 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 23 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_ChairmanStory::
# 24 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ChairmansStory
# 25 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	checkitemspace ITEM_BIKE_VOUCHER
# 26 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, VermilionCity_PokemonFanClub_EventScript_NoRoomForBikeVoucher
# 27 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	setflag FLAG_GOT_BIKE_VOUCHER
# 28 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	giveitem_msg VermilionCity_PokemonFanClub_Text_ReceivedBikeVoucherFromChairman, ITEM_BIKE_VOUCHER, 1, MUS_RG_OBTAIN_KEY_ITEM
# 29 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ExplainBikeVoucher
# 30 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 31 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 32 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 33 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_NoRoomForBikeVoucher::
# 34 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_MakeRoomForThis
# 35 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 36 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 37 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 38 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_WorkerF::
# 39 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	lock
# 40 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	faceplayer
# 41 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, VermilionCity_PokemonFanClub_EventScript_WorkerFGameClear
# 42 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ChairmanVeryVocalAboutPokemon
# 43 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 44 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 45 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 46 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_WorkerFGameClear::
# 47 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	famechecker FAMECHECKER_DAISY, 1
# 48 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ChairmanReallyAdoresHisMons
# 49 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 50 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 51 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 52 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_Woman::
# 53 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	lock
# 54 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	faceplayer
# 55 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto_if_set SPOKE_TO_FAT_MAN_LAST, VermilionCity_PokemonFanClub_EventScript_WomanSpokeToFatMan
# 56 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_AdoreMySeel
# 57 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	closemessage
# 58 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_FAN_CLUB_WOMAN, Common_Movement_FaceOriginalDirection
# 59 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitmovement 0
# 60 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	setflag SPOKE_TO_WOMAN_LAST
# 61 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 62 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 63 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 64 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_WomanSpokeToFatMan::
# 65 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_SeelFarMoreAttractive
# 66 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	closemessage
# 67 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_FAN_CLUB_WOMAN, Common_Movement_FaceOriginalDirection
# 68 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitmovement 0
# 69 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	clearflag SPOKE_TO_FAT_MAN_LAST
# 70 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 71 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 72 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 73 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_FatMan::
# 74 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	lock
# 75 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	faceplayer
# 76 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	goto_if_set SPOKE_TO_WOMAN_LAST, VermilionCity_PokemonFanClub_EventScript_FatManSpokeToWoman
# 77 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_AdmirePikachusTail
# 78 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	closemessage
# 79 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_FAN_CLUB_FAT_MAN, Common_Movement_FaceOriginalDirection
# 80 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitmovement 0
# 81 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	setflag SPOKE_TO_FAT_MAN_LAST
# 82 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 83 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 84 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 85 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_FatManSpokeToWoman::
# 86 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_PikachuTwiceAsCute
# 87 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	closemessage
# 88 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	applymovement LOCALID_POKEMON_FAN_CLUB_FAT_MAN, Common_Movement_FaceOriginalDirection
# 89 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitmovement 0
# 90 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	clearflag SPOKE_TO_WOMAN_LAST
# 91 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 92 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 93 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 94 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_Pikachu::
# 95 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	lock
# 96 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	faceplayer
# 97 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitse
# 98 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 99 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_Pikachu
# 100 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitmoncry
# 101 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 102 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 103 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 104 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_Seel::
# 105 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	lock
# 106 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	faceplayer
# 107 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitse
# 108 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	playmoncry SPECIES_SEEL, CRY_MODE_NORMAL
# 109 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_Seel
# 110 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	waitmoncry
# 111 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	release
# 112 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 113 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 114 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_RulesSign1::
# 115 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_ListenPolitelyToOtherTrainers, MSGBOX_SIGN
# 116 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 117 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 118 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_EventScript_RulesSign2::
# 119 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	msgbox VermilionCity_PokemonFanClub_Text_SomeoneBragsBragBack, MSGBOX_SIGN
# 120 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	end
# 121 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 122 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_AdmirePikachusTail::
# 123 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Won't you admire my PIKACHU's\n"
# 124 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "adorable tail?$"
# 125 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 126 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_PikachuTwiceAsCute::
# 127 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Humph!\p"
# 128 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "My PIKACHU is twice as cute as\n"
# 129 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "that one!$"
# 130 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 131 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_AdoreMySeel::
# 132 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "I just adore my SEEL!\n"
# 133 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "It's so lovable!\p"
# 134 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "It squeals, “Kyuuuh,” when I\n"
# 135 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "hug it!$"
# 136 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 137 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_SeelFarMoreAttractive::
# 138 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Oh, dear!\p"
# 139 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "My SEEL is far more attractive.\n"
# 140 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "By double, I would say.$"
# 141 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 142 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_Pikachu::
# 143 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "PIKACHU: Chu! Pikachu!$"
# 144 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 145 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_Seel::
# 146 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "SEEL: Kyuoo!$"
# 147 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 148 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_DidYouComeToHearAboutMyMons::
# 149 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "I chair the POKéMON Fan Club!\p"
# 150 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "I raise more than a hundred\n"
# 151 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "POKéMON!\p"
# 152 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "I'm very fussy when it comes to\n"
# 153 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "POKéMON! I surely am!\p"
# 154 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "So…\p"
# 155 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Did you come visit to hear about\n"
# 156 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "my POKéMON?$"
# 157 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 158 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_ChairmansStory::
# 159 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Good!\n"
# 160 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Then listen up!\p"
# 161 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "My favorite RAPIDASH…\p"
# 162 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "It's…cute…lovely…smart… \n"
# 163 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "plus…amazing…you think so?…\l"
# 164 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "oh yes…it's…stunning…\l"
# 165 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "kindly…love it!\p"
# 166 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Hug it…when…sleeping…warm\n"
# 167 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "and cuddly…spectacular…\l"
# 168 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "ravishing…\l"
# 169 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "…Oops! Look at the time!\l"
# 170 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "I kept you too long!\p"
# 171 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Thanks for hearing me out!\n"
# 172 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "I want you to have this!$"
# 173 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 174 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_ReceivedBikeVoucherFromChairman::
# 175 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "{PLAYER} received a BIKE VOUCHER\n"
# 176 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "from the CHAIRMAN.$"
# 177 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 178 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_ExplainBikeVoucher::
# 179 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Take that BIKE VOUCHER to the\n"
# 180 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "BIKE SHOP in CERULEAN CITY.\p"
# 181 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Exchange that for a BICYCLE\n"
# 182 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "free of charge!\p"
# 183 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Don't worry, my favorite FEAROW\n"
# 184 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "will FLY me anywhere I need to go.\p"
# 185 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "So, I have no need for a BICYCLE.\p"
# 186 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "I hope you like cycling!$"
# 187 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 188 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_ComeBackToHearStory::
# 189 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Oh. Come back when you want to\n"
# 190 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "hear my story!$"
# 191 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 192 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_DidntComeToSeeAboutMonsAgain::
# 193 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Hello, {PLAYER}!\p"
# 194 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Did you come see me about my\n"
# 195 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "POKéMON again?\p"
# 196 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "No?\n"
# 197 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Too bad!$"
# 198 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 199 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_MakeRoomForThis::
# 200 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Make room for this!$"
# 201 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 202 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_ChairmanVeryVocalAboutPokemon::
# 203 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Our CHAIRMAN is very vocal about\n"
# 204 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "POKéMON.$"
# 205 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 206 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_ListenPolitelyToOtherTrainers::
# 207 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Let's all listen politely to other\n"
# 208 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "TRAINERS!$"
# 209 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 210 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_SomeoneBragsBragBack::
# 211 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "If someone brags, brag right back!$"
# 212 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"

# 213 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
VermilionCity_PokemonFanClub_Text_ChairmanReallyAdoresHisMons::
# 214 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "Our CHAIRMAN really does adore his\n"
# 215 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "POKéMON.\p"
# 216 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "But the person who is most liked by\n"
# 217 "data/maps/VermilionCity_PokemonFanClub_Frlg/scripts.pory"
	.string "POKéMON is DAISY, I think.$"
