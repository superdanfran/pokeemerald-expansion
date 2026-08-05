# 1 "data/maps/SevenIsland_TanobyRuins_WeepthChamber_Frlg/scripts.pory"

# 2 "data/maps/SevenIsland_TanobyRuins_WeepthChamber_Frlg/scripts.pory"
SevenIsland_TanobyRuins_WeepthChamber_Frlg_MapScripts::
# 3 "data/maps/SevenIsland_TanobyRuins_WeepthChamber_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_TanobyRuins_WeepthChamber_OnTransition
# 4 "data/maps/SevenIsland_TanobyRuins_WeepthChamber_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/SevenIsland_TanobyRuins_WeepthChamber_Frlg/scripts.pory"

# 6 "data/maps/SevenIsland_TanobyRuins_WeepthChamber_Frlg/scripts.pory"
SevenIsland_TanobyRuins_WeepthChamber_OnTransition::
# 7 "data/maps/SevenIsland_TanobyRuins_WeepthChamber_Frlg/scripts.pory"
	call EventScript_TryDarkenRuins
# 8 "data/maps/SevenIsland_TanobyRuins_WeepthChamber_Frlg/scripts.pory"
	end
