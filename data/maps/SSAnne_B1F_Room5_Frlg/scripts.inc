# 1 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"

# 2 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
SSAnne_B1F_Room5_Frlg_MapScripts::
# 3 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"

# 5 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
SSAnne_B1F_Room5_EventScript_Boy::
# 6 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	msgbox SSAnne_B1F_Room5_Text_MachokeHasStrengthToMoveRocks, MSGBOX_NPC
# 7 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	end
# 8 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"

# 9 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
SSAnne_B1F_Room5_EventScript_Machoke::
# 10 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	lock
# 11 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	faceplayer
# 12 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	waitse
# 13 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	playmoncry SPECIES_MACHOKE, CRY_MODE_NORMAL
# 14 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	msgbox SSAnne_B1F_Room5_Text_Machoke
# 15 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	waitmoncry
# 16 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	release
# 17 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	end
# 18 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"

# 19 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
SSAnne_B1F_Room5_Text_MachokeHasStrengthToMoveRocks::
# 20 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	.string "My buddy MACHOKE is super strong!\p"
# 21 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	.string "He has enough STRENGTH to move\n"
# 22 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	.string "big rocks!$"
# 23 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"

# 24 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
SSAnne_B1F_Room5_Text_Machoke::
# 25 "data/maps/SSAnne_B1F_Room5_Frlg/scripts.pory"
	.string "MACHOKE: Gwoh! Goggoh!$"
