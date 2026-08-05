# 1 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Frlg_MapScripts::
# 3 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_6F_OnLoad
# 4 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 6 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_OnLoad::
# 7 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	call_if_unset FLAG_SILPH_6F_DOOR, EventScript_Close6FDoor
# 8 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 9 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 10 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerM2::
# 11 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	lock
# 12 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	faceplayer
# 13 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerM2RocketsGone
# 14 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_TargetedSilphForOurMonProducts
# 15 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	release
# 16 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 17 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 18 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerM2RocketsGone::
# 19 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_ComeWorkForSilphWhenYoureOlder
# 20 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	release
# 21 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 22 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 23 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerM3::
# 24 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	lock
# 25 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	faceplayer
# 26 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerM3RocketsGone
# 27 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_RocketsTookOverBuilding
# 28 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	release
# 29 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 30 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 31 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerM3RocketsGone::
# 32 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_BetterGetBackToWork
# 33 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	release
# 34 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 35 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 36 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerM1::
# 37 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	lock
# 38 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	faceplayer
# 39 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerM1RocketsGone
# 40 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_HelpMePlease
# 41 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	release
# 42 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 43 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 44 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerM1RocketsGone::
# 45 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_WeGotEngaged
# 46 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	release
# 47 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 48 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 49 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerF1::
# 50 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	lock
# 51 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	faceplayer
# 52 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerF1RocketsGone
# 53 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_ThatManIsSuchACoward
# 54 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	release
# 55 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 56 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 57 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerF1RocketsGone::
# 58 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_NeedsMeToLookAfterHim
# 59 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	release
# 60 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 61 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 62 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerF2::
# 63 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	lock
# 64 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	faceplayer
# 65 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerF2RocketsGone
# 66 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_RocketsTryingToConquerWorld
# 67 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	release
# 68 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 69 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 70 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_WorkerF2RocketsGone::
# 71 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_RocketsRanAwayBecauseOfYou
# 72 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	release
# 73 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 74 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 75 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_FloorSign::
# 76 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_FloorSign, MSGBOX_SIGN
# 77 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 78 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 79 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_Taylor::
# 80 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_TAYLOR, SilphCo_6F_Text_TaylorIntro, SilphCo_6F_Text_TaylorDefeat
# 81 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
# 82 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 83 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 84 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_Grunt1::
# 85 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_30, SilphCo_6F_Text_Grunt1Intro, SilphCo_6F_Text_Grunt1Defeat
# 86 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 87 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 88 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 89 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_EventScript_Grunt2::
# 90 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_31, SilphCo_6F_Text_Grunt2Intro, SilphCo_6F_Text_Grunt2Defeat
# 91 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	msgbox SilphCo_6F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 92 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	end
# 93 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 94 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_RocketsTookOverBuilding::
# 95 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "The ROCKETS came and took over\n"
# 96 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "the building!$"
# 97 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 98 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_BetterGetBackToWork::
# 99 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "Well, better get back to work.$"
# 100 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 101 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_HelpMePlease::
# 102 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "Oh dear, oh dear.\n"
# 103 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "Help me, please!$"
# 104 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 105 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_WeGotEngaged::
# 106 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "We got engaged.\n"
# 107 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "Heheh!$"
# 108 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 109 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_ThatManIsSuchACoward::
# 110 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "That man next to me…\n"
# 111 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "He's such a coward!$"
# 112 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 113 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_NeedsMeToLookAfterHim::
# 114 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "He's so helpless, he needed\n"
# 115 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "someone like me to look after him.$"
# 116 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 117 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_RocketsTryingToConquerWorld::
# 118 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "TEAM ROCKET is trying to conquer\n"
# 119 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "the world with POKéMON.$"
# 120 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 121 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_RocketsRanAwayBecauseOfYou::
# 122 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "TEAM ROCKET ran away, and it's all\n"
# 123 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "because of you!$"
# 124 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 125 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_TargetedSilphForOurMonProducts::
# 126 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "They must have targeted SILPH for\n"
# 127 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "our POKéMON products.$"
# 128 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 129 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_ComeWorkForSilphWhenYoureOlder::
# 130 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "Come work for SILPH when you\n"
# 131 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "get older.$"
# 132 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 133 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_Grunt1Intro::
# 134 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "I am one of the four ROCKET\n"
# 135 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "BROTHERS!$"
# 136 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 137 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_Grunt1Defeat::
# 138 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "Flame out!$"
# 139 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 140 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_Grunt1PostBattle::
# 141 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "No matter!\n"
# 142 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "My brothers will avenge me!$"
# 143 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 144 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_TaylorIntro::
# 145 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "That rotten PRESIDENT!\p"
# 146 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "Serves him right for shipping me\n"
# 147 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "off to the TIKSI BRANCH!\p"
# 148 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "That's why TEAM ROCKET came after\n"
# 149 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "us, I'm sure of it!$"
# 150 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 151 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_TaylorDefeat::
# 152 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "Shoot!$"
# 153 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 154 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_TaylorPostBattle::
# 155 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "TIKSI BRANCH?\n"
# 156 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "It's in Russian no-man's-land!$"
# 157 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 158 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_Grunt2Intro::
# 159 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "You dare betray TEAM ROCKET?$"
# 160 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 161 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_Grunt2Defeat::
# 162 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "You traitor!$"
# 163 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 164 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_Grunt2PostBattle::
# 165 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "If you stand for justice, you\n"
# 166 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "betray us bad guys!$"
# 167 "data/maps/SilphCo_6F_Frlg/scripts.pory"

# 168 "data/maps/SilphCo_6F_Frlg/scripts.pory"
SilphCo_6F_Text_FloorSign::
# 169 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
# 170 "data/maps/SilphCo_6F_Frlg/scripts.pory"
	.string "6F$"
