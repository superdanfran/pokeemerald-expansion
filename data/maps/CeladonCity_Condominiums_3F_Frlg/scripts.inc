# 1 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 5 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_EventScript_Programmer::
# 6 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ImTheProgrammer, MSGBOX_NPC
# 7 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	end
# 8 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 9 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_EventScript_GraphicArtist::
# 10 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ImTheGraphicArtist, MSGBOX_NPC
# 11 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	end
# 12 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 13 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_EventScript_Writer::
# 14 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_IWroteTheStory, MSGBOX_NPC
# 15 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	end
# 16 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 17 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_EventScript_Designer::
# 18 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	lock
# 19 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	faceplayer
# 20 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	specialvar VAR_RESULT, HasAllKantoMons
# 21 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CeladonCity_Condominiums_3F_EventScript_CompletedPokedex
# 22 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ImGameDesignerShowMeFinishedPokedex
# 23 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	release
# 24 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	end
# 25 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 26 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_EventScript_CompletedPokedex::
# 27 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	goto CeladonCity_Condominiums_3F_EventScript_ShowDiploma
# 28 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	end
# 29 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 30 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_EventScript_ShowDiploma::
# 31 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	message CeladonCity_Condominiums_3F_Text_CompletedPokedexCongratulations
# 32 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	waitmessage
# 33 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	delay 60
# 34 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	special Special_ShowDiploma
# 35 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	release
# 36 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	end
# 37 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 38 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_EventScript_DevelopmentRoomSign::
# 39 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_GameFreakDevelopmentRoom, MSGBOX_SIGN
# 40 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	end
# 41 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 42 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_EventScript_Computer1::
# 43 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ItsTheGameProgram, MSGBOX_SIGN
# 44 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	end
# 45 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 46 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_EventScript_Computer2::
# 47 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_SomeonesPlayingGame, MSGBOX_SIGN
# 48 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	end
# 49 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 50 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_EventScript_Computer3::
# 51 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	msgbox CeladonCity_Condominiums_3F_Text_ItsScriptBetterNotLookAtEnding, MSGBOX_SIGN
# 52 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	end
# 53 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 54 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_Text_ImTheProgrammer::
# 55 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Me?\n"
# 56 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "I'm the programmer!$"
# 57 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 58 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_Text_ImTheGraphicArtist::
# 59 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "I'm the graphic artist!\n"
# 60 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "I drew you!$"
# 61 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 62 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_Text_IWroteTheStory::
# 63 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "I wrote the story!\n"
# 64 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Isn't ERIKA cute?\p"
# 65 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "I like MISTY a lot, too!\n"
# 66 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Oh, and SABRINA, I like her!$"
# 67 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 68 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_Text_ImGameDesignerShowMeFinishedPokedex::
# 69 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Is that right?\p"
# 70 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "I'm the game designer!\p"
# 71 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Filling up your POKéDEX is tough,\n"
# 72 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "but don't quit!\p"
# 73 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "When you finish, come tell me!$"
# 74 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 75 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_Text_CompletedPokedexCongratulations::
# 76 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Wow! Excellent!\n"
# 77 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "You completed your POKéDEX!\l"
# 78 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Congratulations!\l"
# 79 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "…$"
# 80 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 81 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_Text_ItsTheGameProgram::
# 82 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "It's the game program! Messing with\n"
# 83 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "it could bug out the game!$"
# 84 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 85 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_Text_SomeonesPlayingGame::
# 86 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Someone's playing a game instead of\n"
# 87 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "working!$"
# 88 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 89 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_Text_ItsScriptBetterNotLookAtEnding::
# 90 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "It's the script!\n"
# 91 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "Better not look at the ending!$"
# 92 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"

# 93 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
CeladonCity_Condominiums_3F_Text_GameFreakDevelopmentRoom::
# 94 "data/maps/CeladonCity_Condominiums_3F_Frlg/scripts.pory"
	.string "GAME FREAK Development Room$"
