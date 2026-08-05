# 1 "data/maps/PowerPlant_Frlg/scripts.pory"

# 2 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_Frlg_MapScripts::
# 3 "data/maps/PowerPlant_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PowerPlant_OnResume
# 4 "data/maps/PowerPlant_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PowerPlant_OnTransition
# 5 "data/maps/PowerPlant_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/PowerPlant_Frlg/scripts.pory"

# 7 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_OnResume::
# 8 "data/maps/PowerPlant_Frlg/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, PowerPlant_EventScript_TryRemoveStaticMon
# 9 "data/maps/PowerPlant_Frlg/scripts.pory"
	end
# 10 "data/maps/PowerPlant_Frlg/scripts.pory"

# 11 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_TryRemoveStaticMon::
# 12 "data/maps/PowerPlant_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 14 "data/maps/PowerPlant_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 15 "data/maps/PowerPlant_Frlg/scripts.pory"
	return
# 16 "data/maps/PowerPlant_Frlg/scripts.pory"

# 17 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_OnTransition::
# 18 "data/maps/PowerPlant_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_POWER_PLANT
# 19 "data/maps/PowerPlant_Frlg/scripts.pory"
	call_if_unset FLAG_FOUGHT_ZAPDOS, PowerPlant_EventScript_ShowZapdos
# 20 "data/maps/PowerPlant_Frlg/scripts.pory"
	call_if_unset FLAG_FOUGHT_POWER_PLANT_ELECTRODE_1, PowerPlant_EventScript_ShowElectrode1
# 21 "data/maps/PowerPlant_Frlg/scripts.pory"
	call_if_unset FLAG_FOUGHT_POWER_PLANT_ELECTRODE_2, PowerPlant_EventScript_ShowElectrode2
# 22 "data/maps/PowerPlant_Frlg/scripts.pory"
	end
# 23 "data/maps/PowerPlant_Frlg/scripts.pory"

# 24 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_ShowZapdos::
# 25 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_HIDE_ZAPDOS
# 26 "data/maps/PowerPlant_Frlg/scripts.pory"
	return
# 27 "data/maps/PowerPlant_Frlg/scripts.pory"

# 28 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_ShowElectrode1::
# 29 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_HIDE_POWER_PLANT_ELECTRODE_1
# 30 "data/maps/PowerPlant_Frlg/scripts.pory"
	return
# 31 "data/maps/PowerPlant_Frlg/scripts.pory"

# 32 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_ShowElectrode2::
# 33 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_HIDE_POWER_PLANT_ELECTRODE_2
# 34 "data/maps/PowerPlant_Frlg/scripts.pory"
	return
# 35 "data/maps/PowerPlant_Frlg/scripts.pory"

# 36 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Zapdos::
# 37 "data/maps/PowerPlant_Frlg/scripts.pory"
	lock
# 38 "data/maps/PowerPlant_Frlg/scripts.pory"
	faceplayer
# 39 "data/maps/PowerPlant_Frlg/scripts.pory"
	setwildbattle SPECIES_ZAPDOS, 50
# 40 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitse
# 41 "data/maps/PowerPlant_Frlg/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 42 "data/maps/PowerPlant_Frlg/scripts.pory"
	message Text_Gyaoo
# 43 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitmessage
# 44 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitmoncry
# 45 "data/maps/PowerPlant_Frlg/scripts.pory"
	delay 10
# 46 "data/maps/PowerPlant_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, 0
# 47 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitbuttonpress
# 48 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 49 "data/maps/PowerPlant_Frlg/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 50 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 51 "data/maps/PowerPlant_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 52 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, PowerPlant_EventScript_DefeatedZapdos
# 53 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, PowerPlant_EventScript_RanFromZapdos
# 54 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, PowerPlant_EventScript_RanFromZapdos
# 55 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_ZAPDOS
# 56 "data/maps/PowerPlant_Frlg/scripts.pory"
	release
# 57 "data/maps/PowerPlant_Frlg/scripts.pory"
	end
# 58 "data/maps/PowerPlant_Frlg/scripts.pory"

# 59 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_DefeatedZapdos::
# 60 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_ZAPDOS
# 61 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto EventScript_RemoveStaticMon
# 62 "data/maps/PowerPlant_Frlg/scripts.pory"
	end
# 63 "data/maps/PowerPlant_Frlg/scripts.pory"

# 64 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_RanFromZapdos::
# 65 "data/maps/PowerPlant_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_ZAPDOS
# 66 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
# 67 "data/maps/PowerPlant_Frlg/scripts.pory"
	end
# 68 "data/maps/PowerPlant_Frlg/scripts.pory"

# 69 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Electrode1::
# 70 "data/maps/PowerPlant_Frlg/scripts.pory"
	lock
# 71 "data/maps/PowerPlant_Frlg/scripts.pory"
	faceplayer
# 72 "data/maps/PowerPlant_Frlg/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 34
# 73 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitse
# 74 "data/maps/PowerPlant_Frlg/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 75 "data/maps/PowerPlant_Frlg/scripts.pory"
	delay 40
# 76 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitmoncry
# 77 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 78 "data/maps/PowerPlant_Frlg/scripts.pory"
	dowildbattle
# 79 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 80 "data/maps/PowerPlant_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 81 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, PowerPlant_EventScript_FoughtElectrode1
# 82 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, PowerPlant_EventScript_FoughtElectrode1
# 83 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, PowerPlant_EventScript_FoughtElectrode1
# 84 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_1
# 85 "data/maps/PowerPlant_Frlg/scripts.pory"
	release
# 86 "data/maps/PowerPlant_Frlg/scripts.pory"
	end
# 87 "data/maps/PowerPlant_Frlg/scripts.pory"

# 88 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_FoughtElectrode1::
# 89 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_1
# 90 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto EventScript_RemoveStaticMon
# 91 "data/maps/PowerPlant_Frlg/scripts.pory"
	end
# 92 "data/maps/PowerPlant_Frlg/scripts.pory"

# 93 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_Electrode2::
# 94 "data/maps/PowerPlant_Frlg/scripts.pory"
	lock
# 95 "data/maps/PowerPlant_Frlg/scripts.pory"
	faceplayer
# 96 "data/maps/PowerPlant_Frlg/scripts.pory"
	setwildbattle SPECIES_ELECTRODE, 34
# 97 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitse
# 98 "data/maps/PowerPlant_Frlg/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 99 "data/maps/PowerPlant_Frlg/scripts.pory"
	delay 40
# 100 "data/maps/PowerPlant_Frlg/scripts.pory"
	waitmoncry
# 101 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 102 "data/maps/PowerPlant_Frlg/scripts.pory"
	dowildbattle
# 103 "data/maps/PowerPlant_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 104 "data/maps/PowerPlant_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 105 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, PowerPlant_EventScript_FoughtElectrode2
# 106 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, PowerPlant_EventScript_FoughtElectrode2
# 107 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, PowerPlant_EventScript_FoughtElectrode2
# 108 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_2
# 109 "data/maps/PowerPlant_Frlg/scripts.pory"
	release
# 110 "data/maps/PowerPlant_Frlg/scripts.pory"
	end
# 111 "data/maps/PowerPlant_Frlg/scripts.pory"

# 112 "data/maps/PowerPlant_Frlg/scripts.pory"
PowerPlant_EventScript_FoughtElectrode2::
# 113 "data/maps/PowerPlant_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_POWER_PLANT_ELECTRODE_2
# 114 "data/maps/PowerPlant_Frlg/scripts.pory"
	goto EventScript_RemoveStaticMon
# 115 "data/maps/PowerPlant_Frlg/scripts.pory"
	end
