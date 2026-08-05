# 1 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 2 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Frlg_MapScripts::
# 3 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 5 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_Sabrina::
# 6 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_SABRINA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 7 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_SABRINA, SaffronCity_Gym_Text_SabrinaIntro, SaffronCity_Gym_Text_SabrinaDefeat, SaffronCity_Gym_EventScript_DefeatedSabrina, NO_MUSIC
# 8 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM04_FROM_SABRINA, SaffronCity_Gym_EventScript_GiveTM04
# 9 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_ExplainTM04
# 10 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	release
# 11 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 12 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 13 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_DefeatedSabrina::
# 14 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 2
# 15 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 3
# 16 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SAFFRON_CITY_POKECENTER_SABRINA_JOURNALS
# 17 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_SABRINA
# 18 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE06_GET
# 19 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 6
# 20 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto SaffronCity_Gym_EventScript_GiveTM04
# 21 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 22 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 23 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_GiveTM04::
# 24 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_ExplainMarshBadgeTakeThis
# 25 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	checkitemspace ITEM_TM04
# 26 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_Gym_EventScript_NoRoomForTM04
# 27 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	giveitem_msg SaffronCity_Gym_Text_ReceivedTM04FromSabrina, ITEM_TM04
# 28 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM04_FROM_SABRINA
# 29 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_SabrinaPostBattle
# 30 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	release
# 31 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 32 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 33 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_NoRoomForTM04::
# 34 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_BagFullOfOtherItems
# 35 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	release
# 36 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 37 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 38 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_Johan::
# 39 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_JOHAN, SaffronCity_Gym_Text_JohanIntro, SaffronCity_Gym_Text_JohanDefeat
# 40 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_JohanPostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 42 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 43 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_Tyron::
# 44 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_TYRON, SaffronCity_Gym_Text_TyronIntro, SaffronCity_Gym_Text_TyronDefeat
# 45 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 5
# 46 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 48 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 49 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_Cameron::
# 50 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_CAMERON, SaffronCity_Gym_Text_CameronIntro, SaffronCity_Gym_Text_CameronDefeat
# 51 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_CameronPostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 53 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 54 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_Preston::
# 55 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_PRESTON, SaffronCity_Gym_Text_PrestonIntro, SaffronCity_Gym_Text_PrestonDefeat
# 56 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 58 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 59 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_Amanda::
# 60 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_AMANDA, SaffronCity_Gym_Text_AmandaIntro, SaffronCity_Gym_Text_AmandaDefeat
# 61 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_AmandaPostBattle, MSGBOX_AUTOCLOSE
# 62 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 63 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 64 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_Stacy::
# 65 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_STACY, SaffronCity_Gym_Text_StacyIntro, SaffronCity_Gym_Text_StacyDefeat
# 66 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_StacyPostBattle, MSGBOX_AUTOCLOSE
# 67 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 68 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 69 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_Tasha::
# 70 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_TASHA, SaffronCity_Gym_Text_TashaIntro, SaffronCity_Gym_Text_TashaDefeat
# 71 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_TashaPostBattle, MSGBOX_AUTOCLOSE
# 72 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 73 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 74 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_GymGuy::
# 75 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	lock
# 76 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	faceplayer
# 77 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_SABRINA, SaffronCity_Gym_EventScript_GymGuyPostVictory
# 78 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymGuyAdvice
# 79 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	release
# 80 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 81 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 82 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_GymGuyPostVictory::
# 83 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymGuyPostVictory
# 84 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	release
# 85 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 86 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 87 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_GymStatue::
# 88 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	lockall
# 89 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, SaffronCity_Gym_EventScript_GymStatuePostVictory
# 90 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymStatue
# 91 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	releaseall
# 92 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 93 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 94 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_GymStatuePostVictory::
# 95 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymStatuePlayerWon
# 96 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	releaseall
# 97 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 98 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 99 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_SabrinaIntro::
# 100 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I had a vision of your arrival.\p"
# 101 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I have had psychic powers since\n"
# 102 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I was a child.\p"
# 103 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "It started when a spoon I\n"
# 104 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "carelessly tossed, bent.\p"
# 105 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I dislike battling, but if you wish,\n"
# 106 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I will show you my powers!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 107 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 108 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_SabrinaDefeat::
# 109 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "This loss shocks me!\n"
# 110 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "But, a loss is a loss.\p"
# 111 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I admit, I didn't work hard enough\n"
# 112 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "to win.\p"
# 113 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Your victory has earned you the\n"
# 114 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "MARSHBADGE.$"
# 115 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 116 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_SabrinaPostBattle::
# 117 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Psychic power isn't something that\n"
# 118 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "only a few people have.\p"
# 119 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Everyone has psychic power.\n"
# 120 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "People just don't realize it.$"
# 121 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 122 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_ExplainMarshBadgeTakeThis::
# 123 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "The MARSHBADGE makes POKéMON up\n"
# 124 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "to Lv. 70 obey you.\p"
# 125 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Stronger POKéMON will become wild,\n"
# 126 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "ignoring your orders in battle.\p"
# 127 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Just don't raise your POKéMON too\n"
# 128 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "much to avoid that problem.\p"
# 129 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Wait, please take this TM with you.$"
# 130 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 131 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_ReceivedTM04FromSabrina::
# 132 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM04 from\n"
# 133 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "SABRINA.$"
# 134 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 135 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_ExplainTM04::
# 136 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "TM04 is CALM MIND.\p"
# 137 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "It makes the POKéMON concentrate\n"
# 138 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "to raise both SP. ATK and SP. DEF.$"
# 139 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 140 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_BagFullOfOtherItems::
# 141 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Your BAG is full of other items.$"
# 142 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 143 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_AmandaIntro::
# 144 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "SABRINA is far younger than I,\n"
# 145 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "but she has earned my respect.$"
# 146 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 147 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_AmandaDefeat::
# 148 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Not good enough!$"
# 149 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 150 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_AmandaPostBattle::
# 151 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "In a battle of equals, the one\n"
# 152 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "with the stronger will wins.\p"
# 153 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "If you wish to beat SABRINA, focus\n"
# 154 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "and will yourself to victory.$"
# 155 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 156 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_JohanIntro::
# 157 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Does our unseen power scare you?$"
# 158 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 159 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_JohanDefeat::
# 160 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I never foresaw this!$"
# 161 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 162 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_JohanPostBattle::
# 163 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "PSYCHIC POKéMON fear only ghosts\n"
# 164 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "and bugs!$"
# 165 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 166 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_StacyIntro::
# 167 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "POKéMON take on the appearance of\n"
# 168 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "their TRAINERS.\p"
# 169 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Your POKéMON must be tough, then!$"
# 170 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 171 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_StacyDefeat::
# 172 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I knew it!$"
# 173 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 174 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_StacyPostBattle::
# 175 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I have much to learn still…\p"
# 176 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I must master PSYCHIC and teach it\n"
# 177 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "to my POKéMON…$"
# 178 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 179 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_TyronIntro::
# 180 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "You understand, don't you?\p"
# 181 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "That power alone isn't enough to\n"
# 182 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "win in the world of POKéMON?$"
# 183 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 184 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_TyronDefeat::
# 185 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I don't believe this!$"
# 186 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 187 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_TyronPostBattle::
# 188 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "SABRINA just wiped out the KARATE\n"
# 189 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "MASTER next door.$"
# 190 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 191 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_TashaIntro::
# 192 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "You and I, our POKéMON shall\n"
# 193 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "battle!$"
# 194 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 195 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_TashaDefeat::
# 196 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I lost after all!$"
# 197 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 198 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_TashaPostBattle::
# 199 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I knew that this was going to take\n"
# 200 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "place.$"
# 201 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 202 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_CameronIntro::
# 203 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "SABRINA is young, but she's also\n"
# 204 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "our highly skilled LEADER.\p"
# 205 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "You won't reach her easily!$"
# 206 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 207 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_CameronDefeat::
# 208 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Ow!\n"
# 209 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Down and out!$"
# 210 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 211 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_CameronPostBattle::
# 212 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "There used to be two POKéMON GYMS\n"
# 213 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "in SAFFRON.\p"
# 214 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "The FIGHTING DOJO next door lost\n"
# 215 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "its GYM status, though.\p"
# 216 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "We simply creamed them when we\n"
# 217 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "decided to have just one GYM.$"
# 218 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 219 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_PrestonIntro::
# 220 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "SAFFRON POKéMON GYM is famous for\n"
# 221 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "training psychics.\p"
# 222 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "You want to see SABRINA, don't\n"
# 223 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "you? I can tell!$"
# 224 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 225 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_PrestonDefeat::
# 226 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Arrrgh!$"
# 227 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 228 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_PrestonPostBattle::
# 229 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "That's right! I used telepathy to\n"
# 230 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "read your mind!$"
# 231 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 232 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_GymGuyAdvice::
# 233 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
# 234 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Champ in the making!\p"
# 235 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "SABRINA's POKéMON use psychic\n"
# 236 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "power instead of force.\p"
# 237 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "FIGHTING POKéMON are especially\n"
# 238 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "weak against PSYCHIC POKéMON.\p"
# 239 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "They'll get destroyed before they\n"
# 240 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "can even aim a punch!$"
# 241 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 242 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_GymGuyPostVictory::
# 243 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Psychic power, huh?\p"
# 244 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "If I had that, I'd make a bundle\n"
# 245 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "at the slots!$"
# 246 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 247 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_GymStatue::
# 248 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "SAFFRON POKéMON GYM\n"
# 249 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "LEADER: SABRINA\p"
# 250 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 251 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}$"
# 252 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 253 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_GymStatuePlayerWon::
# 254 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "SAFFRON POKéMON GYM\n"
# 255 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "LEADER: SABRINA\p"
# 256 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 257 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"
