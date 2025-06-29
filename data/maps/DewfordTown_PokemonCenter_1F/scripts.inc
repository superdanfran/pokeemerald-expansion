DewfordTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

DewfordTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

DewfordTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_DEWFORD_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

DewfordTown_PokemonCenter_1F_EventScript_AlolaGifts::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_ALOLA_GIFT, DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftGiven
	msgbox DewfordTown_PokemonCenter_1F_Text_AlolaGifts, MSGBOX_DEFAULT
	multichoicedefault 20, 8, MULTI_ALOLA_STARTER, 1, FALSE
	switch VAR_RESULT
	case 0, DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftRowlet
	case 1, DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftLitten
	case 2, DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftPopplio
	case MULTI_B_PRESSED, DewfordTown_PokemonCenter_1F_Text_AlolaGiftsCancel
	closemessage
	release
	end

DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftGiven::
	msgbox DewfordTown_PokemonCenter_1F_Text_AlolaGiftThanks, MSGBOX_DEFAULT
	release
	end

DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftRowlet::
	givemon SPECIES_ROWLET, 5
	setflag FLAG_RECEIVED_ALOLA_GIFT
	release
	end

DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftLitten::
	givemon SPECIES_LITTEN, 5
	setflag FLAG_RECEIVED_ALOLA_GIFT
	release
	end

DewfordTown_PokemonCenter_1F_EventScript_AlolaGiftPopplio::
	givemon SPECIES_POPPLIO, 5
	setflag FLAG_RECEIVED_ALOLA_GIFT
	release
	end

DewfordTown_PokemonCenter_1F_EventScript_PokefanF::
	msgbox DewfordTown_PokemonCenter_1F_Text_StoneCavern, MSGBOX_NPC
	end

DewfordTown_PokemonCenter_1F_EventScript_Man::
	msgbox DewfordTown_PokemonCenter_1F_Text_FaintedMonCanUseHM, MSGBOX_NPC
	end

DewfordTown_PokemonCenter_1F_Text_StoneCavern:
	.string "There's a stone cavern at the edge\n"
	.string "of town.\p"
	.string "I've heard you can find rare stones\n"
	.string "there.$"

DewfordTown_PokemonCenter_1F_Text_FaintedMonCanUseHM:
	.string "Even if a POKéMON faints and can't\n"
	.string "battle, it can still use a move learned\l"
	.string "from a HIDDEN MACHINE (HM).$"

DewfordTown_PokemonCenter_1F_Text_AlolaGifts:
	.string "Burp!\p"
	.string "Sorry. Uh.\p"
	.string "You look responsible. I got these\n"
	.string "stowaways on my ship. Take one.$"

DewfordTown_PokemonCenter_1F_Text_AlolaGiftsCancel:
	.string "Come on, help me out here!$"

DewfordTown_PokemonCenter_1F_Text_AlolaGiftThanks:
	.string "You've done me a big favor.$"
