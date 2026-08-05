# 1 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"

# 2 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
SaffronCity_CopycatsHouse_1F_Frlg_MapScripts::
# 3 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"

# 5 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
SaffronCity_CopycatsHouse_1F_EventScript_CopycatsMom::
# 6 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_1F_Text_DaughterIsSelfCentered, MSGBOX_NPC
# 7 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	end
# 8 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"

# 9 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
SaffronCity_CopycatsHouse_1F_EventScript_CopycatsDad::
# 10 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_1F_Text_DaughterLikesToMimicPeople, MSGBOX_NPC
# 11 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	end
# 12 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"

# 13 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
SaffronCity_CopycatsHouse_1F_EventScript_Chansey::
# 14 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	lock
# 15 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	faceplayer
# 16 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	waitse
# 17 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 18 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	msgbox SaffronCity_CopycatsHouse_1F_Text_Chansey
# 19 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	waitmoncry
# 20 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	release
# 21 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	end
# 22 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"

# 23 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
SaffronCity_CopycatsHouse_1F_Text_DaughterIsSelfCentered::
# 24 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	.string "My daughter is so self-centered.\n"
# 25 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	.string "She has but a few friends.$"
# 26 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"

# 27 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
SaffronCity_CopycatsHouse_1F_Text_DaughterLikesToMimicPeople::
# 28 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	.string "My daughter likes to mimic people.\n"
# 29 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	.string "It's rather vexing.\p"
# 30 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	.string "Her mimicry has earned her the\n"
# 31 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	.string "nickname COPYCAT around here.$"
# 32 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"

# 33 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
SaffronCity_CopycatsHouse_1F_Text_Chansey::
# 34 "data/maps/SaffronCity_CopycatsHouse_1F_Frlg/scripts.pory"
	.string "CHANSEY: Chaan! Sii!$"
