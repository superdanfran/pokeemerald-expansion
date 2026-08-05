# 1 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 2 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Frlg_MapScripts::
# 3 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 5 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji::
# 6 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	lock
# 7 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_POKE_FLUTE, LavenderTown_VolunteerPokemonHouse_EventScript_AlreadyHavePokeFlute
# 9 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_IdLikeYouToHaveThis
# 10 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	checkitemspace ITEM_POKE_FLUTE
# 11 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LavenderTown_VolunteerPokemonHouse_EventScript_NoRoomForPokeFlute
# 12 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	setflag FLAG_GOT_POKE_FLUTE
# 13 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	giveitem_msg LavenderTown_VolunteerPokemonHouse_Text_ReceivedPokeFluteFromMrFuji, ITEM_POKE_FLUTE, 1, MUS_RG_OBTAIN_KEY_ITEM
# 14 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_ExplainPokeFlute
# 15 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	release
# 16 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	end
# 17 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 18 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_AlreadyHavePokeFlute::
# 19 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_HasPokeFluteHelpedYou
# 20 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	release
# 21 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	end
# 22 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 23 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_NoRoomForPokeFlute::
# 24 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MustMakeRoomForThis
# 25 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	release
# 26 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	end
# 27 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 28 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_LittleGirl::
# 29 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	lock
# 30 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	faceplayer
# 31 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, 0
# 32 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiLooksAfterOrphanedMons
# 33 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	release
# 34 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	end
# 35 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 36 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_LittleBoy::
# 37 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MonsNiceToHug, MSGBOX_NPC
# 38 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	end
# 39 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 40 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Youngster::
# 41 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	lock
# 42 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	faceplayer
# 43 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_MR_FUJI, LavenderTown_VolunteerPokemonHouse_EventScript_YoungsterFujiBack
# 44 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_WhereDidMrFujiGo
# 45 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	release
# 46 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	end
# 47 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 48 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_YoungsterFujiBack::
# 49 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiWasPrayingForCubonesMother
# 50 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	release
# 51 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	end
# 52 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 53 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Nidorino::
# 54 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	lock
# 55 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	faceplayer
# 56 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	waitse
# 57 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	playmoncry SPECIES_NIDORINO, CRY_MODE_NORMAL
# 58 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Nidorino
# 59 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	waitmoncry
# 60 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	release
# 61 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	end
# 62 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 63 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Psyduck::
# 64 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	lock
# 65 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	faceplayer
# 66 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	waitse
# 67 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 68 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Psyduck
# 69 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	waitmoncry
# 70 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	release
# 71 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	end
# 72 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 73 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_PokemonFanMagazine::
# 74 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	lockall
# 75 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, 2
# 76 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_GrandPrizeDrawingClipped
# 77 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	releaseall
# 78 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	end
# 79 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 80 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Bookshelf::
# 81 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_PokemonMagazinesLineShelf, MSGBOX_SIGN
# 82 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	end
# 83 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 84 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_PokemonCenter_1F_Text_HearMrFujiNotFromAroundHere::
# 85 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "I recently moved to this town.\p"
# 86 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "I hear that MR. FUJI's not from\n"
# 87 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "these parts originally, either.$"
# 88 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 89 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_WhereDidMrFujiGo::
# 90 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "That's odd, MR. FUJI isn't here.\n"
# 91 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "Where'd he go?$"
# 92 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 93 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_MrFujiWasPrayingForCubonesMother::
# 94 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "MR. FUJI had been praying alone\n"
# 95 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "for CUBONE's mother.$"
# 96 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 97 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_MrFujiLooksAfterOrphanedMons::
# 98 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "This is really MR. FUJI's house.\p"
# 99 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "He's really kind.\p"
# 100 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "He looks after abandoned and\n"
# 101 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "orphaned POKéMON.$"
# 102 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 103 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_MonsNiceToHug::
# 104 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "It's so warm!\n"
# 105 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "POKéMON are so nice to hug.$"
# 106 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 107 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_Nidorino::
# 108 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "NIDORINO: Gaoo!$"
# 109 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 110 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_Psyduck::
# 111 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "PSYDUCK: Gwappa!$"
# 112 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 113 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_IdLikeYouToHaveThis::
# 114 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "MR. FUJI: {PLAYER}…\p"
# 115 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "Your POKéDEX quest is one that\n"
# 116 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "requires strong dedication.\p"
# 117 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "Without deep love for POKéMON,\n"
# 118 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "your quest may fail.\p"
# 119 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "I'm not sure if this will help you,\n"
# 120 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "but I'd like you to have it.$"
# 121 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 122 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_ReceivedPokeFluteFromMrFuji::
# 123 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "{PLAYER} received a POKé FLUTE\n"
# 124 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "from MR. FUJI.$"
# 125 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 126 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_ExplainPokeFlute::
# 127 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "Upon hearing the POKé FLUTE,\n"
# 128 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "sleeping POKéMON will spring awake.\p"
# 129 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "Try using it on POKéMON that are\n"
# 130 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "sleeping obstacles.$"
# 131 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 132 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_MustMakeRoomForThis::
# 133 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "You must make room for this!$"
# 134 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 135 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_HasPokeFluteHelpedYou::
# 136 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "MR. FUJI: Has my POKé FLUTE\n"
# 137 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "helped you?$"
# 138 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 139 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_GrandPrizeDrawingClipped::
# 140 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "POKéMON FAN MAGAZINE\n"
# 141 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "Monthly Grand Prize Drawing!\p"
# 142 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "The application form is…\p"
# 143 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "Gone! It's been clipped out.\n"
# 144 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "Someone must have applied already.$"
# 145 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"

# 146 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_PokemonMagazinesLineShelf::
# 147 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "POKéMON magazines line the shelf.\p"
# 148 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "POKéMON INSIDER…\p"
# 149 "data/maps/LavenderTown_VolunteerPokemonHouse_Frlg/scripts.pory"
	.string "POKéMON FAN…$"
