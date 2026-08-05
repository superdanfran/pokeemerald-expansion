# 1 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Frlg_MapScripts::
# 3 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 5 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_EggGentleman::
# 6 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	lock
# 7 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_PostEggComment
# 9 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_ReturnForEgg
# 10 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_LetMeTakeLookAtMons
# 11 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendship
# 12 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 6, FiveIsland_WaterLabyrinth_EventScript_LeadMonMaxFriendship
# 13 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_HmmISeeIsee
# 14 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	release
# 15 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	end
# 16 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 17 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment::
# 18 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	famechecker FAMECHECKER_DAISY, 2
# 19 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_CuteMonRemindsMeOfDaisy
# 20 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	release
# 21 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	end
# 22 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 23 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_LeadMonMaxFriendship::
# 24 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_TreatMonRightHaveThis
# 25 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
# 26 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	end
# 27 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 28 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg::
# 29 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	getpartysize
# 30 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FiveIsland_WaterLabyrinth_EventScript_NoRoomForEgg
# 31 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	setflag FLAG_GOT_TOGEPI_EGG
# 32 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	giveegg SPECIES_TOGEPI
# 33 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 34 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 35 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	message FiveIsland_WaterLabyrinth_Text_ReceivedEggFromMan
# 36 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	waitfanfare
# 37 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	waitmessage
# 38 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 39 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_PostEggComment
# 40 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	end
# 41 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 42 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
@ If the player has a Togepi/Togetic from this game (assumed to be the one the man gave you) then comment on it
# 43 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
@ Otherwise make normal comment
# 44 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_PostEggComment::
# 45 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOGEPI
# 46 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_TOGEPI
# 47 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
# 48 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
# 49 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOGETIC
# 50 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_TOGETIC
# 51 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
# 52 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
# 53 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_GladIMetSomeoneLikeYou
# 54 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	release
# 55 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	end
# 56 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 57 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_NoRoomForEgg::
# 58 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_TOGEPI_EGG
# 59 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_DontHaveSpaceInYourParty
# 60 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	release
# 61 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	end
# 62 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 63 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_ReturnForEgg::
# 64 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
# 65 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	end
# 66 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 67 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Text_LetMeTakeLookAtMons::
# 68 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "You travel all over the place,\n"
# 69 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "don't you?\p"
# 70 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "You're not driving your POKéMON\n"
# 71 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "too harshly, are you?\p"
# 72 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "Let me take a look.\n"
# 73 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "… … …   … … …$"
# 74 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 75 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Text_HmmISeeIsee::
# 76 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "Ah, hmm…\n"
# 77 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "I see, I see…$"
# 78 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 79 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Text_TreatMonRightHaveThis::
# 80 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "Oh, impressive.\n"
# 81 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "You treat your POKéMON right.\p"
# 82 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "I think you can be entrusted with\n"
# 83 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "this.\p"
# 84 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "Please, I'd like you to have this.$"
# 85 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 86 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Text_ReceivedEggFromMan::
# 87 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "{PLAYER} received an EGG\n"
# 88 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "from the man!$"
# 89 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 90 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Text_DontHaveSpaceInYourParty::
# 91 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "…Unfortunately, you don't have\n"
# 92 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "space for this in your party.\p"
# 93 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "You'd better come back for it\n"
# 94 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "another time.$"
# 95 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 96 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
@ Unused
# 97 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Text_YouveComeBackForTheEgg::
# 98 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "やあ\n"
# 99 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "タマゴを　もらいに\l"
# 100 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "きて　くれたんだね$"
# 101 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 102 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Text_GladIMetSomeoneLikeYou::
# 103 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "I received that EGG while I was\n"
# 104 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "traveling.\p"
# 105 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "I'm glad I met someone like you.$"
# 106 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 107 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Text_CuteMonRemindsMeOfDaisy::
# 108 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "Oh, hello.\n"
# 109 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "That's a cute {STR_VAR_2}.\p"
# 110 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "Seeing it reminds me of a sweet \n"
# 111 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "little girl I met while traveling.\p"
# 112 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "She was gently grooming POKéMON…\n"
# 113 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "She was a little angel.\p"
# 114 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "That little girl's name…\n"
# 115 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "I think it was DAISY.$"
# 116 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 117 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Text_AlizeIntro::
# 118 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "This is an excellent environment\n"
# 119 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "for raising POKéMON.$"
# 120 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 121 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Text_AlizeDefeat::
# 122 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "Your POKéMON are growing up\n"
# 123 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "admirably well!$"
# 124 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"

# 125 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
FiveIsland_WaterLabyrinth_Text_AlizePostBattle::
# 126 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "You know, I think you have the\n"
# 127 "data/maps/FiveIsland_WaterLabyrinth_Frlg/scripts.pory"
	.string "talent to be a good BREEDER.$"
