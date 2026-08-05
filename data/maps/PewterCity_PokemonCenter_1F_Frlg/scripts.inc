# 1 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 2 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_Frlg_MapScripts::
# 3 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 7 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_OnTransition::
# 8 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_PEWTER_CITY
# 9 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 10 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 11 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 13 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	call EventScript_PkmnCenterNurse_Frlg
# 15 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 16 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 17 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 18 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_Gentleman::
# 19 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TeamRocketMtMoonImOnPhone, MSGBOX_NPC
# 20 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 21 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 22 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_Jigglypuff::
# 23 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 24 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	faceplayer
# 25 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	fadeoutbgm 0
# 26 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	playbgm MUS_RG_JIGGLYPUFF, 0
# 27 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	message PewterCity_PokemonCenter_1F_Text_Jigglypuff
# 28 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	waitmessage
# 29 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	delay 455
# 30 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	playbgm MUS_POKE_CENTER, 1
# 31 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 32 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 33 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 34 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_Youngster::
# 35 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_WhenJiggylypuffSingsMonsGetDrowsy, MSGBOX_NPC
# 36 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 37 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 38 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_GBAKid1::
# 39 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	lock
# 40 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TradingMyClefairyForPikachu
# 41 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	release
# 42 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 43 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 44 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_GBAKid2::
# 45 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TradingPikachuWithKid, MSGBOX_NPC
# 46 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	end
# 47 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 48 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_Text_TeamRocketMtMoonImOnPhone::
# 49 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "What!?\p"
# 50 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "TEAM ROCKET is at MT. MOON?\n"
# 51 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Huh?\p"
# 52 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'm on the phone!\n"
# 53 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Scram!$"
# 54 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 55 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_Text_Jigglypuff::
# 56 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "JIGGLYPUFF: Puu pupuu!$"
# 57 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 58 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_Text_WhenJiggylypuffSingsMonsGetDrowsy::
# 59 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Yawn!\p"
# 60 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "When JIGGLYPUFF sings, POKéMON get\n"
# 61 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "drowsy…\p"
# 62 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "…Me, too…\n"
# 63 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "Snore…$"
# 64 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 65 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_Text_TradingMyClefairyForPikachu::
# 66 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I really want a PIKACHU, so I'm\n"
# 67 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "trading my CLEFAIRY for one.$"
# 68 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"

# 69 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
PewterCity_PokemonCenter_1F_Text_TradingPikachuWithKid::
# 70 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I'm trading POKéMON with that kid\n"
# 71 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "there.\p"
# 72 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I had two PIKACHU, so I figured\n"
# 73 "data/maps/PewterCity_PokemonCenter_1F_Frlg/scripts.pory"
	.string "I might as well trade one.$"
