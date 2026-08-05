# 1 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 2 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Frlg_MapScripts::
# 3 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtMoon_B2F_OnTransition
# 4 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 6 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_OnTransition::
# 7 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	call_if_unset FLAG_GOT_FOSSIL_FROM_MT_MOON, MtMoon_B2F_EventScript_ShowFossils
# 8 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 9 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 10 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_ShowFossils::
# 11 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_DOME_FOSSIL
# 12 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_HELIX_FOSSIL
# 13 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	return
# 14 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 15 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_MiguelTrigger::
# 16 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	lockall
# 17 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	applymovement LOCALID_MIGUEL, Common_Movement_WalkInPlaceFasterRight
# 18 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitmovement 0
# 19 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	call MtMoon_B2F_EventScript_BattleMiguel
# 20 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	releaseall
# 21 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 22 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 23 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_Miguel::
# 24 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	lock
# 25 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	faceplayer
# 26 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_FOSSIL_FROM_MT_MOON, MtMoon_B2F_EventScript_MiguelFossilPicked
# 27 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	goto_if_defeated TRAINER_SUPER_NERD_MIGUEL, MtMoon_B2F_EventScript_MiguelGoPickFossil
# 28 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	call MtMoon_B2F_EventScript_BattleMiguel
# 29 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	release
# 30 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 31 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 32 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_BattleMiguel::
# 33 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 34 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	message MtMoon_B2F_Text_MiguelIntro
# 35 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitmessage
# 36 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, 0
# 37 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitbuttonpress
# 38 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_MIGUEL
# 39 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_MIGUEL, MtMoon_B2F_Text_MiguelDefeat
# 40 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_MT_MOON_B2F, 1
# 41 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_WellEachTakeAFossil
# 42 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	return
# 43 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 44 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_MiguelFossilPicked::
# 45 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_LabOnCinnabarRegeneratesFossils
# 46 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	release
# 47 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 48 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 49 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_MiguelGoPickFossil::
# 50 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_WellEachTakeAFossil
# 51 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	release
# 52 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 53 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 54 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_DomeFossil::
# 55 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	lock
# 56 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	faceplayer
# 57 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_YouWantDomeFossil, MSGBOX_YESNO
# 58 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtMoon_B2F_EventScript_DontTakeFossil
# 59 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	removeobject LOCALID_DOME_FOSSIL
# 60 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	giveitem_msg MtMoon_B2F_Text_ObtainedDomeFossil, ITEM_DOME_FOSSIL, 1, MUS_RG_OBTAIN_KEY_ITEM
# 61 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	closemessage
# 62 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	delay 10
# 63 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	applymovement LOCALID_MIGUEL, MtMoon_B2F_Movement_MiguelToHelixFossil
# 64 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitmovement 0
# 65 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_MIGUEL
# 66 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 67 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 68 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	message MtMoon_B2F_Text_ThenThisFossilIsMine
# 69 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitmessage
# 70 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitfanfare
# 71 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	removeobject LOCALID_HELIX_FOSSIL
# 72 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	setflag FLAG_GOT_DOME_FOSSIL
# 73 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	setflag FLAG_GOT_FOSSIL_FROM_MT_MOON
# 74 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	release
# 75 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 76 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 77 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Movement_MiguelToHelixFossil::
# 78 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	walk_right
# 79 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	walk_up
# 80 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	walk_up
# 81 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	walk_up
# 82 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	step_end
# 83 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 84 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_HelixFossil::
# 85 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	lock
# 86 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	faceplayer
# 87 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_YouWantHelixFossil, MSGBOX_YESNO
# 88 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtMoon_B2F_EventScript_DontTakeFossil
# 89 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	removeobject LOCALID_HELIX_FOSSIL
# 90 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	giveitem_msg MtMoon_B2F_Text_ObtainedHelixFossil, ITEM_HELIX_FOSSIL, 1, MUS_RG_OBTAIN_KEY_ITEM
# 91 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	closemessage
# 92 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	delay 10
# 93 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	applymovement LOCALID_MIGUEL, MtMoon_B2F_Movement_MiguelToDomeFossil
# 94 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitmovement 0
# 95 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_MIGUEL
# 96 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 97 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 98 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	message MtMoon_B2F_Text_ThenThisFossilIsMine
# 99 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitmessage
# 100 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitfanfare
# 101 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	removeobject LOCALID_DOME_FOSSIL
# 102 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	setflag FLAG_GOT_HELIX_FOSSIL
# 103 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	setflag FLAG_GOT_FOSSIL_FROM_MT_MOON
# 104 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	release
# 105 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 106 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 107 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_DontTakeFossil::
# 108 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	release
# 109 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 110 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 111 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Movement_MiguelToDomeFossil::
# 112 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	walk_up
# 113 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	walk_up
# 114 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	walk_up
# 115 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	step_end
# 116 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 117 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_Grunt1::
# 118 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT, MtMoon_B2F_Text_Grunt1Intro, MtMoon_B2F_Text_Grunt1Defeat
# 119 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 120 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 121 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 122 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_Grunt2::
# 123 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_2, MtMoon_B2F_Text_Grunt2Intro, MtMoon_B2F_Text_Grunt2Defeat
# 124 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 126 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 127 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_Grunt3::
# 128 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_3, MtMoon_B2F_Text_Grunt3Intro, MtMoon_B2F_Text_Grunt3Defeat
# 129 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 130 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 131 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 132 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_Grunt4::
# 133 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_4, MtMoon_B2F_Text_Grunt4Intro, MtMoon_B2F_Text_Grunt4Defeat
# 134 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 135 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 136 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 137 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_MiguelIntro::
# 138 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Hey, stop!\p"
# 139 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "I found these fossils!\n"
# 140 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "They're both mine!$"
# 141 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 142 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_MiguelDefeat::
# 143 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Okay!\n"
# 144 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "I'll share!$"
# 145 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 146 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_WellEachTakeAFossil::
# 147 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "We'll each take a fossil!\n"
# 148 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "No being greedy!$"
# 149 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 150 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_ThenThisFossilIsMine::
# 151 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "All right.\n"
# 152 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Then this fossil is mine!$"
# 153 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 154 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_LabOnCinnabarRegeneratesFossils::
# 155 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Far away, on CINNABAR ISLAND,\n"
# 156 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "there's a POKéMON LAB.\p"
# 157 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "They do research on regenerating\n"
# 158 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "fossils.$"
# 159 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 160 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt1Intro::
# 161 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "We, TEAM ROCKET, shall find the\n"
# 162 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "fossils!\p"
# 163 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Reviving POKéMON from them will\n"
# 164 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "earn us huge riches!$"
# 165 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 166 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt1Defeat::
# 167 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Urgh!\n"
# 168 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Now I'm mad!$"
# 169 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 170 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt1PostBattle::
# 171 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "You made me mad!\n"
# 172 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "TEAM ROCKET will blacklist you!$"
# 173 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 174 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt2Intro::
# 175 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "We, TEAM ROCKET, are POKéMON\n"
# 176 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "gangsters!\l"
# 177 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "We strike fear with our strength!$"
# 178 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 179 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt2Defeat::
# 180 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "I blew it!$"
# 181 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 182 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt2PostBattle::
# 183 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Darn it all!\n"
# 184 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "My associates won't stand for this!$"
# 185 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 186 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt3Intro::
# 187 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "We're pulling a big job here!\n"
# 188 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Get lost, kid!$"
# 189 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 190 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt3Defeat::
# 191 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "So, you are good…$"
# 192 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 193 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt3PostBattle::
# 194 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "If you find a fossil, give it to me\n"
# 195 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "and scram!$"
# 196 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 197 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt4Intro::
# 198 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Little kids shouldn't be messing\n"
# 199 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "around with grown-ups!\p"
# 200 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "It could be bad news!$"
# 201 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 202 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt4Defeat::
# 203 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "I'm steamed!$"
# 204 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 205 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt4PostBattle::
# 206 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "POKéMON lived here long before\n"
# 207 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "people came.$"
# 208 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 209 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_YouWantDomeFossil::
# 210 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Do you want the DOME FOSSIL?$"
# 211 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 212 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_YouWantHelixFossil::
# 213 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Do you want the HELIX FOSSIL?$"
# 214 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 215 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_ObtainedHelixFossil::
# 216 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Obtained the HELIX FOSSIL!$"
# 217 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 218 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_ObtainedDomeFossil::
# 219 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Obtained the DOME FOSSIL!$"
