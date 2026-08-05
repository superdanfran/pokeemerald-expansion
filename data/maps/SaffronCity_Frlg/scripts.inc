# 1 "data/maps/SaffronCity_Frlg/scripts.pory"

# 2 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Frlg_MapScripts::
# 3 "data/maps/SaffronCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_OnTransition
# 4 "data/maps/SaffronCity_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/SaffronCity_Frlg/scripts.pory"

# 6 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_OnTransition::
# 7 "data/maps/SaffronCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SAFFRON_CITY
# 8 "data/maps/SaffronCity_Frlg/scripts.pory"
	call_if_unset FLAG_RESCUED_MR_FUJI, SaffronCity_EventScript_MoveDoorGuardGrunt
# 9 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 10 "data/maps/SaffronCity_Frlg/scripts.pory"

# 11 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_MoveDoorGuardGrunt::
# 12 "data/maps/SaffronCity_Frlg/scripts.pory"
	setobjectxyperm LOCALID_SAFFRON_DOOR_GUARD_GRUNT, 33, 31
# 13 "data/maps/SaffronCity_Frlg/scripts.pory"
	return
# 14 "data/maps/SaffronCity_Frlg/scripts.pory"

# 15 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_RocketGrunt1::
# 16 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_WhatDoYouWantGetLost, MSGBOX_NPC
# 17 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 18 "data/maps/SaffronCity_Frlg/scripts.pory"

# 19 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_RocketGrunt2::
# 20 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_BossTakeTownForTeamRocket, MSGBOX_NPC
# 21 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 22 "data/maps/SaffronCity_Frlg/scripts.pory"

# 23 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_RocketGrunt3::
# 24 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_DontGetDefiantOrIllHurtYou, MSGBOX_NPC
# 25 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 26 "data/maps/SaffronCity_Frlg/scripts.pory"

# 27 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_RocketGrunt4::
# 28 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_SaffronBelongsToTeamRocket, MSGBOX_NPC
# 29 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 30 "data/maps/SaffronCity_Frlg/scripts.pory"

# 31 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_RocketGrunt5::
# 32 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_CriminalLifeMakesMeFeelAlive, MSGBOX_NPC
# 33 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 34 "data/maps/SaffronCity_Frlg/scripts.pory"

# 35 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_RocketGrunt6::
# 36 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_WatchWhereYoureWalking, MSGBOX_NPC
# 37 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 38 "data/maps/SaffronCity_Frlg/scripts.pory"

# 39 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_RocketGrunt7::
# 40 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_WeCanExploitMonsAroundWorld, MSGBOX_NPC
# 41 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 42 "data/maps/SaffronCity_Frlg/scripts.pory"

# 43 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_DoorGuardGrunt::
# 44 "data/maps/SaffronCity_Frlg/scripts.pory"
	lock
# 45 "data/maps/SaffronCity_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_MR_FUJI, SaffronCity_EventScript_DoorGuardAsleep
# 46 "data/maps/SaffronCity_Frlg/scripts.pory"
	applymovement LOCALID_SAFFRON_DOOR_GUARD_GRUNT, Common_Movement_FacePlayer
# 47 "data/maps/SaffronCity_Frlg/scripts.pory"
	waitmovement 0
# 48 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_ImASecurityGuard
# 49 "data/maps/SaffronCity_Frlg/scripts.pory"
	release
# 50 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 51 "data/maps/SaffronCity_Frlg/scripts.pory"

# 52 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_DoorGuardAsleep::
# 53 "data/maps/SaffronCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 54 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_HesTakingASnooze
# 55 "data/maps/SaffronCity_Frlg/scripts.pory"
	release
# 56 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 57 "data/maps/SaffronCity_Frlg/scripts.pory"

# 58 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_WorkerM::
# 59 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_YouBeatTeamRocket, MSGBOX_NPC
# 60 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 61 "data/maps/SaffronCity_Frlg/scripts.pory"

# 62 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_Youngster::
# 63 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_SafeToGoOutAgain, MSGBOX_NPC
# 64 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 65 "data/maps/SaffronCity_Frlg/scripts.pory"

# 66 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_Lass::
# 67 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_PeopleComingBackToSaffron, MSGBOX_NPC
# 68 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 69 "data/maps/SaffronCity_Frlg/scripts.pory"

# 70 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_Boy::
# 71 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_FlewHereOnPidgeot, MSGBOX_NPC
# 72 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 73 "data/maps/SaffronCity_Frlg/scripts.pory"

# 74 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_Pidgeot::
# 75 "data/maps/SaffronCity_Frlg/scripts.pory"
	lock
# 76 "data/maps/SaffronCity_Frlg/scripts.pory"
	faceplayer
# 77 "data/maps/SaffronCity_Frlg/scripts.pory"
	waitse
# 78 "data/maps/SaffronCity_Frlg/scripts.pory"
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
# 79 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_Pidgeot
# 80 "data/maps/SaffronCity_Frlg/scripts.pory"
	waitmoncry
# 81 "data/maps/SaffronCity_Frlg/scripts.pory"
	release
# 82 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 83 "data/maps/SaffronCity_Frlg/scripts.pory"

# 84 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_Man::
# 85 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_SawRocketBossEscaping, MSGBOX_NPC
# 86 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 87 "data/maps/SaffronCity_Frlg/scripts.pory"

# 88 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_CitySign::
# 89 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_CitySign, MSGBOX_SIGN
# 90 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 91 "data/maps/SaffronCity_Frlg/scripts.pory"

# 92 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_DojoSign::
# 93 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_FightingDojo, MSGBOX_SIGN
# 94 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 95 "data/maps/SaffronCity_Frlg/scripts.pory"

# 96 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_GymSign::
# 97 "data/maps/SaffronCity_Frlg/scripts.pory"
	lockall
# 98 "data/maps/SaffronCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 0
# 99 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_GymSign
# 100 "data/maps/SaffronCity_Frlg/scripts.pory"
	releaseall
# 101 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 102 "data/maps/SaffronCity_Frlg/scripts.pory"

# 103 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_TrainerTips1::
# 104 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_FullHealCuresStatus, MSGBOX_SIGN
# 105 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 106 "data/maps/SaffronCity_Frlg/scripts.pory"

# 107 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_TrainerTips2::
# 108 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_GreatBallImprovedCatchRate, MSGBOX_SIGN
# 109 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 110 "data/maps/SaffronCity_Frlg/scripts.pory"

# 111 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_SilphCoSign::
# 112 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_SilphCoSign, MSGBOX_SIGN
# 113 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 114 "data/maps/SaffronCity_Frlg/scripts.pory"

# 115 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_MrPsychicsHouseSign::
# 116 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_MrPsychicsHouse, MSGBOX_SIGN
# 117 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 118 "data/maps/SaffronCity_Frlg/scripts.pory"

# 119 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_SilphProductSign::
# 120 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_SilphsLatestProduct, MSGBOX_SIGN
# 121 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 122 "data/maps/SaffronCity_Frlg/scripts.pory"

# 123 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_EventScript_TrainerFanClubSign::
# 124 "data/maps/SaffronCity_Frlg/scripts.pory"
	msgbox SaffronCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 125 "data/maps/SaffronCity_Frlg/scripts.pory"
	end
# 126 "data/maps/SaffronCity_Frlg/scripts.pory"

# 127 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_WhatDoYouWantGetLost::
# 128 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "What do you want?\n"
# 129 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Get lost!$"
# 130 "data/maps/SaffronCity_Frlg/scripts.pory"

# 131 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_BossTakeTownForTeamRocket::
# 132 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "BOSS said he'll take this town\n"
# 133 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "in the name of TEAM ROCKET!$"
# 134 "data/maps/SaffronCity_Frlg/scripts.pory"

# 135 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_DontGetDefiantOrIllHurtYou::
# 136 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Don't get defiant!\n"
# 137 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Or I'll have to hurt you!$"
# 138 "data/maps/SaffronCity_Frlg/scripts.pory"

# 139 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_SaffronBelongsToTeamRocket::
# 140 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "SAFFRON belongs to TEAM ROCKET!$"
# 141 "data/maps/SaffronCity_Frlg/scripts.pory"

# 142 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_CriminalLifeMakesMeFeelAlive::
# 143 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "My life as a criminal makes me feel\n"
# 144 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "so alive!$"
# 145 "data/maps/SaffronCity_Frlg/scripts.pory"

# 146 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_WatchWhereYoureWalking::
# 147 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Ow!\n"
# 148 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Watch where you're walking!$"
# 149 "data/maps/SaffronCity_Frlg/scripts.pory"

# 150 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_WeCanExploitMonsAroundWorld::
# 151 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "With SILPH under control, we can\n"
# 152 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "exploit POKéMON around the world!\p"
# 153 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "We'll get stinking rich, yeahah!$"
# 154 "data/maps/SaffronCity_Frlg/scripts.pory"

# 155 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_YouBeatTeamRocket::
# 156 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "You beat TEAM ROCKET all alone?\n"
# 157 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "That's amazing!$"
# 158 "data/maps/SaffronCity_Frlg/scripts.pory"

# 159 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_SafeToGoOutAgain::
# 160 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Yeah! TEAM ROCKET is gone!\n"
# 161 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "It's safe to go out again!$"
# 162 "data/maps/SaffronCity_Frlg/scripts.pory"

# 163 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_PeopleComingBackToSaffron::
# 164 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "People fled from here in droves\n"
# 165 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "when those ROCKETS came.\p"
# 166 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "They should be flocking back to\n"
# 167 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "SAFFRON now.$"
# 168 "data/maps/SaffronCity_Frlg/scripts.pory"

# 169 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_FlewHereOnPidgeot::
# 170 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "I flew here on my PIDGEOT when\n"
# 171 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "I read about SILPH.\p"
# 172 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "It's already over?\n"
# 173 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "I missed the media action…$"
# 174 "data/maps/SaffronCity_Frlg/scripts.pory"

# 175 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_Pidgeot::
# 176 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "PIDGEOT: Bi bibii!$"
# 177 "data/maps/SaffronCity_Frlg/scripts.pory"

# 178 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_SawRocketBossEscaping::
# 179 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "I saw the ROCKET BOSS escaping\n"
# 180 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "SILPH's building.$"
# 181 "data/maps/SaffronCity_Frlg/scripts.pory"

# 182 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_ImASecurityGuard::
# 183 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "I'm a security guard.\p"
# 184 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Suspicious kids I don't allow in!$"
# 185 "data/maps/SaffronCity_Frlg/scripts.pory"

# 186 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_HesTakingASnooze::
# 187 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "…\n"
# 188 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Snore…\p"
# 189 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Hah! He's taking a snooze!$"
# 190 "data/maps/SaffronCity_Frlg/scripts.pory"

# 191 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_CitySign::
# 192 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "SAFFRON CITY\n"
# 193 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Shining, Golden Land of Commerce$"
# 194 "data/maps/SaffronCity_Frlg/scripts.pory"

# 195 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_FightingDojo::
# 196 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "FIGHTING DOJO$"
# 197 "data/maps/SaffronCity_Frlg/scripts.pory"

# 198 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_GymSign::
# 199 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "SAFFRON CITY POKéMON GYM\n"
# 200 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "LEADER: SABRINA\l"
# 201 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "The Master of PSYCHIC POKéMON!$"
# 202 "data/maps/SaffronCity_Frlg/scripts.pory"

# 203 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_FullHealCuresStatus::
# 204 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 205 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "FULL HEAL cures all ailments like\n"
# 206 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "burns, paralysis, poisoning,\l"
# 207 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "freezing, and sleep.\p"
# 208 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "It costs a bit more, but it's more\n"
# 209 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "convenient than buying other items.$"
# 210 "data/maps/SaffronCity_Frlg/scripts.pory"

# 211 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_GreatBallImprovedCatchRate::
# 212 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 213 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "The new GREAT BALL offers improved\n"
# 214 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "catching rates.\p"
# 215 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Try it on those hard-to-catch\n"
# 216 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "POKéMON.$"
# 217 "data/maps/SaffronCity_Frlg/scripts.pory"

# 218 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_SilphCoSign::
# 219 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "SILPH CO. OFFICE BUILDING$"
# 220 "data/maps/SaffronCity_Frlg/scripts.pory"

# 221 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_MrPsychicsHouse::
# 222 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "MR. PSYCHIC'S HOUSE$"
# 223 "data/maps/SaffronCity_Frlg/scripts.pory"

# 224 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_SilphsLatestProduct::
# 225 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "SILPH's latest product!\n"
# 226 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Release to be determined…$"
# 227 "data/maps/SaffronCity_Frlg/scripts.pory"

# 228 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_TrainerFanClubSign::
# 229 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "POKéMON TRAINER FAN CLUB\p"
# 230 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "Many TRAINERS have scribbled their\n"
# 231 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "names on this sign.$"
# 232 "data/maps/SaffronCity_Frlg/scripts.pory"

# 233 "data/maps/SaffronCity_Frlg/scripts.pory"
SaffronCity_Text_HowCanClubNotRecognizeLance::
# 234 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "This FAN CLUB…\n"
# 235 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "No one here has a clue!\p"
# 236 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "How could they not recognize\n"
# 237 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "the brilliance that is LANCE?\p"
# 238 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "He stands for justice!\n"
# 239 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "He's cool, and yet passionate!\l"
# 240 "data/maps/SaffronCity_Frlg/scripts.pory"
	.string "He's the greatest, LANCE!$"
