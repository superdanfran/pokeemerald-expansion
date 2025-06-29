SlateportCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SlateportCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
	call Common_EventScript_UpdateBrineyLocation
	end

SlateportCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_SLATEPORT_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

SlateportCity_PokemonCenter_1F_EventScript_Sailor::
	msgbox SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon, MSGBOX_NPC
	end

SlateportCity_PokemonCenter_1F_EventScript_Woman::
	msgbox SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend, MSGBOX_NPC
	end

SlateportCity_PokemonCenter_1F_EventScript_GalarGifts::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_GALAR_GIFT, SlateportCity_PokemonCenter_1F_EventScript_GalarGiftGiven
	msgbox SlateportCity_PokemonCenter_1F_Text_GalarGifts, MSGBOX_DEFAULT
	multichoicedefault 20, 8, MULTI_GALAR_STARTER, 1, FALSE
	switch VAR_RESULT
	case 0, SlateportCity_PokemonCenter_1F_EventScript_GalarGiftGrookey
	case 1, SlateportCity_PokemonCenter_1F_EventScript_GalarGiftScorbunny
	case 2, SlateportCity_PokemonCenter_1F_EventScript_GalarGiftSobble
	case MULTI_B_PRESSED, SlateportCity_PokemonCenter_1F_Text_GalarGiftsCancel
	closemessage
	release
	end

SlateportCity_PokemonCenter_1F_EventScript_GalarGiftGiven::
	msgbox SlateportCity_PokemonCenter_1F_Text_GalarGiftCheersLove, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonCenter_1F_EventScript_GalarGiftGrookey::
	givemon SPECIES_GROOKEY, 5
	setflag FLAG_RECEIVED_GALAR_GIFT
	release
	end

SlateportCity_PokemonCenter_1F_EventScript_GalarGiftScorbunny::
	givemon SPECIES_SCORBUNNY, 5
	setflag FLAG_RECEIVED_GALAR_GIFT
	release
	end

SlateportCity_PokemonCenter_1F_EventScript_GalarGiftSobble::
	givemon SPECIES_SOBBLE, 5
	setflag FLAG_RECEIVED_GALAR_GIFT
	release
	end

SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon:
	.string "Want a tip for battling?\p"
	.string "I'd say it's raising different kinds\n"
	.string "of POKéMON in a balanced manner.\p"
	.string "It's no good to make just one\n"
	.string "POKéMON strong.\p"
	.string "If it has a type disadvantage,\n"
	.string "it might not stand a chance.$"

SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend:
	.string "I trade POKéMON with my friends.\p"
	.string "If a traded POKéMON is holding an\n"
	.string "item, it makes me twice as happy!$"

SlateportCity_PokemonCenter_1F_Text_GalarGifts:
	.string "Hey there love.\p"
	.string "Would ya mind lookin' after a\n"
	.string "POKéMON for me? Thanks love.$"

SlateportCity_PokemonCenter_1F_Text_GalarGiftsCancel:
	.string "You'd really be doin' me a solid!.$"

SlateportCity_PokemonCenter_1F_Text_GalarGiftCheersLove:
	.string "Cheers, love.$"
