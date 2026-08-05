# 1 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 2 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
.set LOCALID_WALLY, 1
# 3 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 4 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_MapScripts::
# 5 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.byte 0
# 6 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 7 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_Wally::
# 8 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 9 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 10 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_WALLY_PRE_GYM, VerdanturfTown_WandasHouse_EventScript_WallyPreWattson
# 11 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_WALLY_SPEECH, VerdanturfTown_WandasHouse_EventScript_WallyShortSpeech
# 12 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeech, MSGBOX_DEFAULT
# 13 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	setflag FLAG_WALLY_SPEECH
# 14 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 15 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 16 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 17 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallyPreWattson::
# 18 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_IWantToChallengeWattson, MSGBOX_DEFAULT
# 19 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	closemessage
# 20 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	// applymovement LOCALID_WALLY, VerdanturfTown_Movement_WallyExit
# 21 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	// playse SE_EXIT
# 22 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	// removeobject LOCALID_WALLY
# 23 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 24 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_CITY_WALLY
# 25 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	clearflag FLAG_WALLY_PRE_GYM
# 26 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 27 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 28 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 29 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_Movement_WallyExit:
# 30 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	walk_left
# 31 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	walk_down
# 32 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	walk_left
# 33 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	walk_left
# 34 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	walk_left
# 35 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	walk_left
# 36 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	walk_left
# 37 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	walk_left
# 38 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	delay_16
# 39 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	walk_down
# 40 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	walk_in_place_down
# 41 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	step_end
# 42 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 43 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallyShortSpeech::
# 44 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeechShort, MSGBOX_DEFAULT
# 45 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 46 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 47 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 48 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncle::
# 49 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 50 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 51 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande
# 52 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff
# 53 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallysNextDoor, MSGBOX_DEFAULT
# 54 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 55 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 56 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 57 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff::
# 58 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallySlippedOff, MSGBOX_DEFAULT
# 59 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 60 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 61 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 62 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande::
# 63 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyGoneThatFar, MSGBOX_DEFAULT
# 64 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 65 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 66 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 67 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend::
# 68 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay, MSGBOX_NPC
# 69 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 70 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 71 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_Wanda::
# 72 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 73 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 74 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WandaDontWorry
# 75 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_MAUVILLE, VerdanturfTown_WandasHouse_EventScript_MeetWanda
# 76 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
# 77 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 78 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 79 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 80 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_MeetWanda::
# 81 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_MeetWanda, MSGBOX_DEFAULT
# 82 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 83 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 84 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 85 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WandaDontWorry::
# 86 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
# 87 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 88 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 89 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 90 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAunt::
# 91 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	lock
# 92 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	faceplayer
# 93 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande
# 94 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened
# 95 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen
# 96 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven, MSGBOX_DEFAULT
# 97 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 98 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 99 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 100 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen::
# 101 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging, MSGBOX_DEFAULT
# 102 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 103 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 104 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 105 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened::
# 106 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally, MSGBOX_DEFAULT
# 107 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 108 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 109 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 110 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande::
# 111 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	msgbox VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande, MSGBOX_DEFAULT
# 112 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	release
# 113 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	end
# 114 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 115 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_IWantToChallengeWattson:
# 116 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY: Hi, {PLAYER}, I'm glad\n"
# 117 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "to see you.\p"
# 118 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I have a favour to ask of you.\n"
# 119 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I want to challenge WATTSON's\l"
# 120 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "GYM, but I'm not sure if I'm\l"
# 121 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "ready.\p"
# 122 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "{PLAYER}, could you meet me in\n"
# 123 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "MAUVILLE so I can test my skill?.\p"
# 124 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I'll see you there!$"
# 125 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 126 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_StrongerSpeech:
# 127 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY: I lost to you, {PLAYER}, but I'm\n"
# 128 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "not feeling down anymore.\p"
# 129 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Because I have a new purpose in life.\n"
# 130 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Together with my RALTS, I'm going\l"
# 131 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "to challenge POKéMON GYMS and become\l"
# 132 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "a great TRAINER.\p"
# 133 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Please watch me, {PLAYER}.\n"
# 134 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I'm going to be stronger than you.\p"
# 135 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "When I do, I'm going to challenge you\n"
# 136 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "to another battle.$"
# 137 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 138 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_StrongerSpeechShort:
# 139 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY: Please watch me, {PLAYER}.\n"
# 140 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I'm going to get stronger than you.\p"
# 141 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "When I do, I'm going to challenge you\n"
# 142 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "to another battle.$"
# 143 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 144 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallysNextDoor:
# 145 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "UNCLE: Oh! {PLAYER}{KUN}!\n"
# 146 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY's next door.\p"
# 147 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "But, boy, there's something I have to\n"
# 148 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "tell you.\p"
# 149 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "This natural environment is doing\n"
# 150 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "wonders for WALLY's health.\p"
# 151 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Maybe it's not just the environment.\n"
# 152 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "It could be POKéMON that are giving\l"
# 153 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "the boy hope.$"
# 154 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 155 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallySlippedOff:
# 156 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY's gone away…\n"
# 157 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "He slipped off on his own…$"
# 158 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 159 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallyGoneThatFar:
# 160 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "UNCLE: Is that right?\n"
# 161 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY's gone away that far all by\l"
# 162 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "himself…\p"
# 163 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Well, I have to give him credit--he is\n"
# 164 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "my little brother's son.$"
# 165 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 166 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_MeetWanda:
# 167 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WANDA: You are?\n"
# 168 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Oh, right, I get it!\p"
# 169 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "You're the {PLAYER} who WALLY was\n"
# 170 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "telling me about.\p"
# 171 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I'm WALLY's cousin.\n"
# 172 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Glad to meet you!\p"
# 173 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I think WALLY's become a lot more lively\n"
# 174 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "and healthy since he came here.$"
# 175 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 176 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DontWorryAboutWally:
# 177 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WANDA: Don't worry about WALLY.\n"
# 178 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "He'll be just fine.\p"
# 179 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I know my little cousin, and he has\n"
# 180 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "POKéMON with him, too.$"
# 181 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 182 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay:
# 183 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Thanks to you, I can see my girlfriend\n"
# 184 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "every day.\l"
# 185 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "Happy? You bet I am!$"
# 186 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 187 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven:
# 188 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "My daughter's boyfriend is a very\n"
# 189 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "driven and passionate sort of person.\p"
# 190 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "He's been digging a tunnel nonstop\n"
# 191 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "just so he can see my daughter.\p"
# 192 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "My daughter's a little concerned,\n"
# 193 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "so she goes out to the tunnel a lot.$"
# 194 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 195 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging:
# 196 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "It's amazing. My daughter's boyfriend\n"
# 197 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "was digging the tunnel by hand!\p"
# 198 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "It's so incredible!$"
# 199 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 200 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally:
# 201 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "If anything were to happen to WALLY,\n"
# 202 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "I would never be able to look his\l"
# 203 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "parents in PETALBURG in the eye…$"
# 204 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"

# 205 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande:
# 206 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "WALLY was in EVER GRANDE?\p"
# 207 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "His parents in PETALBURG would be\n"
# 208 "data/maps/VerdanturfTown_WandasHouse/scripts.pory"
	.string "astonished to hear that!$"
