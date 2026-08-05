# 1 "data/maps/ViridianForest_Frlg/scripts.pory"

# 2 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Frlg_MapScripts::
# 3 "data/maps/ViridianForest_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianForest_OnTransition
# 4 "data/maps/ViridianForest_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/ViridianForest_Frlg/scripts.pory"

# 6 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_OnTransition::
# 7 "data/maps/ViridianForest_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_FOREST
# 8 "data/maps/ViridianForest_Frlg/scripts.pory"
	end
# 9 "data/maps/ViridianForest_Frlg/scripts.pory"

# 10 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_EventScript_Youngster::
# 11 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_FriendsItchingToBattle, MSGBOX_NPC
# 12 "data/maps/ViridianForest_Frlg/scripts.pory"
	end
# 13 "data/maps/ViridianForest_Frlg/scripts.pory"

# 14 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_EventScript_Boy::
# 15 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_RanOutOfPokeBalls, MSGBOX_NPC
# 16 "data/maps/ViridianForest_Frlg/scripts.pory"
	end
# 17 "data/maps/ViridianForest_Frlg/scripts.pory"

# 18 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_EventScript_TrainerTips1::
# 19 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_AvoidGrassyAreasWhenWeak, MSGBOX_SIGN
# 20 "data/maps/ViridianForest_Frlg/scripts.pory"
	end
# 21 "data/maps/ViridianForest_Frlg/scripts.pory"

# 22 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_EventScript_TrainerTips2::
# 23 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_UseAntidoteForPoison, MSGBOX_SIGN
# 24 "data/maps/ViridianForest_Frlg/scripts.pory"
	end
# 25 "data/maps/ViridianForest_Frlg/scripts.pory"

# 26 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_EventScript_TrainerTips3::
# 27 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_ContactOakViaPCToRatePokedex, MSGBOX_SIGN
# 28 "data/maps/ViridianForest_Frlg/scripts.pory"
	end
# 29 "data/maps/ViridianForest_Frlg/scripts.pory"

# 30 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_EventScript_TrainerTips4::
# 31 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_CantCatchOwnedMons, MSGBOX_SIGN
# 32 "data/maps/ViridianForest_Frlg/scripts.pory"
	end
# 33 "data/maps/ViridianForest_Frlg/scripts.pory"

# 34 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_EventScript_TrainerTips5::
# 35 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_WeakenMonsBeforeCapture, MSGBOX_SIGN
# 36 "data/maps/ViridianForest_Frlg/scripts.pory"
	end
# 37 "data/maps/ViridianForest_Frlg/scripts.pory"

# 38 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_EventScript_ExitSign::
# 39 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_LeavingViridianForest, MSGBOX_SIGN
# 40 "data/maps/ViridianForest_Frlg/scripts.pory"
	end
# 41 "data/maps/ViridianForest_Frlg/scripts.pory"

# 42 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_EventScript_Rick::
# 43 "data/maps/ViridianForest_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_RICK, ViridianForest_Text_RickIntro, ViridianForest_Text_RickDefeat
# 44 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/ViridianForest_Frlg/scripts.pory"
	end
# 46 "data/maps/ViridianForest_Frlg/scripts.pory"

# 47 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_EventScript_Doug::
# 48 "data/maps/ViridianForest_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_DOUG, ViridianForest_Text_DougIntro, ViridianForest_Text_DougDefeat
# 49 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_DougPostBattle, MSGBOX_AUTOCLOSE
# 50 "data/maps/ViridianForest_Frlg/scripts.pory"
	end
# 51 "data/maps/ViridianForest_Frlg/scripts.pory"

# 52 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_EventScript_Sammy::
# 53 "data/maps/ViridianForest_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_SAMMY, ViridianForest_Text_SammyIntro, ViridianForest_Text_SammyDefeat
# 54 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_SammyPostBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/ViridianForest_Frlg/scripts.pory"
	end
# 56 "data/maps/ViridianForest_Frlg/scripts.pory"

# 57 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_EventScript_Anthony::
# 58 "data/maps/ViridianForest_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_ANTHONY, ViridianForest_Text_AnthonyIntro, ViridianForest_Text_AnthonyDefeat
# 59 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/ViridianForest_Frlg/scripts.pory"
	end
# 61 "data/maps/ViridianForest_Frlg/scripts.pory"

# 62 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_EventScript_Charlie::
# 63 "data/maps/ViridianForest_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_CHARLIE, ViridianForest_Text_CharlieIntro, ViridianForest_Text_CharlieDefeat
# 64 "data/maps/ViridianForest_Frlg/scripts.pory"
	msgbox ViridianForest_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/ViridianForest_Frlg/scripts.pory"
	end
# 66 "data/maps/ViridianForest_Frlg/scripts.pory"

# 67 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_FriendsItchingToBattle::
# 68 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "I came here with some friends to\n"
# 69 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "catch us some BUG POKéMON!\p"
# 70 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "They're all itching to get into\n"
# 71 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "some POKéMON battles!$"
# 72 "data/maps/ViridianForest_Frlg/scripts.pory"

# 73 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_RickIntro::
# 74 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Hey! You have POKéMON!\n"
# 75 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Come on!\l"
# 76 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Let's battle 'em!$"
# 77 "data/maps/ViridianForest_Frlg/scripts.pory"

# 78 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_RickDefeat::
# 79 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "No!\nCATERPIE can't hack it!$"
# 80 "data/maps/ViridianForest_Frlg/scripts.pory"

# 81 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_RickPostBattle::
# 82 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Ssh! You'll scare the bugs away.\n"
# 83 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Another time, okay?$"
# 84 "data/maps/ViridianForest_Frlg/scripts.pory"

# 85 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_DougIntro::
# 86 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Yo!\n"
# 87 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "You can't jam out if you're a\l"
# 88 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "POKéMON TRAINER!$"
# 89 "data/maps/ViridianForest_Frlg/scripts.pory"

# 90 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_DougDefeat::
# 91 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Huh?\n"
# 92 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "I ran out of POKéMON!$"
# 93 "data/maps/ViridianForest_Frlg/scripts.pory"

# 94 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_DougPostBattle::
# 95 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "That totally stinks! I'm going to\n"
# 96 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "catch some stronger ones!$"
# 97 "data/maps/ViridianForest_Frlg/scripts.pory"

# 98 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_SammyIntro::
# 99 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Hey, wait up!\n"
# 100 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "What's the hurry? Why the rush?$"
# 101 "data/maps/ViridianForest_Frlg/scripts.pory"

# 102 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_SammyDefeat::
# 103 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "I give!\n"
# 104 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "You're good at this!$"
# 105 "data/maps/ViridianForest_Frlg/scripts.pory"

# 106 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_SammyPostBattle::
# 107 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Sometimes, you can find stuff on\n"
# 108 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "the ground.\p"
# 109 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "I'm looking for the stuff I\n"
# 110 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "dropped. Can you help me?$"
# 111 "data/maps/ViridianForest_Frlg/scripts.pory"

# 112 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_AnthonyIntro::
# 113 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "I might be little, but I won't like\n"
# 114 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "it if you go easy on me!$"
# 115 "data/maps/ViridianForest_Frlg/scripts.pory"

# 116 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_AnthonyDefeat::
# 117 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Oh, boo.\n"
# 118 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Nothing went right.$"
# 119 "data/maps/ViridianForest_Frlg/scripts.pory"

# 120 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_AnthonyPostBattle::
# 121 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "I lost some of my allowance…$"
# 122 "data/maps/ViridianForest_Frlg/scripts.pory"

# 123 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_CharlieIntro::
# 124 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Did you know that POKéMON evolve?$"
# 125 "data/maps/ViridianForest_Frlg/scripts.pory"

# 126 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_CharlieDefeat::
# 127 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Oh!\n"
# 128 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "I lost!$"
# 129 "data/maps/ViridianForest_Frlg/scripts.pory"

# 130 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_CharliePostBattle::
# 131 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "BUG POKéMON evolve quickly.\n"
# 132 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "They're a lot of fun!$"
# 133 "data/maps/ViridianForest_Frlg/scripts.pory"

# 134 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_RanOutOfPokeBalls::
# 135 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "I was throwing POKé BALLS to\n"
# 136 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "catch POKéMON, and I ran out.\p"
# 137 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "That's why you can never have too\n"
# 138 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "many POKé BALLS.$"
# 139 "data/maps/ViridianForest_Frlg/scripts.pory"

# 140 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_AvoidGrassyAreasWhenWeak::
# 141 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 142 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "If your POKéMON are weak and you\n"
# 143 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "want to avoid battles, stay away\l"
# 144 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "from grassy areas!$"
# 145 "data/maps/ViridianForest_Frlg/scripts.pory"

# 146 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_UseAntidoteForPoison::
# 147 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "For poison, use ANTIDOTE!\n"
# 148 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Get it at POKéMON MARTS!$"
# 149 "data/maps/ViridianForest_Frlg/scripts.pory"

# 150 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_ContactOakViaPCToRatePokedex::
# 151 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 152 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Contact PROF. OAK via a PC to\n"
# 153 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "get your POKéDEX evaluated!$"
# 154 "data/maps/ViridianForest_Frlg/scripts.pory"

# 155 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_CantCatchOwnedMons::
# 156 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 157 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "You can't catch a POKéMON that\n"
# 158 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "belongs to someone else.\p"
# 159 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Throw POKé BALLS only at wild\n"
# 160 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "POKéMON to catch them!$"
# 161 "data/maps/ViridianForest_Frlg/scripts.pory"

# 162 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_WeakenMonsBeforeCapture::
# 163 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 164 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "Weaken POKéMON before attempting\n"
# 165 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "capture!\p"
# 166 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "When healthy, they may escape!$"
# 167 "data/maps/ViridianForest_Frlg/scripts.pory"

# 168 "data/maps/ViridianForest_Frlg/scripts.pory"
ViridianForest_Text_LeavingViridianForest::
# 169 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "LEAVING VIRIDIAN FOREST\n"
# 170 "data/maps/ViridianForest_Frlg/scripts.pory"
	.string "PEWTER CITY AHEAD$"
