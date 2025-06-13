.set LOCALID_NURSE, 1

RustboroCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

RustboroCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
	call Common_EventScript_UpdateBrineyLocation
	end

RustboroCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

RustboroCity_PokemonCenter_1F_EventScript_KalosGifts::
	goto_if_set FLAG_RECEIVED_KALOS_GIFT, RustboroCity_PokemonCenter_1F_EventScript_KalosGiftGiven
	msgbox RustboroCity_PokemonCenter_1F_Text_KalosGifts, MSGBOX_DEFAULT
	givemon SPECIES_FROAKIE, 5
	setflag FLAG_RECEIVED_KALOS_GIFT
	end

RustboroCity_PokemonCenter_1F_EventScript_KalosGiftGiven::
	msgbox RustboroCity_PokemonCenter_1F_Text_KalosGiftBonneChance, MSGBOX_DEFAULT
	end

RustboroCity_PokemonCenter_1F_EventScript_Man::
	msgbox RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities, MSGBOX_NPC
	end

RustboroCity_PokemonCenter_1F_EventScript_Boy::
	msgbox RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
	end

RustboroCity_PokemonCenter_1F_EventScript_Girl::
	msgbox RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor, MSGBOX_NPC
	end

RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities:
	.string "My POKéMON has a NAIVE nature, and my\n"
	.string "friend's has a JOLLY nature.\p"
	.string "It's fascinating how POKéMON have\n"
	.string "personalities!$"

RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon:
	.string "Just like people, there are male and\n"
	.string "female POKéMON.\p"
	.string "But no one seems to have any idea how\n"
	.string "they're different.\p"
	.string "I've heard some POKéMON can even\n"
	.string "change genders! Aren't POKéMON amazing?$"

RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor:
	.string "The man next door gave me an HM!\p"
	.string "I used it to teach my POKéMON how to\n"
	.string "CUT down skinny trees.$"

RustboroCity_PokemonCenter_1F_Text_KalosGifts:
	.string "Bonjour! Salut! Allo allo!\p"
	.string "I just got back from the KALOS region\n"
	.string "and I caught these cute guys.\p"
	.string "Do you want one?.$"

RustboroCity_PokemonCenter_1F_Text_KalosGiftBonneChance:
	.string "Bonne chance!.$"