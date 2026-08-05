# 1 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"

# 2 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
SaffronCity_CopycatsHouse_2F_Frlg_MapScripts::
# 3 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"

# 5 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
SaffronCity_CopycatsHouse_2F_EventScript_Doduo::
# 6 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	lock
# 7 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	waitse
# 9 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	playmoncry SPECIES_DODUO, CRY_MODE_NORMAL
# 10 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_2F_Text_Doduo
# 11 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	waitmoncry
# 12 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	release
# 13 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	end
# 14 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"

# 15 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
SaffronCity_CopycatsHouse_2F_EventScript_Doll::
# 16 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	lock
# 17 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_2F_Text_RareMonOnlyDoll
# 18 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	release
# 19 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	end
# 20 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"

# 21 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
SaffronCity_CopycatsHouse_2F_EventScript_Copycat::
# 22 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	lock
# 23 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	faceplayer
# 24 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	checkitem ITEM_POKE_DOLL
# 25 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_MimicTutor
# 26 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	checkplayergender
# 27 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, MALE, SaffronCity_CopycatsHouse_2F_EventScript_MimicPlayerMale
# 28 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, SaffronCity_CopycatsHouse_2F_EventScript_MimicPlayerFemale
# 29 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	release
# 30 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	end
# 31 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"

# 32 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
SaffronCity_CopycatsHouse_2F_EventScript_MimicPlayerMale::
# 33 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_2F_Text_MimickingFavoriteHobbyMale
# 34 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	return
# 35 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"

# 36 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
SaffronCity_CopycatsHouse_2F_EventScript_MimicPlayerFemale::
# 37 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_2F_Text_MimickingFavoriteHobbyFemale
# 38 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	return
# 39 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"

# 40 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
SaffronCity_CopycatsHouse_2F_EventScript_Computer::
# 41 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_2F_Text_MySecrets, MSGBOX_SIGN
# 42 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	end
# 43 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"

# 44 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
SaffronCity_CopycatsHouse_2F_EventScript_Game::
# 45 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_2F_Text_MarioWearingABucket, MSGBOX_SIGN
# 46 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	end
# 47 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"

# 48 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
SaffronCity_CopycatsHouse_2F_Text_MimickingFavoriteHobbyMale::
# 49 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER}: Hi!\n"
# 50 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "Do you like POKéMON?\p"
# 51 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER}: Uh, no, I just asked you.\p"
# 52 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER}: Huh?\n"
# 53 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "You're strange!\p"
# 54 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "COPYCAT: Hmm? Quit mimicking?\n"
# 55 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "But, that's my favorite hobby!$"
# 56 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"

# 57 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
SaffronCity_CopycatsHouse_2F_Text_MimickingFavoriteHobbyFemale::
# 58 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER}: Hi.\n"
# 59 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "You must like POKéMON.\p"
# 60 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER}: No, not me.\n"
# 61 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "I asked you.\p"
# 62 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER}: Pardon?\n"
# 63 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "You're weird!\l"
# 64 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string " \l"
# 65 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "COPYCAT: Hmm? Quit mimicking?\l"
# 66 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "But that's my favorite hobby!$"
# 67 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"

# 68 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
Text_MimicTeach::
# 69 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "Oh wow!\n"
# 70 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "A POKé DOLL!\p"
# 71 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "For me?\n"
# 72 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "Thank you!\p"
# 73 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "You know what?\n"
# 74 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "I can teach the move MIMIC.$"
# 75 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"

# 76 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
Text_MimicDeclined::
# 77 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "Don't you like MIMIC?$"
# 78 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"

# 79 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
Text_MimicWhichMon::
# 80 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "I really love MIMIC!\n"
# 81 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "Who's going to learn it?$"
# 82 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"

# 83 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
Text_MimicTaughtMale::
# 84 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER}: Hi!\n"
# 85 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "Thanks for earlier!\p"
# 86 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER}: Pardon?\p"
# 87 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER}: Is it that fun to mimic my\n"
# 88 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "every move?\p"
# 89 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "COPYCAT: You bet!\n"
# 90 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "It's a scream!$"
# 91 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"

# 92 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
Text_MimicTaughtFemale::
# 93 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER}: Hi!\n"
# 94 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "Thanks for what you did for us.\p"
# 95 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER}: Pardon?\p"
# 96 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "{PLAYER}: Is it really that fun to\n"
# 97 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "copy what I say and do?\p"
# 98 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "COPYCAT: You bet!\n"
# 99 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "It's a scream!$"
# 100 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"

# 101 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
SaffronCity_CopycatsHouse_2F_Text_Doduo::
# 102 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "DODUO: Giiih!\p"
# 103 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "PRETTY MIRROR LOOK AT ME,\n"
# 104 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "SEE HOW PRETTY I CAN BE?$"
# 105 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"

# 106 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
SaffronCity_CopycatsHouse_2F_Text_RareMonOnlyDoll::
# 107 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "This is a rare POKéMON!\n"
# 108 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "Huh? It's only a doll!$"
# 109 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"

# 110 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
SaffronCity_CopycatsHouse_2F_Text_MarioWearingABucket::
# 111 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "A game with MARIO wearing a bucket\n"
# 112 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "on his head!$"
# 113 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"

# 114 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
SaffronCity_CopycatsHouse_2F_Text_MySecrets::
# 115 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "…\p"
# 116 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "My Secrets!\p"
# 117 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "Skill: Mimicry!\n"
# 118 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "Hobby: Collecting dolls!\l"
# 119 "data/maps/SaffronCity_CopycatsHouse_2F_Frlg/scripts.pory"
	.string "Favorite POKéMON: CLEFAIRY!$"
