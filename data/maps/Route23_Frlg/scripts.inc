# 1 "data/maps/Route23_Frlg/scripts.pory"

# 2 "data/maps/Route23_Frlg/scripts.pory"
Route23_Frlg_MapScripts::
# 3 "data/maps/Route23_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route23_OnTransition
# 4 "data/maps/Route23_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/Route23_Frlg/scripts.pory"

# 6 "data/maps/Route23_Frlg/scripts.pory"
Route23_OnTransition::
# 7 "data/maps/Route23_Frlg/scripts.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_3F_BOULDER
# 8 "data/maps/Route23_Frlg/scripts.pory"
	setflag FLAG_HIDE_VICTORY_ROAD_2F_BOULDER
# 9 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_1F, 0
# 10 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 0
# 11 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 0
# 12 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_3F, 0
# 13 "data/maps/Route23_Frlg/scripts.pory"
	end
# 14 "data/maps/Route23_Frlg/scripts.pory"

# 15 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_CascadeBadgeGuard::
# 16 "data/maps/Route23_Frlg/scripts.pory"
	lock
# 17 "data/maps/Route23_Frlg/scripts.pory"
	faceplayer
# 18 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 19 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_CASCADE_BADGE
# 20 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 21 "data/maps/Route23_Frlg/scripts.pory"
	end
# 22 "data/maps/Route23_Frlg/scripts.pory"

# 23 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_ThunderBadgeGuard::
# 24 "data/maps/Route23_Frlg/scripts.pory"
	lock
# 25 "data/maps/Route23_Frlg/scripts.pory"
	faceplayer
# 26 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 27 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_THUNDER_BADGE
# 28 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 29 "data/maps/Route23_Frlg/scripts.pory"
	end
# 30 "data/maps/Route23_Frlg/scripts.pory"

# 31 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_RainbowBadgeGuard::
# 32 "data/maps/Route23_Frlg/scripts.pory"
	lock
# 33 "data/maps/Route23_Frlg/scripts.pory"
	faceplayer
# 34 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 4
# 35 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_RAINBOW_BADGE
# 36 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 37 "data/maps/Route23_Frlg/scripts.pory"
	end
# 38 "data/maps/Route23_Frlg/scripts.pory"

# 39 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_SoulBadgeGuard::
# 40 "data/maps/Route23_Frlg/scripts.pory"
	lock
# 41 "data/maps/Route23_Frlg/scripts.pory"
	faceplayer
# 42 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 5
# 43 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SOUL_BADGE
# 44 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 45 "data/maps/Route23_Frlg/scripts.pory"
	end
# 46 "data/maps/Route23_Frlg/scripts.pory"

# 47 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_MarshBadgeGuard::
# 48 "data/maps/Route23_Frlg/scripts.pory"
	lock
# 49 "data/maps/Route23_Frlg/scripts.pory"
	faceplayer
# 50 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 6
# 51 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MARSH_BADGE
# 52 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 53 "data/maps/Route23_Frlg/scripts.pory"
	end
# 54 "data/maps/Route23_Frlg/scripts.pory"

# 55 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_VolcanoBadgeGuard::
# 56 "data/maps/Route23_Frlg/scripts.pory"
	lock
# 57 "data/maps/Route23_Frlg/scripts.pory"
	faceplayer
# 58 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 7
# 59 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_VOLCANO_BADGE
# 60 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 61 "data/maps/Route23_Frlg/scripts.pory"
	end
# 62 "data/maps/Route23_Frlg/scripts.pory"

# 63 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_EarthBadgeGuard::
# 64 "data/maps/Route23_Frlg/scripts.pory"
	lock
# 65 "data/maps/Route23_Frlg/scripts.pory"
	faceplayer
# 66 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 8
# 67 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_EARTH_BADGE
# 68 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 69 "data/maps/Route23_Frlg/scripts.pory"
	end
# 70 "data/maps/Route23_Frlg/scripts.pory"

# 71 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_CascadeBadgeGuardTrigger::
# 72 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 73 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 74 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_CASCADE_BADGE_GUARD
# 75 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_CASCADE_BADGE
# 76 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 77 "data/maps/Route23_Frlg/scripts.pory"
	end
# 78 "data/maps/Route23_Frlg/scripts.pory"

# 79 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_ThunderBadgeGuardTrigger::
# 80 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 81 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 82 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_THUNDER_BADGE_GUARD
# 83 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_THUNDER_BADGE
# 84 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 85 "data/maps/Route23_Frlg/scripts.pory"
	end
# 86 "data/maps/Route23_Frlg/scripts.pory"

# 87 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_RainbowBadgeGuardTrigger::
# 88 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 89 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 4
# 90 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_RAINBOW_BADGE_GUARD
# 91 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_RAINBOW_BADGE
# 92 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 93 "data/maps/Route23_Frlg/scripts.pory"
	end
# 94 "data/maps/Route23_Frlg/scripts.pory"

# 95 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_SoulBadgeGuardTrigger::
# 96 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 97 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 5
# 98 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_SOUL_BADGE_GUARD
# 99 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SOUL_BADGE
# 100 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 101 "data/maps/Route23_Frlg/scripts.pory"
	end
# 102 "data/maps/Route23_Frlg/scripts.pory"

# 103 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_MarshBadgeGuardTrigger::
# 104 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 105 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 6
# 106 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_MARSH_BADGE_GUARD
# 107 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MARSH_BADGE
# 108 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 109 "data/maps/Route23_Frlg/scripts.pory"
	end
# 110 "data/maps/Route23_Frlg/scripts.pory"

# 111 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_VolcanoBadgeGuardTrigger::
# 112 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 113 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 7
# 114 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_VOLCANO_BADGE_GUARD
# 115 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_VOLCANO_BADGE
# 116 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 117 "data/maps/Route23_Frlg/scripts.pory"
	end
# 118 "data/maps/Route23_Frlg/scripts.pory"

# 119 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_EarthBadgeGuardTrigger::
# 120 "data/maps/Route23_Frlg/scripts.pory"
	lockall
# 121 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 8
# 122 "data/maps/Route23_Frlg/scripts.pory"
	setvar VAR_0x8009, LOCALID_EARTH_BADGE_GUARD
# 123 "data/maps/Route23_Frlg/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_EARTH_BADGE
# 124 "data/maps/Route23_Frlg/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 125 "data/maps/Route23_Frlg/scripts.pory"
	end
# 126 "data/maps/Route23_Frlg/scripts.pory"

# 127 "data/maps/Route23_Frlg/scripts.pory"
Route23_EventScript_VictoryRoadGateSign::
# 128 "data/maps/Route23_Frlg/scripts.pory"
	msgbox Route23_Text_VictoryRoadGateSign, MSGBOX_SIGN
# 129 "data/maps/Route23_Frlg/scripts.pory"
	end
# 130 "data/maps/Route23_Frlg/scripts.pory"

# 131 "data/maps/Route23_Frlg/scripts.pory"
Route23_Text_VictoryRoadGateSign::
# 132 "data/maps/Route23_Frlg/scripts.pory"
	.string "VICTORY ROAD GATE -\n"
# 133 "data/maps/Route23_Frlg/scripts.pory"
	.string "POKéMON LEAGUE$"
