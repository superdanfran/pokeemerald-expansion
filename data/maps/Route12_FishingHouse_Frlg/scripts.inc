# 1 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 2 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Frlg_MapScripts::
# 3 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 5 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_FishingGuruBrother::
# 6 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	lock
# 7 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_SUPER_ROD, Route12_FishingHouse_EventScript_CheckMagikarpRecord
# 9 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_DoYouLikeToFish, MSGBOX_YESNO
# 10 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route12_FishingHouse_EventScript_GiveSuperRod
# 11 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_OhThatsDisappointing
# 12 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
# 13 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 14 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 15 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_GiveSuperRod::
# 16 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	checkitemspace ITEM_SUPER_ROD
# 17 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route12_FishingHouse_EventScript_NoRoomForSuperRod
# 18 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	additem ITEM_SUPER_ROD
# 19 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_TakeThisAndFish
# 20 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgreceiveditem Route12_FishingHouse_Text_ReceivedSuperRod, ITEM_SUPER_ROD
# 21 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	setflag FLAG_GOT_SUPER_ROD
# 22 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_IfYouCatchBigMagikarpShowMe
# 23 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
# 24 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 25 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 26 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_NoRoomForSuperRod::
# 27 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_NoRoomForGift
# 28 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
# 29 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 30 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 31 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_CheckMagikarpRecord::
# 32 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_MAGIKARP
# 33 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	specialvar VAR_RESULT, DoesPlayerPartyContainSpecies
# 34 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route12_FishingHouse_EventScript_NoMagikarpInParty
# 35 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	special GetMagikarpSizeRecordInfo
# 36 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_OhMagikarpAllowMeToSee
# 37 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	special ChoosePartyMon
# 38 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	copyvar VAR_RESULT, VAR_0x8004
# 39 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_ge VAR_RESULT, PARTY_SIZE, Route12_FishingHouse_EventScript_CancelShowMon
# 40 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	special CompareMagikarpSize
# 41 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route12_FishingHouse_EventScript_NotMagikarp
# 42 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 2, Route12_FishingHouse_EventScript_NotRecordMagikarp
# 43 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 3, Route12_FishingHouse_EventScript_NewRecordMagikarp
# 44 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 4, Route12_FishingHouse_EventScript_TieRecordMagikarp
# 45 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
# 46 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 47 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 48 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_NoMagikarpInParty::
# 49 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_TryFishingBringMeMagikarp
# 50 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
# 51 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 52 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 53 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_CancelShowMon::
# 54 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
# 55 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 56 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 57 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_NotMagikarp::
# 58 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_DoesntLookLikeMagikarp
# 59 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
# 60 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 61 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 62 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_NotRecordMagikarp::
# 63 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_NewRecordMagikarp
# 64 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_HmmXSizeDoesntMeasureUp
# 65 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
# 66 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 67 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 68 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_TieRecordMagikarp::
# 69 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_NewRecordMagikarp
# 70 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_HuhXSizeSameSizeAsLast
# 71 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
# 72 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 73 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 74 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_NewRecordMagikarp::
# 75 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	setflag FLAG_GOT_RECORD_SETTING_MAGIKARP
# 76 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_WhoaXSizeTakeThis
# 77 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	giveitem ITEM_NET_BALL
# 78 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route12_FishingHouse_EventScript_NoRoomForNetBall
# 79 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_LookForwardToGreaterRecords
# 80 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
# 81 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 82 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 83 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_NoRoomForNetBall::
# 84 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_NoRoomForGift
# 85 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	release
# 86 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 87 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 88 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_MagikarpRecordSign::
# 89 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	lockall
# 90 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_RECORD_SETTING_MAGIKARP, Route12_FishingHouse_EventScript_MagikarpRecordSignRecordSet
# 91 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_BlankChartOfSomeSort
# 92 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	releaseall
# 93 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 94 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 95 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_EventScript_MagikarpRecordSignRecordSet::
# 96 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	special GetMagikarpSizeRecordInfo
# 97 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	msgbox Route12_FishingHouse_Text_MostGiganticMagikarpXSize
# 98 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	releaseall
# 99 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	end
# 100 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 101 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_DoYouLikeToFish::
# 102 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "I'm the FISHING GURU's younger\n"
# 103 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "brother.\p"
# 104 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "I simply looove fishing!\n"
# 105 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "I can't bear to go without.\p"
# 106 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Tell me, do you like to fish?$"
# 107 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 108 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_TakeThisAndFish::
# 109 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Grand! I like your style.\n"
# 110 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "I think we can be friends.\p"
# 111 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Take this and fish, young friend!$"
# 112 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 113 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_ReceivedSuperRod::
# 114 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "{PLAYER} received a SUPER ROD from\n"
# 115 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "the FISHING GURU's brother.$"
# 116 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 117 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_IfYouCatchBigMagikarpShowMe::
# 118 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Fishing is a way of life!\n"
# 119 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "It is like the finest poetry.\p"
# 120 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "From the seas to rivers, go out\n"
# 121 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "and land the big one, my friend.\p"
# 122 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Now, I have a request.\p"
# 123 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "If you catch a big MAGIKARP \n"
# 124 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "with that ROD, I want to see it.\p"
# 125 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "As much as I love to fish, I also\n"
# 126 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "love seeing gigantic MAGIKARP.$"
# 127 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 128 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_OhThatsDisappointing::
# 129 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Oh…\n"
# 130 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "That's so disappointing…$"
# 131 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 132 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_TryFishingBringMeMagikarp::
# 133 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Hello there, {PLAYER}!\n"
# 134 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Have you been fishing?\p"
# 135 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Try fishing with the SUPER ROD in\n"
# 136 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "any body of water.\p"
# 137 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "You'll find different POKéMON in\n"
# 138 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "different places.\p"
# 139 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Oh, and don't forget to bring me\n"
# 140 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "gigantic MAGIKARP.$"
# 141 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 142 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_OhMagikarpAllowMeToSee::
# 143 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Oh? {PLAYER}?\n"
# 144 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Why, if it isn't a MAGIKARP!\p"
# 145 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Allow me to see it, quick!$"
# 146 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 147 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_WhoaXSizeTakeThis::
# 148 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "… … …Whoa!\n"
# 149 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "{STR_VAR_2}!\p"
# 150 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "You have a rare appreciation for\n"
# 151 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "the fine, poetic aspects of fishing!\p"
# 152 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "You must take this.\n"
# 153 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "I insist!$"
# 154 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 155 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_LookForwardToGreaterRecords::
# 156 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "I'll look forward to seeing greater\n"
# 157 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "records from you!$"
# 158 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 159 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_HuhXSizeSameSizeAsLast::
# 160 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Huh?\n"
# 161 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "{STR_VAR_2}?\p"
# 162 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "This is the same size as the one\n"
# 163 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "I saw before.$"
# 164 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 165 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_HmmXSizeDoesntMeasureUp::
# 166 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Hmm…\n"
# 167 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "This one is {STR_VAR_2} long.\p"
# 168 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "It doesn't measure up to the\n"
# 169 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "{STR_VAR_3} one you brought before.$"
# 170 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 171 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_DoesntLookLikeMagikarp::
# 172 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Uh… That doesn't look much like\n"
# 173 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "a MAGIKARP.$"
# 174 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 175 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_NoRoomForGift::
# 176 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "Oh, no!\p"
# 177 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "I had a gift for you, but you have\n"
# 178 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "no room for it.$"
# 179 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 180 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_MostGiganticMagikarpXSize::
# 181 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "The most gigantic MAGIKARP\n"
# 182 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "I have ever witnessed…\p"
# 183 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "{STR_VAR_3}!$"
# 184 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"

# 185 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
Route12_FishingHouse_Text_BlankChartOfSomeSort::
# 186 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "It's a blank chart of some sort.\p"
# 187 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "It has spaces for writing in\n"
# 188 "data/maps/Route12_FishingHouse_Frlg/scripts.pory"
	.string "records of some kind.$"
