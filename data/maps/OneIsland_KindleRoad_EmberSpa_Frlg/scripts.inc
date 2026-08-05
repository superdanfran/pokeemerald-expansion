# 1 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"

# 2 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
OneIsland_KindleRoad_EmberSpa_Frlg_MapScripts::
# 3 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"

# 5 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_OldMan::
# 6 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_WaterWarmsMeToCore, MSGBOX_NPC
# 7 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	end
# 8 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"

# 9 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_BaldingMan1::
# 10 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_EnjoyBowlOfChowder, MSGBOX_NPC
# 11 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	end
# 12 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"

# 13 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_BaldingMan2::
# 14 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_HotSpringIsTherapeutic, MSGBOX_NPC
# 15 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	end
# 16 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"

# 17 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_OldWoman::
# 18 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_SeeHowSmoothMySkinIs, MSGBOX_NPC
# 19 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	end
# 20 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"

# 21 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_BlackBelt::
# 22 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	lock
# 23 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	faceplayer
# 24 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 3
# 25 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_BrunoVisitsSpaOnOccasion
# 26 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	release
# 27 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	end
# 28 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"

# 29 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_RockSmashMan::
# 30 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	lock
# 31 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	faceplayer
# 32 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HM06, OneIsland_KindleRoad_EmberSpa_EventScript_AlreadyGotHM06
# 33 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_UsedThisToMakeEmberSpa
# 34 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	giveitem ITEM_HM06
# 35 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	setflag FLAG_GOT_HM06
# 36 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_ExplainHM06
# 37 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	release
# 38 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	end
# 39 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"

# 40 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_AlreadyGotHM06::
# 41 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_ExplainHM06
# 42 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	release
# 43 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	end
# 44 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"

# 45 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_SpaHeal::
# 46 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	lockall
# 47 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	fadescreen FADE_TO_WHITE
# 48 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	special HealPlayerParty
# 49 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 50 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_WaterExquisiteFullyRefreshed
# 51 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 52 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	releaseall
# 53 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	end
# 54 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"

# 55 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
OneIsland_KindleRoad_EmberSpa_Text_WaterWarmsMeToCore::
# 56 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "Hm!\n"
# 57 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "Haaaaaaaaaaah!\p"
# 58 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "Aaaah! This is heavenly!\n"
# 59 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "The water warms me to my core!\p"
# 60 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "You should jump in, too.\p"
# 61 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "Go to the middle, relax, and get\n"
# 62 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "good and warm!$"
# 63 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"

# 64 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
OneIsland_KindleRoad_EmberSpa_Text_EnjoyBowlOfChowder::
# 65 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "My favorite part of bathing comes\n"
# 66 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "up right after this.\p"
# 67 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "I enjoy a bowl of chowder to\n"
# 68 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "warm me from the inside, too!$"
# 69 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"

# 70 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
OneIsland_KindleRoad_EmberSpa_Text_WaterExquisiteFullyRefreshed::
# 71 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "The water is perfectly warm.\n"
# 72 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "It feels exquisite…\p"
# 73 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "{PLAYER} and the POKéMON were\n"
# 74 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "fully refreshed!$"
# 75 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"

# 76 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
OneIsland_KindleRoad_EmberSpa_Text_HotSpringIsTherapeutic::
# 77 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "Soaking in a hot spring pool is\n"
# 78 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "therapeutic, people say.$"
# 79 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"

# 80 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
OneIsland_KindleRoad_EmberSpa_Text_SeeHowSmoothMySkinIs::
# 81 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "Have a look at my face.\n"
# 82 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "See how smooth my skin is?\p"
# 83 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "The hot spring's water keeps my\n"
# 84 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "skin younger than my age.$"
# 85 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"

# 86 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
OneIsland_KindleRoad_EmberSpa_Text_BrunoVisitsSpaOnOccasion::
# 87 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "After an honest day of training,\n"
# 88 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "nothing beats a relaxing soak in\l"
# 89 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "the hot spring pool.\p"
# 90 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "BRUNO, who's a senior ahead of me,\n"
# 91 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "visits the SPA on occasion.\p"
# 92 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "He comes to rehab injuries, both\n"
# 93 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "his own and his POKéMON's.$"
# 94 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"

# 95 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
OneIsland_KindleRoad_EmberSpa_Text_UsedThisToMakeEmberSpa::
# 96 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "Hot springs go hand-in-hand with\n"
# 97 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "volcanoes.\p"
# 98 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "The EMBER SPA here, well,\n"
# 99 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "I made it years ago.\p"
# 100 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "I hewed the pool right out of a\n"
# 101 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "gigantic boulder by hand.\p"
# 102 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "I was using this at the time.\n"
# 103 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "I suppose I can part with it.$"
# 104 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"

# 105 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
OneIsland_KindleRoad_EmberSpa_Text_ExplainHM06::
# 106 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "That shatters boulders as if they\n"
# 107 "data/maps/OneIsland_KindleRoad_EmberSpa_Frlg/scripts.pory"
	.string "were made of crackers.$"
