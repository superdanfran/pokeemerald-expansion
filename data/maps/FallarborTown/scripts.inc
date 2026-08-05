# 1 "data/maps/FallarborTown/scripts.pory"

# 2 "data/maps/FallarborTown/scripts.pory"
.set LOCALID_ARVEN, 5
# 3 "data/maps/FallarborTown/scripts.pory"

# 4 "data/maps/FallarborTown/scripts.pory"
FallarborTown_MapScripts::
# 5 "data/maps/FallarborTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
# 6 "data/maps/FallarborTown/scripts.pory"
	.byte 0
# 7 "data/maps/FallarborTown/scripts.pory"

# 8 "data/maps/FallarborTown/scripts.pory"
FallarborTown_OnTransition:
# 9 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_VISITED_FALLARBOR_TOWN
# 10 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 11 "data/maps/FallarborTown/scripts.pory"
	clearflag FLAG_CONTEST_SKETCH_CREATED
# 12 "data/maps/FallarborTown/scripts.pory"
	end
# 13 "data/maps/FallarborTown/scripts.pory"

# 14 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ArvenScene1::
# 15 "data/maps/FallarborTown/scripts.pory"
	lockall
# 16 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_0x8008, 1
# 17 "data/maps/FallarborTown/scripts.pory"
	goto FallarborTown_EventScript_ArvenScene
# 18 "data/maps/FallarborTown/scripts.pory"

# 19 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ArvenScene2::
# 20 "data/maps/FallarborTown/scripts.pory"
	lockall
# 21 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_0x8008, 2
# 22 "data/maps/FallarborTown/scripts.pory"
	goto FallarborTown_EventScript_ArvenScene
# 23 "data/maps/FallarborTown/scripts.pory"

# 24 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ArvenScene3::
# 25 "data/maps/FallarborTown/scripts.pory"
	lockall
# 26 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_0x8008, 3
# 27 "data/maps/FallarborTown/scripts.pory"
	goto FallarborTown_EventScript_ArvenScene
# 28 "data/maps/FallarborTown/scripts.pory"

# 29 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ArvenScene4::
# 30 "data/maps/FallarborTown/scripts.pory"
	lockall
# 31 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_0x8008, 4
# 32 "data/maps/FallarborTown/scripts.pory"
	goto FallarborTown_EventScript_ArvenScene
# 33 "data/maps/FallarborTown/scripts.pory"

# 34 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ArvenScene5::
# 35 "data/maps/FallarborTown/scripts.pory"
	lockall
# 36 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_0x8008, 5
# 37 "data/maps/FallarborTown/scripts.pory"
	goto FallarborTown_EventScript_ArvenScene
# 38 "data/maps/FallarborTown/scripts.pory"

# 39 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ArvenScene::
# 40 "data/maps/FallarborTown/scripts.pory"
	addobject LOCALID_ARVEN
# 41 "data/maps/FallarborTown/scripts.pory"
	applymovement LOCALID_ARVEN, FallarborTown_Movement_ArvenEntrance
# 42 "data/maps/FallarborTown/scripts.pory"
	waitmovement 0
# 43 "data/maps/FallarborTown/scripts.pory"
	playse SE_PIN
# 44 "data/maps/FallarborTown/scripts.pory"
	applymovement LOCALID_ARVEN, Common_Movement_ExclamationMark
# 45 "data/maps/FallarborTown/scripts.pory"
	waitmovement 0
# 46 "data/maps/FallarborTown/scripts.pory"
	applymovement LOCALID_ARVEN, Common_Movement_Delay48
# 47 "data/maps/FallarborTown/scripts.pory"
	waitmovement 0
# 48 "data/maps/FallarborTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, FallarborTown_EventScript_ArvenApproachPlayer1
# 49 "data/maps/FallarborTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, FallarborTown_EventScript_ArvenApproachPlayer2
# 50 "data/maps/FallarborTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, FallarborTown_EventScript_ArvenApproachPlayer3
# 51 "data/maps/FallarborTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, FallarborTown_EventScript_ArvenApproachPlayer4
# 52 "data/maps/FallarborTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, FallarborTown_EventScript_ArvenApproachPlayer5
# 53 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_YouLookStrong, MSGBOX_DEFAULT
# 54 "data/maps/FallarborTown/scripts.pory"
	closemessage
# 55 "data/maps/FallarborTown/scripts.pory"
	call FallarborTown_EventScript_ArvenBattle
# 56 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_ARVEN_BATTLE
# 57 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_ComeToMeteorFalls, MSGBOX_DEFAULT
# 58 "data/maps/FallarborTown/scripts.pory"
	closemessage
# 59 "data/maps/FallarborTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, FallarborTown_EventScript_ArvenExit1
# 60 "data/maps/FallarborTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, FallarborTown_EventScript_ArvenExit2
# 61 "data/maps/FallarborTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, FallarborTown_EventScript_ArvenExit3
# 62 "data/maps/FallarborTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, FallarborTown_EventScript_ArvenExit4
# 63 "data/maps/FallarborTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, FallarborTown_EventScript_ArvenExit5
# 64 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_HIDE_FALLARBOR_ARVEN
# 65 "data/maps/FallarborTown/scripts.pory"
	removeobject LOCALID_ARVEN
# 66 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_FALLARBOR_TOWN_STATE, 1
# 67 "data/maps/FallarborTown/scripts.pory"
	releaseall
# 68 "data/maps/FallarborTown/scripts.pory"
	end
# 69 "data/maps/FallarborTown/scripts.pory"

# 70 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_ArvenEntrance:
# 71 "data/maps/FallarborTown/scripts.pory"
	walk_right
# 72 "data/maps/FallarborTown/scripts.pory"
	walk_right
# 73 "data/maps/FallarborTown/scripts.pory"
	walk_right
# 74 "data/maps/FallarborTown/scripts.pory"
	walk_right
# 75 "data/maps/FallarborTown/scripts.pory"
	walk_right
# 76 "data/maps/FallarborTown/scripts.pory"
	step_end
# 77 "data/maps/FallarborTown/scripts.pory"

# 78 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ArvenApproachPlayer1::
# 79 "data/maps/FallarborTown/scripts.pory"
	applymovement LOCALID_ARVEN, FallarborTown_Movement_ArvenApproachPlayer1
# 80 "data/maps/FallarborTown/scripts.pory"
	waitmovement 0
# 81 "data/maps/FallarborTown/scripts.pory"
	return
# 82 "data/maps/FallarborTown/scripts.pory"

# 83 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ArvenApproachPlayer2::
# 84 "data/maps/FallarborTown/scripts.pory"
	applymovement LOCALID_ARVEN, FallarborTown_Movement_ArvenApproachPlayer2
# 85 "data/maps/FallarborTown/scripts.pory"
	waitmovement 0
# 86 "data/maps/FallarborTown/scripts.pory"
	return
# 87 "data/maps/FallarborTown/scripts.pory"

# 88 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ArvenApproachPlayer3::
# 89 "data/maps/FallarborTown/scripts.pory"
	applymovement LOCALID_ARVEN, FallarborTown_Movement_ArvenApproachPlayer3
# 90 "data/maps/FallarborTown/scripts.pory"
	waitmovement 0
# 91 "data/maps/FallarborTown/scripts.pory"
	return
# 92 "data/maps/FallarborTown/scripts.pory"

# 93 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ArvenApproachPlayer4::
# 94 "data/maps/FallarborTown/scripts.pory"
	applymovement LOCALID_ARVEN, FallarborTown_Movement_ArvenApproachPlayer4
# 95 "data/maps/FallarborTown/scripts.pory"
	waitmovement 0
# 96 "data/maps/FallarborTown/scripts.pory"
	return
# 97 "data/maps/FallarborTown/scripts.pory"

# 98 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ArvenApproachPlayer5::
# 99 "data/maps/FallarborTown/scripts.pory"
	applymovement LOCALID_ARVEN, FallarborTown_Movement_ArvenApproachPlayer5
# 100 "data/maps/FallarborTown/scripts.pory"
	waitmovement 0
# 101 "data/maps/FallarborTown/scripts.pory"
	return
# 102 "data/maps/FallarborTown/scripts.pory"

# 103 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ArvenExit1::
# 104 "data/maps/FallarborTown/scripts.pory"
	applymovement LOCALID_ARVEN, FallarborTown_Movement_ArvenExit1
# 105 "data/maps/FallarborTown/scripts.pory"
	waitmovement 0
# 106 "data/maps/FallarborTown/scripts.pory"
	return
# 107 "data/maps/FallarborTown/scripts.pory"

# 108 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ArvenExit2::
# 109 "data/maps/FallarborTown/scripts.pory"
	applymovement LOCALID_ARVEN, FallarborTown_Movement_ArvenExit2
# 110 "data/maps/FallarborTown/scripts.pory"
	waitmovement 0
# 111 "data/maps/FallarborTown/scripts.pory"
	return
# 112 "data/maps/FallarborTown/scripts.pory"

# 113 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ArvenExit3::
# 114 "data/maps/FallarborTown/scripts.pory"
	applymovement LOCALID_ARVEN, FallarborTown_Movement_ArvenExit3
# 115 "data/maps/FallarborTown/scripts.pory"
	waitmovement 0
# 116 "data/maps/FallarborTown/scripts.pory"
	return
# 117 "data/maps/FallarborTown/scripts.pory"

# 118 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ArvenExit4::
# 119 "data/maps/FallarborTown/scripts.pory"
	applymovement LOCALID_ARVEN, FallarborTown_Movement_ArvenExit4
# 120 "data/maps/FallarborTown/scripts.pory"
	waitmovement 0
# 121 "data/maps/FallarborTown/scripts.pory"
	return
# 122 "data/maps/FallarborTown/scripts.pory"

# 123 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ArvenExit5::
# 124 "data/maps/FallarborTown/scripts.pory"
	applymovement LOCALID_ARVEN, FallarborTown_Movement_ArvenExit5
# 125 "data/maps/FallarborTown/scripts.pory"
	waitmovement 0
# 126 "data/maps/FallarborTown/scripts.pory"
	return
# 127 "data/maps/FallarborTown/scripts.pory"

# 128 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_ArvenApproachPlayer1:
# 129 "data/maps/FallarborTown/scripts.pory"
	walk_right
# 130 "data/maps/FallarborTown/scripts.pory"
	walk_up
# 131 "data/maps/FallarborTown/scripts.pory"
	step_end
# 132 "data/maps/FallarborTown/scripts.pory"

# 133 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_ArvenApproachPlayer2:
# 134 "data/maps/FallarborTown/scripts.pory"
	walk_right
# 135 "data/maps/FallarborTown/scripts.pory"
	step_end
# 136 "data/maps/FallarborTown/scripts.pory"

# 137 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_ArvenApproachPlayer3:
# 138 "data/maps/FallarborTown/scripts.pory"
	walk_right
# 139 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 140 "data/maps/FallarborTown/scripts.pory"
	step_end
# 141 "data/maps/FallarborTown/scripts.pory"

# 142 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_ArvenApproachPlayer4:
# 143 "data/maps/FallarborTown/scripts.pory"
	walk_right
# 144 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 145 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 146 "data/maps/FallarborTown/scripts.pory"
	step_end
# 147 "data/maps/FallarborTown/scripts.pory"

# 148 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_ArvenApproachPlayer5:
# 149 "data/maps/FallarborTown/scripts.pory"
	walk_right
# 150 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 151 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 152 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 153 "data/maps/FallarborTown/scripts.pory"
	step_end
# 154 "data/maps/FallarborTown/scripts.pory"

# 155 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_ArvenExit1:
# 156 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 157 "data/maps/FallarborTown/scripts.pory"
	walk_down
# 158 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 159 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 160 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 161 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 162 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 163 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 164 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 165 "data/maps/FallarborTown/scripts.pory"
	step_end
# 166 "data/maps/FallarborTown/scripts.pory"

# 167 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_ArvenExit2:
# 168 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 169 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 170 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 171 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 172 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 173 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 174 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 175 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 176 "data/maps/FallarborTown/scripts.pory"
	step_end
# 177 "data/maps/FallarborTown/scripts.pory"

# 178 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_ArvenExit3:
# 179 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 180 "data/maps/FallarborTown/scripts.pory"
	walk_up
# 181 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 182 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 183 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 184 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 185 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 186 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 187 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 188 "data/maps/FallarborTown/scripts.pory"
	step_end
# 189 "data/maps/FallarborTown/scripts.pory"

# 190 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_ArvenExit4:
# 191 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 192 "data/maps/FallarborTown/scripts.pory"
	walk_up
# 193 "data/maps/FallarborTown/scripts.pory"
	walk_up
# 194 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 195 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 196 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 197 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 198 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 199 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 200 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 201 "data/maps/FallarborTown/scripts.pory"
	step_end
# 202 "data/maps/FallarborTown/scripts.pory"

# 203 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Movement_ArvenExit5:
# 204 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 205 "data/maps/FallarborTown/scripts.pory"
	walk_up
# 206 "data/maps/FallarborTown/scripts.pory"
	walk_up
# 207 "data/maps/FallarborTown/scripts.pory"
	walk_up
# 208 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 209 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 210 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 211 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 212 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 213 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 214 "data/maps/FallarborTown/scripts.pory"
	walk_left
# 215 "data/maps/FallarborTown/scripts.pory"
	step_end
# 216 "data/maps/FallarborTown/scripts.pory"

# 217 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ArvenBattle::
# 218 "data/maps/FallarborTown/scripts.pory"
	trainerbattle_no_intro TRAINER_ARVEN_1, FallarborTown_Text_ArvenDefeated
# 219 "data/maps/FallarborTown/scripts.pory"
	return
# 220 "data/maps/FallarborTown/scripts.pory"
	end
# 221 "data/maps/FallarborTown/scripts.pory"

# 222 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertM::
# 223 "data/maps/FallarborTown/scripts.pory"
	lock
# 224 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 225 "data/maps/FallarborTown/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
# 226 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
# 227 "data/maps/FallarborTown/scripts.pory"
	release
# 228 "data/maps/FallarborTown/scripts.pory"
	end
# 229 "data/maps/FallarborTown/scripts.pory"

# 230 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertMNormal::
# 231 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
# 232 "data/maps/FallarborTown/scripts.pory"
	release
# 233 "data/maps/FallarborTown/scripts.pory"
	end
# 234 "data/maps/FallarborTown/scripts.pory"

# 235 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Girl::
# 236 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
# 237 "data/maps/FallarborTown/scripts.pory"
	end
# 238 "data/maps/FallarborTown/scripts.pory"

# 239 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Gentleman::
# 240 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
# 241 "data/maps/FallarborTown/scripts.pory"
	end
# 242 "data/maps/FallarborTown/scripts.pory"

# 243 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Azurill::
# 244 "data/maps/FallarborTown/scripts.pory"
	lock
# 245 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 246 "data/maps/FallarborTown/scripts.pory"
	waitse
# 247 "data/maps/FallarborTown/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 248 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
# 249 "data/maps/FallarborTown/scripts.pory"
	waitmoncry
# 250 "data/maps/FallarborTown/scripts.pory"
	release
# 251 "data/maps/FallarborTown/scripts.pory"
	end
# 252 "data/maps/FallarborTown/scripts.pory"

# 253 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_BattleTentSign::
# 254 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
# 255 "data/maps/FallarborTown/scripts.pory"
	end
# 256 "data/maps/FallarborTown/scripts.pory"

# 257 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_TownSign::
# 258 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
# 259 "data/maps/FallarborTown/scripts.pory"
	end
# 260 "data/maps/FallarborTown/scripts.pory"

# 261 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_MoveTutorSign::
# 262 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
# 263 "data/maps/FallarborTown/scripts.pory"
	end
# 264 "data/maps/FallarborTown/scripts.pory"

# 265 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_ShadyCharactersCozmosHome:
# 266 "data/maps/FallarborTown/scripts.pory"
	.string "Something's happening,\n"
# 267 "data/maps/FallarborTown/scripts.pory"
	.string "and I don't like it!\p"
# 268 "data/maps/FallarborTown/scripts.pory"
	.string "I've seen shady characters wandering\n"
# 269 "data/maps/FallarborTown/scripts.pory"
	.string "in and out of PROF. COZMO's home…$"
# 270 "data/maps/FallarborTown/scripts.pory"

# 271 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_RegionKnownForMeteors:
# 272 "data/maps/FallarborTown/scripts.pory"
	.string "This region's been known for meteors\n"
# 273 "data/maps/FallarborTown/scripts.pory"
	.string "since the olden days.\p"
# 274 "data/maps/FallarborTown/scripts.pory"
	.string "They say METEOR FALLS was gouged out\n"
# 275 "data/maps/FallarborTown/scripts.pory"
	.string "by a falling meteorite long ago.$"
# 276 "data/maps/FallarborTown/scripts.pory"

# 277 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MyPreciousAzurill:
# 278 "data/maps/FallarborTown/scripts.pory"
	.string "See! Take a look!\n"
# 279 "data/maps/FallarborTown/scripts.pory"
	.string "This is my precious AZURILL!\p"
# 280 "data/maps/FallarborTown/scripts.pory"
	.string "It's slick and smooth and plushy, too!$"
# 281 "data/maps/FallarborTown/scripts.pory"

# 282 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_Azurill:
# 283 "data/maps/FallarborTown/scripts.pory"
	.string "AZURILL: Rooreelooo.$"
# 284 "data/maps/FallarborTown/scripts.pory"

# 285 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_HaveYouChallengedFlannery:
# 286 "data/maps/FallarborTown/scripts.pory"
	.string "Have you already challenged FLANNERY,\n"
# 287 "data/maps/FallarborTown/scripts.pory"
	.string "the LEADER of LAVARIDGE GYM?\p"
# 288 "data/maps/FallarborTown/scripts.pory"
	.string "The girl's grandfather was famous.\n"
# 289 "data/maps/FallarborTown/scripts.pory"
	.string "He was one of the ELITE FOUR in the\l"
# 290 "data/maps/FallarborTown/scripts.pory"
	.string "POKéMON LEAGUE at one point.\p"
# 291 "data/maps/FallarborTown/scripts.pory"
	.string "It wouldn't surprise me to see FLANNERY\n"
# 292 "data/maps/FallarborTown/scripts.pory"
	.string "become a great TRAINER in her own\l"
# 293 "data/maps/FallarborTown/scripts.pory"
	.string "right.$"
# 294 "data/maps/FallarborTown/scripts.pory"

# 295 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_BattleTentSign:
# 296 "data/maps/FallarborTown/scripts.pory"
	.string "BATTLE TENT FALLARBOR SITE\n"
# 297 "data/maps/FallarborTown/scripts.pory"
	.string "“May the Greatest Teams Gather!”$"
# 298 "data/maps/FallarborTown/scripts.pory"

# 299 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_TownSign:
# 300 "data/maps/FallarborTown/scripts.pory"
	.string "FALLARBOR TOWN\n"
# 301 "data/maps/FallarborTown/scripts.pory"
	.string "“A farm community with small gardens.”$"
# 302 "data/maps/FallarborTown/scripts.pory"

# 303 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MoveTutorSign:
# 304 "data/maps/FallarborTown/scripts.pory"
	.string "MOVE TUTOR'S HOUSE\n"
# 305 "data/maps/FallarborTown/scripts.pory"
	.string "“New moves taught to POKéMON.”$"
# 306 "data/maps/FallarborTown/scripts.pory"

# 307 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_YouLookStrong:
# 308 "data/maps/FallarborTown/scripts.pory"
	.string "Hey, {PLAYER}{KUN}. Good to meet you.\p"
# 309 "data/maps/FallarborTown/scripts.pory"
	.string "NEMONA told me about you, said\n"
# 310 "data/maps/FallarborTown/scripts.pory"
	.string "you're strong.\p"
# 311 "data/maps/FallarborTown/scripts.pory"
	.string "So, uh. I need some help\n"
# 312 "data/maps/FallarborTown/scripts.pory"
	.string "with something. But I need to know\p"
# 313 "data/maps/FallarborTown/scripts.pory"
	.string "you're up to the task.\n"
# 314 "data/maps/FallarborTown/scripts.pory"
	.string "I'm gonna have to test you myself!$"
# 315 "data/maps/FallarborTown/scripts.pory"

# 316 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_ArvenDefeated:
# 317 "data/maps/FallarborTown/scripts.pory"
	.string "Dang… You are strong after all.$"
# 318 "data/maps/FallarborTown/scripts.pory"
	end
# 319 "data/maps/FallarborTown/scripts.pory"

# 320 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_ComeToMeteorFalls:
# 321 "data/maps/FallarborTown/scripts.pory"
	.string "Will you help me then? I was looking\n"
# 322 "data/maps/FallarborTown/scripts.pory"
	.string "for something by METEOR FALLS\p"
# 323 "data/maps/FallarborTown/scripts.pory"
	.string " and there were these bad guys\n"
# 324 "data/maps/FallarborTown/scripts.pory"
	.string "hanging out there.\p"
# 325 "data/maps/FallarborTown/scripts.pory"
	.string "I was outnumbered, so I couldn't\n"
# 326 "data/maps/FallarborTown/scripts.pory"
	.string "take them.\p"
# 327 "data/maps/FallarborTown/scripts.pory"
	.string "I'll meet you there, yeah?$"
