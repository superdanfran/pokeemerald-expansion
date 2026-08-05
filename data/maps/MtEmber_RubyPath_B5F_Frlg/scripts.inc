# 1 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"

# 2 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
MtEmber_RubyPath_B5F_Frlg_MapScripts::
# 3 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"

# 5 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_BrailleMessage::
# 6 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	lockall
# 7 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	setvar VAR_0x8005, 130
# 8 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_Everything
# 9 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_HasMeaning1
# 10 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_Existence
# 11 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_HasMeaning2
# 12 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_BeingAlive
# 13 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_HasMeaning3
# 14 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemessage_wait Braille_Text_HaveDreams
# 15 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	braillemsgbox Braille_Text_UsePower
# 16 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	releaseall
# 17 "data/maps/MtEmber_RubyPath_B5F_Frlg/scripts.pory"
	end
