# 1 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 2 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Frlg_MapScripts::
# 3 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RockTunnel_1F_OnTransition
# 4 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 6 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_OnTransition::
# 7 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROCK_TUNNEL_1F
# 8 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	end
# 9 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 10 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_EventScript_RouteSign::
# 11 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_RouteSign, MSGBOX_SIGN
# 12 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	end
# 13 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 14 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_EventScript_Lenny::
# 15 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_HIKER_LENNY, RockTunnel_1F_Text_LennyIntro, RockTunnel_1F_Text_LennyDefeat
# 16 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
# 17 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	end
# 18 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 19 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_EventScript_Oliver::
# 20 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_HIKER_OLIVER, RockTunnel_1F_Text_OliverIntro, RockTunnel_1F_Text_OliverDefeat
# 21 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_OliverPostBattle, MSGBOX_AUTOCLOSE
# 22 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	end
# 23 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 24 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_EventScript_Lucas::
# 25 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_HIKER_LUCAS, RockTunnel_1F_Text_LucasIntro, RockTunnel_1F_Text_LucasDefeat
# 26 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	end
# 28 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 29 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_EventScript_Ashton::
# 30 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_POKEMANIAC_ASHTON, RockTunnel_1F_Text_AshtonIntro, RockTunnel_1F_Text_AshtonDefeat
# 31 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_AshtonPostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	end
# 33 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 34 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_EventScript_Leah::
# 35 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_LEAH, RockTunnel_1F_Text_LeahIntro, RockTunnel_1F_Text_LeahDefeat
# 36 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	end
# 38 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 39 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_EventScript_Ariana::
# 40 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_ARIANA, RockTunnel_1F_Text_ArianaIntro, RockTunnel_1F_Text_ArianaDefeat
# 41 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_ArianaPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	end
# 43 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 44 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_EventScript_Dana::
# 45 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_DANA, RockTunnel_1F_Text_DanaIntro, RockTunnel_1F_Text_DanaDefeat
# 46 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	msgbox RockTunnel_1F_Text_DanaPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	end
# 48 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 49 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_LennyIntro::
# 50 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "This tunnel goes a long way, kid!$"
# 51 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 52 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_LennyDefeat::
# 53 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Doh!\n"
# 54 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "You win!$"
# 55 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 56 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_LennyPostBattle::
# 57 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Watch for ONIX.\n"
# 58 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "They appear only occasionally.\p"
# 59 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "High-level ones can put the\n"
# 60 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "squeeze on you!$"
# 61 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 62 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_OliverIntro::
# 63 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Hmm.\n"
# 64 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Maybe I'm lost in here…$"
# 65 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 66 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_OliverDefeat::
# 67 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Ease up!\n"
# 68 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "What am I doing?\l"
# 69 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Which way is out?$"
# 70 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 71 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_OliverPostBattle::
# 72 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "That sleeping POKéMON on ROUTE 12\n"
# 73 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "forced me to take this detour.$"
# 74 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 75 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_LucasIntro::
# 76 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Outsiders like you need to show me\n"
# 77 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "some respect!$"
# 78 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 79 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_LucasDefeat::
# 80 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "I give!$"
# 81 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 82 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_LucasPostBattle::
# 83 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "You're talented enough to hike!$"
# 84 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 85 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_AshtonIntro::
# 86 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "POKéMON fight!\n"
# 87 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Ready, go!$"
# 88 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 89 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_AshtonDefeat::
# 90 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Game over!$"
# 91 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 92 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_AshtonPostBattle::
# 93 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Oh well, I'll get a ZUBAT as I go!$"
# 94 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 95 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_LeahIntro::
# 96 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Eek!\p"
# 97 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Don't try anything funny in the\n"
# 98 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "dark!$"
# 99 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 100 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_LeahDefeat::
# 101 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "It was too dark…$"
# 102 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 103 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_LeahPostBattle::
# 104 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "I saw a MACHOP in this tunnel.$"
# 105 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 106 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_DanaIntro::
# 107 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "I came this far looking for wild\n"
# 108 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "POKéMON.$"
# 109 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 110 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_DanaDefeat::
# 111 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "I'm out of POKéMON!$"
# 112 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 113 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_DanaPostBattle::
# 114 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "You looked cute and harmless.\n"
# 115 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Was I ever wrong!$"
# 116 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 117 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_ArianaIntro::
# 118 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "You have POKéMON!\n"
# 119 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Let's start!$"
# 120 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 121 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_ArianaDefeat::
# 122 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "You play hard!$"
# 123 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 124 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_ArianaPostBattle::
# 125 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "Whew!\n"
# 126 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "I'm all sweaty now.$"
# 127 "data/maps/RockTunnel_1F_Frlg/scripts.pory"

# 128 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
RockTunnel_1F_Text_RouteSign::
# 129 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "ROCK TUNNEL\n"
# 130 "data/maps/RockTunnel_1F_Frlg/scripts.pory"
	.string "CERULEAN CITY - LAVENDER TOWN$"
