# 1 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 2 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Frlg_MapScripts::
# 3 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_OnTransition
# 4 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 6 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_OnTransition::
# 7 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_FUCHSIA_CITY
# 8 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	call_if_set FLAG_GOT_DOME_FOSSIL, FuchsiaCity_EventScript_SetOmanyteGfx
# 9 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	call_if_unset FLAG_GOT_DOME_FOSSIL, FuchsiaCity_EventScript_SetKabutoGfx
# 10 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 11 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 12 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_SetOmanyteGfx::
# 13 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OMANYTE
# 14 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	return
# 15 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 16 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_SetKabutoGfx::
# 17 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_KABUTO
# 18 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	return
# 19 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 20 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_LittleBoy::
# 21 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_DidYouTrySafariGame, MSGBOX_NPC
# 22 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 23 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 24 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_OldMan::
# 25 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_SafariZoneZooInFront, MSGBOX_NPC
# 26 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 27 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 28 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_Erik::
# 29 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_WheresSara, MSGBOX_NPC
# 30 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 31 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 32 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_Youngster::
# 33 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_ItemBallInThere, MSGBOX_NPC
# 34 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 35 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 36 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_Lass::
# 37 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lock
# 38 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	faceplayer
# 39 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_KOGA, 3
# 40 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_MyFatherIsGymLeader
# 41 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	release
# 42 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 43 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 44 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_CitySign::
# 45 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_CitySign, MSGBOX_SIGN
# 46 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 47 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 48 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_SafariZoneSign::
# 49 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_SafariZoneSign, MSGBOX_SIGN
# 50 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 51 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 52 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_SafariGameSign::
# 53 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_SafariGameSign, MSGBOX_SIGN
# 54 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 55 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 56 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_WardensHomeSign::
# 57 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_WardensHomeSign, MSGBOX_SIGN
# 58 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 59 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 60 "data/maps/FuchsiaCity_Frlg/scripts.pory"
@ Unused
# 61 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_SafariZoneOfficeSign::
# 62 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_SafariZoneOfficeSign, MSGBOX_SIGN
# 63 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 64 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 65 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_GymSign::
# 66 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lockall
# 67 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_KOGA, 0
# 68 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_GymSign
# 69 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	releaseall
# 70 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 71 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 72 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_ChanseySign::
# 73 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lockall
# 74 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_CHANSEY
# 75 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	special SetSeenMon
# 76 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	showmonpic SPECIES_CHANSEY, 10, 3
# 77 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_ChanseySign
# 78 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	hidemonpic
# 79 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	releaseall
# 80 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 81 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 82 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_VoltorbSign::
# 83 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lockall
# 84 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_VOLTORB
# 85 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	special SetSeenMon
# 86 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	showmonpic SPECIES_VOLTORB, 10, 3
# 87 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_VoltorbSign
# 88 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	hidemonpic
# 89 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	releaseall
# 90 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 91 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 92 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_KangaskhanSign::
# 93 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lockall
# 94 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_KANGASKHAN
# 95 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	special SetSeenMon
# 96 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	showmonpic SPECIES_KANGASKHAN, 10, 3
# 97 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_KangaskhanSign
# 98 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	hidemonpic
# 99 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	releaseall
# 100 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 101 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 102 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_SlowpokeSign::
# 103 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lockall
# 104 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_SLOWPOKE
# 105 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	special SetSeenMon
# 106 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	showmonpic SPECIES_SLOWPOKE, 10, 3
# 107 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_SlowpokeSign
# 108 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	hidemonpic
# 109 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	releaseall
# 110 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 111 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 112 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_LaprasSign::
# 113 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lockall
# 114 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_LAPRAS
# 115 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	special SetSeenMon
# 116 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	showmonpic SPECIES_LAPRAS, 10, 3
# 117 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_LaprasSign
# 118 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	hidemonpic
# 119 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	releaseall
# 120 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 121 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 122 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_FossilMonSign::
# 123 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	lockall
# 124 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_DOME_FOSSIL, FuchsiaCity_EventScript_OmanyteSign
# 125 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_KABUTO
# 126 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	special SetSeenMon
# 127 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	showmonpic SPECIES_KABUTO, 10, 3
# 128 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_KabutoSign
# 129 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	hidemonpic
# 130 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	releaseall
# 131 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 132 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 133 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_EventScript_OmanyteSign::
# 134 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_OMANYTE
# 135 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	special SetSeenMon
# 136 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	showmonpic SPECIES_OMANYTE, 10, 3
# 137 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	msgbox FuchsiaCity_Text_OmanyteSign
# 138 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	hidemonpic
# 139 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	releaseall
# 140 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	end
# 141 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 142 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_DidYouTrySafariGame::
# 143 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Did you try the SAFARI GAME?\p"
# 144 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "There are some rare POKéMON that\n"
# 145 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "can only be caught there.$"
# 146 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 147 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_SafariZoneZooInFront::
# 148 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "The SAFARI ZONE has a zoo in front\n"
# 149 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "of the entrance.\p"
# 150 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Out back is the SAFARI GAME for\n"
# 151 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "catching POKéMON.$"
# 152 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 153 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_WheresSara::
# 154 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "ERIK: Where's SARA?\n"
# 155 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "I said I'd meet her here.$"
# 156 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 157 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_ItemBallInThere::
# 158 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "That item ball in there…\n"
# 159 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Were you wanting that?\p"
# 160 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Me, too!\n"
# 161 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "…Huh? That's a POKéMON?$"
# 162 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 163 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_CitySign::
# 164 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "FUCHSIA CITY\n"
# 165 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Behold! It's Passion Pink!$"
# 166 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 167 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_SafariZoneSign::
# 168 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "POKéMON PARADISE\n"
# 169 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "SAFARI ZONE$"
# 170 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 171 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_SafariGameSign::
# 172 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "SAFARI GAME\n"
# 173 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "POKéMON-U-CATCH!$"
# 174 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 175 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_WardensHomeSign::
# 176 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "SAFARI ZONE\n"
# 177 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "WARDEN'S HOME$"
# 178 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 179 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_SafariZoneOfficeSign::
# 180 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "POKéMON PARADISE!\n"
# 181 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Welcome to the SAFARI ZONE!\l"
# 182 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "SAFARI ZONE OFFICE$"
# 183 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 184 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_GymSign::
# 185 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "FUCHSIA CITY POKéMON GYM\n"
# 186 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "LEADER: KOGA\l"
# 187 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "The Poisonous Ninja Master$"
# 188 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 189 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_ChanseySign::
# 190 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Name: CHANSEY\n"
# 191 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Catching one is all up to chance.$"
# 192 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 193 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_VoltorbSign::
# 194 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Name: VOLTORB\n"
# 195 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "The very image of a POKé BALL.$"
# 196 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 197 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_KangaskhanSign::
# 198 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Name: KANGASKHAN\p"
# 199 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "A maternal POKéMON that raises its\n"
# 200 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "young in a pouch on its belly.$"
# 201 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 202 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_SlowpokeSign::
# 203 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Name: SLOWPOKE\n"
# 204 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Friendly and very slow moving.$"
# 205 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 206 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_LaprasSign::
# 207 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Name: LAPRAS\n"
# 208 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "AKA the king of the seas.$"
# 209 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 210 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_OmanyteSign::
# 211 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Name: OMANYTE\n"
# 212 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "An extremely rare POKéMON that was\l"
# 213 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "regenerated from a fossil.$"
# 214 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 215 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_KabutoSign::
# 216 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Name: KABUTO\n"
# 217 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "An extremely rare POKéMON that was\l"
# 218 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "regenerated from a fossil.$"
# 219 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 220 "data/maps/FuchsiaCity_Frlg/scripts.pory"
@ Unused. May have been meant to be the placeholder text for the zoo mons, similar to RB's "!" text
# 221 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_Ellipsis::
# 222 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "……$"
# 223 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 224 "data/maps/FuchsiaCity_Frlg/scripts.pory"
Text_SubstituteTeach::
# 225 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Aww, I wish I was a KANGASKHAN\n"
# 226 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "baby.\p"
# 227 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "I'd love to be a substitute for the\n"
# 228 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "baby…\p"
# 229 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "And snuggle in the mother\n"
# 230 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "KANGASKHAN's belly pouch.\p"
# 231 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "But only POKéMON can use the\n"
# 232 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "technique SUBSTITUTE…\p"
# 233 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Want me to teach SUBSTITUTE to\n"
# 234 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "one of your POKéMON?$"
# 235 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 236 "data/maps/FuchsiaCity_Frlg/scripts.pory"
Text_SubstituteDeclined::
# 237 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Oh, really?\n"
# 238 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "SUBSTITUTE seems so fun…$"
# 239 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 240 "data/maps/FuchsiaCity_Frlg/scripts.pory"
Text_SubstituteWhichMon::
# 241 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Which POKéMON wants to learn\n"
# 242 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "SUBSTITUTE?$"
# 243 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 244 "data/maps/FuchsiaCity_Frlg/scripts.pory"
Text_SubstituteTaught::
# 245 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "Boy, what I'd give to crawl inside\n"
# 246 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "a KANGASKHAN belly pouch…$"
# 247 "data/maps/FuchsiaCity_Frlg/scripts.pory"

# 248 "data/maps/FuchsiaCity_Frlg/scripts.pory"
FuchsiaCity_Text_MyFatherIsGymLeader::
# 249 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "My father is the GYM LEADER of\n"
# 250 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "this town.\p"
# 251 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "I'm training to use POISON POKéMON\n"
# 252 "data/maps/FuchsiaCity_Frlg/scripts.pory"
	.string "as well as my father.$"
