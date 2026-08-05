# 1 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 2 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_Frlg_MapScripts::
# 3 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 5 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_Chef1::
# 6 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_BusyOutOfTheWay, MSGBOX_NPC
# 7 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	end
# 8 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 9 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_Chef2::
# 10 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_SawOddBerryInTrash, MSGBOX_NPC
# 11 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	end
# 12 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 13 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_Chef3::
# 14 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_SoBusyImDizzy, MSGBOX_NPC
# 15 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	end
# 16 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 17 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_Chef4::
# 18 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	lock
# 19 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	faceplayer
# 20 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_IAmLeChefMainCourseIs
# 21 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	random 3
# 22 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 23 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	call_if_eq VAR_0x8008, 0, SSAnne_Kitchen_EventScript_SalmonDuSalad
# 24 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	call_if_eq VAR_0x8008, 1, SSAnne_Kitchen_EventScript_EelsAuBarbecue
# 25 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	call_if_eq VAR_0x8008, 2, SSAnne_Kitchen_EventScript_PrimeBeefsteak
# 26 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	release
# 27 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	end
# 28 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 29 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_SalmonDuSalad::
# 30 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_SalmonDuSalad
# 31 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	return
# 32 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 33 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_EelsAuBarbecue::
# 34 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_EelsAuBarbecue
# 35 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	return
# 36 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 37 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_PrimeBeefsteak::
# 38 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_PrimeBeefsteak
# 39 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	return
# 40 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 41 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_Chef5::
# 42 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_PeelSpudsEveryDay, MSGBOX_NPC
# 43 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	end
# 44 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 45 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_Chef6::
# 46 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_HearAboutSnorlaxItsAGlutton, MSGBOX_NPC
# 47 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	end
# 48 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 49 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_EventScript_Chef7::
# 50 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	msgbox SSAnne_Kitchen_Text_OnlyGetToPeelOnions, MSGBOX_NPC
# 51 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	end
# 52 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 53 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_Text_BusyOutOfTheWay::
# 54 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "You, mon petit!\n"
# 55 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "We're busy here!\l"
# 56 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Out of the way!$"
# 57 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 58 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_Text_SawOddBerryInTrash::
# 59 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "I saw an odd BERRY in the trash.\n"
# 60 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "I wonder what that was?$"
# 61 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 62 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_Text_SoBusyImDizzy::
# 63 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "I'm so busy I'm getting dizzy!\n"
# 64 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "You have to give me room here!$"
# 65 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 66 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_Text_PeelSpudsEveryDay::
# 67 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Hum-de-hum-de-ho…\p"
# 68 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "I peel spuds every day!\n"
# 69 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Hum-hum…$"
# 70 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 71 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_Text_HearAboutSnorlaxItsAGlutton::
# 72 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Did you hear about SNORLAX?\n"
# 73 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "It's a glutton.\p"
# 74 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "No other POKéMON eats and sleeps\n"
# 75 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "the way SNORLAX can and does!$"
# 76 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 77 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_Text_OnlyGetToPeelOnions::
# 78 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Snivel… Sniff…\p"
# 79 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "I only get to peel onions…\n"
# 80 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Snivel…$"
# 81 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 82 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_Text_IAmLeChefMainCourseIs::
# 83 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Er-hem!\n"
# 84 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Indeed I am le CHEF!\p"
# 85 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Le main course is$"
# 86 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 87 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_Text_SalmonDuSalad::
# 88 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Salmon du Salad!\p"
# 89 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Les guests may gripe it's fish\n"
# 90 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "again, however!$"
# 91 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 92 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_Text_EelsAuBarbecue::
# 93 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Eels au Barbecue!\p"
# 94 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Les guests will mutiny, I fear.$"
# 95 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"

# 96 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
SSAnne_Kitchen_Text_PrimeBeefsteak::
# 97 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "Prime Beefsteak!\p"
# 98 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "But, have I enough fillets du\n"
# 99 "data/maps/SSAnne_Kitchen_Frlg/scripts.pory"
	.string "beef?$"
