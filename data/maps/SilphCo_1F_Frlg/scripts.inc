# 1 "data/maps/SilphCo_1F_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_1F_Frlg/scripts.pory"
SilphCo_1F_Frlg_MapScripts::
# 3 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SilphCo_1F_OnTransition
# 4 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/SilphCo_1F_Frlg/scripts.pory"

# 6 "data/maps/SilphCo_1F_Frlg/scripts.pory"
SilphCo_1F_OnTransition::
# 7 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SILPH_CO_1F
# 8 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	end
# 9 "data/maps/SilphCo_1F_Frlg/scripts.pory"

# 10 "data/maps/SilphCo_1F_Frlg/scripts.pory"
SilphCo_1F_EventScript_Receptionist::
# 11 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	msgbox SilphCo_1F_Text_WelcomePresidentInBoardroom, MSGBOX_NPC
# 12 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	end
# 13 "data/maps/SilphCo_1F_Frlg/scripts.pory"

# 14 "data/maps/SilphCo_1F_Frlg/scripts.pory"
SilphCo_1F_EventScript_FloorSign::
# 15 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	msgbox SilphCo_1F_Text_FloorSign, MSGBOX_SIGN
# 16 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	end
# 17 "data/maps/SilphCo_1F_Frlg/scripts.pory"

# 18 "data/maps/SilphCo_1F_Frlg/scripts.pory"
SilphCo_1F_Text_WelcomePresidentInBoardroom::
# 19 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	.string "Welcome.\p"
# 20 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	.string "The PRESIDENT is in the boardroom\n"
# 21 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	.string "on 11F.$"
# 22 "data/maps/SilphCo_1F_Frlg/scripts.pory"

# 23 "data/maps/SilphCo_1F_Frlg/scripts.pory"
SilphCo_1F_Text_FloorSign::
# 24 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
# 25 "data/maps/SilphCo_1F_Frlg/scripts.pory"
	.string "1F$"
