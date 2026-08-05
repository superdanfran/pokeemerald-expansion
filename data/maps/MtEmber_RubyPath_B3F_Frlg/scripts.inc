# 1 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"

# 2 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
MtEmber_RubyPath_B3F_Frlg_MapScripts::
# 3 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"

# 5 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
@ Odd that this is here and not in MtEmber_RubyPath_B5F/scripts.inc
# 6 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_Ruby::
# 7 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	lock
# 8 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	faceplayer
# 9 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	setflag FLAG_GOT_RUBY
# 10 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	removeobject LOCALID_RUBY
# 11 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	giveitem_msg MtEmber_RubyPath_B3F_Text_FoundARuby, ITEM_RUBY, 1, MUS_RG_OBTAIN_KEY_ITEM
# 12 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	release
# 13 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	end
# 14 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"

# 15 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
MtEmber_RubyPath_B3F_Text_FoundARuby::
# 16 "data/maps/MtEmber_RubyPath_B3F_Frlg/scripts.pory"
	.string "{PLAYER} found a RUBY!$"
