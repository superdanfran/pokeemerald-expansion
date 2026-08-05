# 1 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 2 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Frlg_MapScripts::
# 3 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 5 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_Giovanni::
# 6 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 7 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_GIOVANNI, ViridianCity_Gym_Text_GiovanniIntro, ViridianCity_Gym_Text_GiovanniDefeat, ViridianCity_Gym_EventScript_DefeatedGiovanni, NO_MUSIC
# 8 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM26_FROM_GIOVANNI, ViridianCity_Gym_EventScript_GiveTM26
# 9 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_GiovanniPostBattle
# 10 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	closemessage
# 11 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 12 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	removeobject LOCALID_VIRIDIAN_GIOVANNI
# 13 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 14 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	release
# 15 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 16 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 17 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_DefeatedGiovanni::
# 18 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 3
# 19 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	setflag FLAG_HIDE_MISC_KANTO_ROCKETS
# 20 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_LEADER_GIOVANNI
# 21 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE08_GET
# 22 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 3
# 23 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 8
# 24 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto ViridianCity_Gym_EventScript_GiveTM26
# 25 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 26 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 27 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_GiveTM26::
# 28 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_ExplainEarthBadgeTakeThis
# 29 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	checkitemspace ITEM_TM26
# 30 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ViridianCity_Gym_EventScript_NoRoomForTM26
# 31 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	giveitem_msg ViridianCity_Gym_Text_ReceivedTM26FromGiovanni, ITEM_TM26
# 32 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM26_FROM_GIOVANNI
# 33 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_ExplainTM26
# 34 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	release
# 35 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 36 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 37 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_NoRoomForTM26::
# 38 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_YouDoNotHaveSpace
# 39 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	release
# 40 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 41 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 42 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_Jason::
# 43 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TAMER_JASON, ViridianCity_Gym_Text_JasonIntro, ViridianCity_Gym_Text_JasonDefeat
# 44 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_JasonPostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 46 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 47 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_Cole::
# 48 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TAMER_COLE, ViridianCity_Gym_Text_ColeIntro, ViridianCity_Gym_Text_ColeDefeat
# 49 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 50 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 51 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 52 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_Atsushi::
# 53 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_ATSUSHI, ViridianCity_Gym_Text_AtsushiIntro, ViridianCity_Gym_Text_AtsushiDefeat
# 54 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_AtsushiPostBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 56 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 57 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_Kiyo::
# 58 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_KIYO, ViridianCity_Gym_Text_KiyoIntro, ViridianCity_Gym_Text_KiyoDefeat
# 59 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_KiyoPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 61 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 62 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_Takashi::
# 63 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_TAKASHI, ViridianCity_Gym_Text_TakashiIntro, ViridianCity_Gym_Text_TakashiDefeat
# 64 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 66 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 67 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_Samuel::
# 68 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_SAMUEL, ViridianCity_Gym_Text_SamuelIntro, ViridianCity_Gym_Text_SamuelDefeat
# 69 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 71 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 72 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_Yuji::
# 73 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_YUJI, ViridianCity_Gym_Text_YujiIntro, ViridianCity_Gym_Text_YujiDefeat
# 74 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_YujiPostBattle, MSGBOX_AUTOCLOSE
# 75 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 76 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 77 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_Warren::
# 78 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_WARREN, ViridianCity_Gym_Text_WarrenIntro, ViridianCity_Gym_Text_WarrenDefeat
# 79 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
# 80 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 81 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 82 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_GymGuy::
# 83 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	lock
# 84 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	faceplayer
# 85 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_LEADER_GIOVANNI, ViridianCity_Gym_EventScript_GymGuyPostVictory
# 86 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymGuyAdvice
# 87 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	release
# 88 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 89 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 90 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_GymGuyPostVictory::
# 91 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 4
# 92 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymGuyPostVictory
# 93 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	release
# 94 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 95 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 96 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_GymStatue::
# 97 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	lockall
# 98 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, ViridianCity_Gym_EventScript_GymStatuePostVictory
# 99 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymStatue
# 100 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	releaseall
# 101 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 102 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 103 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_GymStatuePostVictory::
# 104 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymStatuePlayerWon
# 105 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	releaseall
# 106 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 107 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 108 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_GiovanniIntro::
# 109 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Fwahahaha!\n"
# 110 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Welcome to my hideout!\p"
# 111 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "It shall be so until I can restore\n"
# 112 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "TEAM ROCKET to its former glory.\p"
# 113 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "But, you have found me again.\n"
# 114 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "So be it.\l"
# 115 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "This time, I'm not holding back!\p"
# 116 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Once more, you shall face\n"
# 117 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "GIOVANNI, the greatest TRAINER!{PLAY_BGM}{MUS_RG_ENCOUNTER_ROCKET}$"
# 118 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 119 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_GiovanniDefeat::
# 120 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Ha!\n"
# 121 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "That was a truly intense fight.\l"
# 122 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "You have won!\p"
# 123 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "As proof, here is the EARTHBADGE!\n"
# 124 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}$"
# 125 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 126 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_GiovanniPostBattle::
# 127 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Having lost in this fashion, \n"
# 128 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I can't face my followers.\l"
# 129 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I have betrayed their trust.\p"
# 130 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "As of today, TEAM ROCKET is\n"
# 131 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "finished forever!\p"
# 132 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "As for myself, I shall dedicate\n"
# 133 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "my life to training again.\p"
# 134 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Let us meet again someday!\n"
# 135 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Farewell!$"
# 136 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 137 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_ExplainEarthBadgeTakeThis::
# 138 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "The EARTHBADGE makes POKéMON of\n"
# 139 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "any level obey without question.\p"
# 140 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "It is evidence of your mastery as\n"
# 141 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "a POKéMON TRAINER.\p"
# 142 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "With it, you can challenge the\n"
# 143 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "POKéMON LEAGUE.\p"
# 144 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Also, take this TM.\p"
# 145 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Consider it a gift for your POKéMON\n"
# 146 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "LEAGUE challenge.$"
# 147 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 148 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_ReceivedTM26FromGiovanni::
# 149 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM26\n"
# 150 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "from GIOVANNI.$"
# 151 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 152 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_ExplainTM26::
# 153 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "TM26 contains EARTHQUAKE.\p"
# 154 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "It is a powerful attack that causes\n"
# 155 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "a massive tremor.\p"
# 156 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I made it when I ran the GYM here,\n"
# 157 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "far too long ago… $"
# 158 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 159 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_YouDoNotHaveSpace::
# 160 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "You do not have space for this!$"
# 161 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 162 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_YujiIntro::
# 163 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Heh!\n"
# 164 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "You must be running out of steam\l"
# 165 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "by now!$"
# 166 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 167 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_YujiDefeat::
# 168 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I ran out of gas!$"
# 169 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 170 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_YujiPostBattle::
# 171 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "You'll need power to keep up with\n"
# 172 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "our GYM LEADER.$"
# 173 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 174 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_AtsushiIntro::
# 175 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Rrrroar!\n"
# 176 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I'm working myself into a rage!$"
# 177 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 178 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_AtsushiDefeat::
# 179 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Wargh!$"
# 180 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 181 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_AtsushiPostBattle::
# 182 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I'm still not worthy!$"
# 183 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 184 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_JasonIntro::
# 185 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "POKéMON and I, we make wonderful\n"
# 186 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "music together!$"
# 187 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 188 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_JasonDefeat::
# 189 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "You are in perfect harmony!$"
# 190 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 191 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_JasonPostBattle::
# 192 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Do you know the identity of our\n"
# 193 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "GYM LEADER?$"
# 194 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 195 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_KiyoIntro::
# 196 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Karate is the ultimate form of\n"
# 197 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "martial arts!$"
# 198 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 199 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_KiyoDefeat::
# 200 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Aiyah!$"
# 201 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 202 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_KiyoPostBattle::
# 203 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "If my POKéMON were as good at\n"
# 204 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "karate as I…$"
# 205 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 206 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_WarrenIntro::
# 207 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "The truly talented win with style.$"
# 208 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 209 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_WarrenDefeat::
# 210 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I lost my grip!$"
# 211 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 212 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_WarrenPostBattle::
# 213 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "The LEADER will scold me for\n"
# 214 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "losing this way…$"
# 215 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 216 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_TakashiIntro::
# 217 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I'm the KARATE KING!\n"
# 218 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Your fate rests with me!$"
# 219 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 220 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_TakashiDefeat::
# 221 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Ayah!$"
# 222 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 223 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_TakashiPostBattle::
# 224 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "The POKéMON LEAGUE?\n"
# 225 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "You? Don't get cocky!$"
# 226 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 227 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_ColeIntro::
# 228 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Your POKéMON will cower at the\n"
# 229 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "crack of my whip!$"
# 230 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 231 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_ColeDefeat::
# 232 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Yowch!\n"
# 233 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Whiplash!$"
# 234 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 235 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_ColePostBattle::
# 236 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Wait!\n"
# 237 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I was just careless!$"
# 238 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 239 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_SamuelIntro::
# 240 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "VIRIDIAN GYM was closed for a\n"
# 241 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "long time.\p"
# 242 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "But now, our LEADER is back!$"
# 243 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 244 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_SamuelDefeat::
# 245 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I was beaten?$"
# 246 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 247 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_SamuelPostBattle::
# 248 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "You can go on to the POKéMON\n"
# 249 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "LEAGUE only by defeating our GYM\l"
# 250 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "LEADER!$"
# 251 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 252 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_GymGuyAdvice::
# 253 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
# 254 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Champ in the making!\p"
# 255 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Even I don't know the VIRIDIAN\n"
# 256 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "LEADER's identity.\p"
# 257 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "But one thing's certain.\n"
# 258 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "This will be the toughest of all\l"
# 259 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "the GYM LEADERS.\p"
# 260 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Also, I heard that the TRAINERS\n"
# 261 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "here like GROUND-type POKéMON.$"
# 262 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 263 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_GymGuyPostVictory::
# 264 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Blow me away! GIOVANNI was the\n"
# 265 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "GYM LEADER of VIRIDIAN?$"
# 266 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 267 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_GymStatue::
# 268 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "VIRIDIAN POKéMON GYM\n"
# 269 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "LEADER: ?\p"
# 270 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 271 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}$"
# 272 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 273 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_GymStatuePlayerWon::
# 274 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "VIRIDIAN POKéMON GYM\n"
# 275 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "LEADER: GIOVANNI\p"
# 276 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 277 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"
