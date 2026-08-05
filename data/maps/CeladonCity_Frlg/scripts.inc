# 1 "data/maps/CeladonCity_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_OnTransition
# 4 "data/maps/CeladonCity_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/CeladonCity_Frlg/scripts.pory"

# 6 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_OnTransition::
# 7 "data/maps/CeladonCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CELADON_CITY
# 8 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 9 "data/maps/CeladonCity_Frlg/scripts.pory"

# 10 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_LittleGirl::
# 11 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GotMyKoffingInCinnabar, MSGBOX_NPC
# 12 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 13 "data/maps/CeladonCity_Frlg/scripts.pory"

# 14 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_OldMan1::
# 15 "data/maps/CeladonCity_Frlg/scripts.pory"
	lock
# 16 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GymIsGreatFullOfWomen
# 17 "data/maps/CeladonCity_Frlg/scripts.pory"
	release
# 18 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 19 "data/maps/CeladonCity_Frlg/scripts.pory"

# 20 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_Woman::
# 21 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GameCornerIsBadForCitysImage, MSGBOX_NPC
# 22 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 23 "data/maps/CeladonCity_Frlg/scripts.pory"

# 24 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_OldMan2::
# 25 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_BlewItAllAtSlots, MSGBOX_NPC
# 26 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 27 "data/maps/CeladonCity_Frlg/scripts.pory"

# 28 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_SoftboiledTutor::
# 29 "data/maps/CeladonCity_Frlg/scripts.pory"
	goto EventScript_SoftboiledTutor
# 30 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 31 "data/maps/CeladonCity_Frlg/scripts.pory"

# 32 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_FatMan::
# 33 "data/maps/CeladonCity_Frlg/scripts.pory"
	lock
# 34 "data/maps/CeladonCity_Frlg/scripts.pory"
	faceplayer
# 35 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_MyTrustedPalPoliwrath
# 36 "data/maps/CeladonCity_Frlg/scripts.pory"
	closemessage
# 37 "data/maps/CeladonCity_Frlg/scripts.pory"
	applymovement LOCALID_CELADON_FAT_MAN, Common_Movement_FaceOriginalDirection
# 38 "data/maps/CeladonCity_Frlg/scripts.pory"
	waitmovement 0
# 39 "data/maps/CeladonCity_Frlg/scripts.pory"
	release
# 40 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 41 "data/maps/CeladonCity_Frlg/scripts.pory"

# 42 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_Poliwrath::
# 43 "data/maps/CeladonCity_Frlg/scripts.pory"
	lock
# 44 "data/maps/CeladonCity_Frlg/scripts.pory"
	faceplayer
# 45 "data/maps/CeladonCity_Frlg/scripts.pory"
	waitse
# 46 "data/maps/CeladonCity_Frlg/scripts.pory"
	playmoncry SPECIES_POLIWRATH, CRY_MODE_NORMAL
# 47 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_Poliwrath
# 48 "data/maps/CeladonCity_Frlg/scripts.pory"
	closemessage
# 49 "data/maps/CeladonCity_Frlg/scripts.pory"
	waitmoncry
# 50 "data/maps/CeladonCity_Frlg/scripts.pory"
	applymovement LOCALID_CELADON_POLIWRATH, Common_Movement_FaceOriginalDirection
# 51 "data/maps/CeladonCity_Frlg/scripts.pory"
	waitmovement 0
# 52 "data/maps/CeladonCity_Frlg/scripts.pory"
	release
# 53 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 54 "data/maps/CeladonCity_Frlg/scripts.pory"

# 55 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_RocketGrunt1::
# 56 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_KeepOutOfTeamRocketsWay, MSGBOX_NPC
# 57 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 58 "data/maps/CeladonCity_Frlg/scripts.pory"

# 59 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_RocketGrunt2::
# 60 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GetLostOrIllPunchYou, MSGBOX_NPC
# 61 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 62 "data/maps/CeladonCity_Frlg/scripts.pory"

# 63 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_Boy::
# 64 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_ScaldedTongueOnTea, MSGBOX_NPC
# 65 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 66 "data/maps/CeladonCity_Frlg/scripts.pory"

# 67 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_SilphCoScientist::
# 68 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_SomeoneStoleSilphScope, MSGBOX_NPC
# 69 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 70 "data/maps/CeladonCity_Frlg/scripts.pory"

# 71 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_TrainerTips1::
# 72 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_ExplainXAccuracyDireHit, MSGBOX_SIGN
# 73 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 74 "data/maps/CeladonCity_Frlg/scripts.pory"

# 75 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_CitySign::
# 76 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_CitySign, MSGBOX_SIGN
# 77 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 78 "data/maps/CeladonCity_Frlg/scripts.pory"

# 79 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_GymSign::
# 80 "data/maps/CeladonCity_Frlg/scripts.pory"
	lockall
# 81 "data/maps/CeladonCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 0
# 82 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GymSign
# 83 "data/maps/CeladonCity_Frlg/scripts.pory"
	releaseall
# 84 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 85 "data/maps/CeladonCity_Frlg/scripts.pory"

# 86 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_MansionSign::
# 87 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_MansionSign, MSGBOX_SIGN
# 88 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 89 "data/maps/CeladonCity_Frlg/scripts.pory"

# 90 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_DeptStoreSign::
# 91 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_DeptStoreSign, MSGBOX_SIGN
# 92 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 93 "data/maps/CeladonCity_Frlg/scripts.pory"

# 94 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_TrainerTips2::
# 95 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GuardSpecProtectsFromStatus, MSGBOX_SIGN
# 96 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 97 "data/maps/CeladonCity_Frlg/scripts.pory"

# 98 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_PrizeExchangeSign::
# 99 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_PrizeExchangeSign, MSGBOX_SIGN
# 100 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 101 "data/maps/CeladonCity_Frlg/scripts.pory"

# 102 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_EventScript_GameCornerSign::
# 103 "data/maps/CeladonCity_Frlg/scripts.pory"
	msgbox CeladonCity_Text_GameCornerSign, MSGBOX_SIGN
# 104 "data/maps/CeladonCity_Frlg/scripts.pory"
	end
# 105 "data/maps/CeladonCity_Frlg/scripts.pory"

# 106 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_GotMyKoffingInCinnabar::
# 107 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I got my KOFFING in CINNABAR.\p"
# 108 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "It's usually nice, but it breathes\n"
# 109 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "poison when it's angry.$"
# 110 "data/maps/CeladonCity_Frlg/scripts.pory"

# 111 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_GymIsGreatFullOfWomen::
# 112 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Heheh! This GYM is great!\n"
# 113 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "It's full of women!$"
# 114 "data/maps/CeladonCity_Frlg/scripts.pory"

# 115 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_GameCornerIsBadForCitysImage::
# 116 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "CELADON takes pride in its efforts\n"
# 117 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "to keep the city beautiful.\p"
# 118 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "That's why the new GAME CORNER is\n"
# 119 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "bad for our city's image.$"
# 120 "data/maps/CeladonCity_Frlg/scripts.pory"

# 121 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_BlewItAllAtSlots::
# 122 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Moan…\n"
# 123 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I blew it all at the slots!\p"
# 124 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I knew I should have cashed in my\n"
# 125 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "COINS for prizes!$"
# 126 "data/maps/CeladonCity_Frlg/scripts.pory"

# 127 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_MyTrustedPalPoliwrath::
# 128 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "This is my trusted pal, POLIWRATH.\p"
# 129 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "It evolved from a POLIWHIRL when\n"
# 130 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I used a WATER STONE.$"
# 131 "data/maps/CeladonCity_Frlg/scripts.pory"

# 132 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_Poliwrath::
# 133 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "POLIWRATH: Ribi ribit!$"
# 134 "data/maps/CeladonCity_Frlg/scripts.pory"

# 135 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_GetLostOrIllPunchYou::
# 136 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "What are you staring at?\n"
# 137 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Get lost, or I'll punch you.$"
# 138 "data/maps/CeladonCity_Frlg/scripts.pory"

# 139 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_KeepOutOfTeamRocketsWay::
# 140 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Keep out of TEAM ROCKET's way!$"
# 141 "data/maps/CeladonCity_Frlg/scripts.pory"

# 142 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_ExplainXAccuracyDireHit::
# 143 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 144 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "X ACCURACY boosts the accuracy of\n"
# 145 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "techniques.\p"
# 146 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "DIRE HIT jacks up the likelihood\n"
# 147 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "of critical hits.\p"
# 148 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Get your items at the CELADON\n"
# 149 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "DEPT. STORE!$"
# 150 "data/maps/CeladonCity_Frlg/scripts.pory"

# 151 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_CitySign::
# 152 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "CELADON CITY\n"
# 153 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "The City of Rainbow Dreams$"
# 154 "data/maps/CeladonCity_Frlg/scripts.pory"

# 155 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_GymSign::
# 156 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "CELADON CITY POKéMON GYM\n"
# 157 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "LEADER: ERIKA\l"
# 158 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "The Nature-Loving Princess!$"
# 159 "data/maps/CeladonCity_Frlg/scripts.pory"

# 160 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_MansionSign::
# 161 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "CELADON MANSION$"
# 162 "data/maps/CeladonCity_Frlg/scripts.pory"

# 163 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_DeptStoreSign::
# 164 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Find what you need at the\n"
# 165 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "CELADON DEPT. STORE!$"
# 166 "data/maps/CeladonCity_Frlg/scripts.pory"

# 167 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_GuardSpecProtectsFromStatus::
# 168 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 169 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "GUARD SPEC. protects POKéMON\n"
# 170 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "from status-reduction moves during\l"
# 171 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "battle.\p"
# 172 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Get your items at the\n"
# 173 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "CELADON DEPT. STORE!$"
# 174 "data/maps/CeladonCity_Frlg/scripts.pory"

# 175 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_PrizeExchangeSign::
# 176 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "COINS exchanged for prizes!\n"
# 177 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "PRIZE EXCHANGE$"
# 178 "data/maps/CeladonCity_Frlg/scripts.pory"

# 179 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_GameCornerSign::
# 180 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "ROCKET GAME CORNER\n"
# 181 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "The playground for grown-ups!$"
# 182 "data/maps/CeladonCity_Frlg/scripts.pory"

# 183 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_ScaldedTongueOnTea::
# 184 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Aaaagh, ow…\n"
# 185 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I scalded my tongue!\p"
# 186 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "This nice old lady in the MANSION\n"
# 187 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "gave me some TEA.\p"
# 188 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "But it was boiling hot!\n"
# 189 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Gotta cool it to drink it.$"
# 190 "data/maps/CeladonCity_Frlg/scripts.pory"

# 191 "data/maps/CeladonCity_Frlg/scripts.pory"
Text_SoftboiledTeach::
# 192 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Hello, there!\p"
# 193 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I've seen you about, but I never\n"
# 194 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "had a chance to chat.\p"
# 195 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "It must be good luck that brought\n"
# 196 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "us together finally.\p"
# 197 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I'd like to celebrate by teaching\n"
# 198 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "you the move SOFTBOILED.$"
# 199 "data/maps/CeladonCity_Frlg/scripts.pory"

# 200 "data/maps/CeladonCity_Frlg/scripts.pory"
Text_SoftboiledDeclined::
# 201 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I'll always be keeping an eye out\n"
# 202 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "for you.\p"
# 203 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I hope we can chat again.$"
# 204 "data/maps/CeladonCity_Frlg/scripts.pory"

# 205 "data/maps/CeladonCity_Frlg/scripts.pory"
Text_SoftboiledWhichMon::
# 206 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "So, who's the POKéMON that gets\n"
# 207 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "the chance to learn SOFTBOILED?$"
# 208 "data/maps/CeladonCity_Frlg/scripts.pory"

# 209 "data/maps/CeladonCity_Frlg/scripts.pory"
Text_SoftboiledTaught::
# 210 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I wish you the best of luck!$"
# 211 "data/maps/CeladonCity_Frlg/scripts.pory"

# 212 "data/maps/CeladonCity_Frlg/scripts.pory"
CeladonCity_Text_SomeoneStoleSilphScope::
# 213 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Oh, what am I to do…\p"
# 214 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Someone stole our SILPH SCOPE.\p"
# 215 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "The thief came running this way,\n"
# 216 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "I'm sure of it.\p"
# 217 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "But I lost sight of him!\n"
# 218 "data/maps/CeladonCity_Frlg/scripts.pory"
	.string "Where'd he go?$"
