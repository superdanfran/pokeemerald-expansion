# 1 "data/maps/DesertUnderpass/scripts.pory"

# 2 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_MapScripts::
# 3 "data/maps/DesertUnderpass/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DesertUnderpass_OnTransition
# 4 "data/maps/DesertUnderpass/scripts.pory"
	.byte 0
# 5 "data/maps/DesertUnderpass/scripts.pory"

# 6 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_OnTransition:
# 7 "data/maps/DesertUnderpass/scripts.pory"
	setflag FLAG_LANDMARK_DESERT_UNDERPASS
# 8 "data/maps/DesertUnderpass/scripts.pory"
	end
# 9 "data/maps/DesertUnderpass/scripts.pory"

# 10 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_EventScript_Fossil::
# 11 "data/maps/DesertUnderpass/scripts.pory"
	lock
# 12 "data/maps/DesertUnderpass/scripts.pory"
	faceplayer
# 13 "data/maps/DesertUnderpass/scripts.pory"
	goto_if_set FLAG_CHOSE_DINO_FOSSIL, DesertUnderpass_EventScript_GiveDrakeFossil
# 14 "data/maps/DesertUnderpass/scripts.pory"
	goto_if_set FLAG_CHOSE_DRAKE_FOSSIL, DesertUnderpass_EventScript_GiveDinoFossil
# 15 "data/maps/DesertUnderpass/scripts.pory"
	goto_if_set FLAG_CHOSE_FISH_FOSSIL, DesertUnderpass_EventScript_GiveBirdFossil
# 16 "data/maps/DesertUnderpass/scripts.pory"
	goto_if_set FLAG_CHOSE_BIRD_FOSSIL, DesertUnderpass_EventScript_GiveFishFossil
# 17 "data/maps/DesertUnderpass/scripts.pory"
	release
# 18 "data/maps/DesertUnderpass/scripts.pory"
	end
# 19 "data/maps/DesertUnderpass/scripts.pory"

# 20 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_EventScript_GiveDinoFossil::
# 21 "data/maps/DesertUnderpass/scripts.pory"
	giveitem ITEM_FOSSILIZED_DINO
# 22 "data/maps/DesertUnderpass/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 23 "data/maps/DesertUnderpass/scripts.pory"
	removeobject LOCALID_UNDERPASS_FOSSIL
# 24 "data/maps/DesertUnderpass/scripts.pory"
	release
# 25 "data/maps/DesertUnderpass/scripts.pory"
	end
# 26 "data/maps/DesertUnderpass/scripts.pory"

# 27 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_EventScript_GiveDrakeFossil::
# 28 "data/maps/DesertUnderpass/scripts.pory"
	giveitem ITEM_FOSSILIZED_DRAKE
# 29 "data/maps/DesertUnderpass/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 30 "data/maps/DesertUnderpass/scripts.pory"
	removeobject LOCALID_UNDERPASS_FOSSIL
# 31 "data/maps/DesertUnderpass/scripts.pory"
	release
# 32 "data/maps/DesertUnderpass/scripts.pory"
	end
# 33 "data/maps/DesertUnderpass/scripts.pory"

# 34 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_EventScript_GiveFishFossil::
# 35 "data/maps/DesertUnderpass/scripts.pory"
	giveitem ITEM_FOSSILIZED_FISH
# 36 "data/maps/DesertUnderpass/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 37 "data/maps/DesertUnderpass/scripts.pory"
	removeobject LOCALID_UNDERPASS_FOSSIL
# 38 "data/maps/DesertUnderpass/scripts.pory"
	release
# 39 "data/maps/DesertUnderpass/scripts.pory"
	end
# 40 "data/maps/DesertUnderpass/scripts.pory"

# 41 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_EventScript_GiveBirdFossil::
# 42 "data/maps/DesertUnderpass/scripts.pory"
	giveitem ITEM_FOSSILIZED_BIRD
# 43 "data/maps/DesertUnderpass/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 44 "data/maps/DesertUnderpass/scripts.pory"
	removeobject LOCALID_UNDERPASS_FOSSIL
# 45 "data/maps/DesertUnderpass/scripts.pory"
	release
# 46 "data/maps/DesertUnderpass/scripts.pory"
	end
# 47 "data/maps/DesertUnderpass/scripts.pory"

# 48 "data/maps/DesertUnderpass/scripts.pory"
@ Unused
# 49 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_Text_FoundRootFossil::
# 50 "data/maps/DesertUnderpass/scripts.pory"
	.string "{PLAYER} found the ROOT FOSSIL.$"
# 51 "data/maps/DesertUnderpass/scripts.pory"

# 52 "data/maps/DesertUnderpass/scripts.pory"
@ Unused
# 53 "data/maps/DesertUnderpass/scripts.pory"
DesertUnderpass_Text_FoundClawFossil::
# 54 "data/maps/DesertUnderpass/scripts.pory"
	.string "{PLAYER} found the CLAW FOSSIL.$"
