# 1 "data/maps/TwoIsland_Frlg/scripts.pory"

# 2 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Frlg_MapScripts::
# 3 "data/maps/TwoIsland_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_OnTransition
# 4 "data/maps/TwoIsland_Frlg/scripts.pory"
	.byte 0
# 5 "data/maps/TwoIsland_Frlg/scripts.pory"

# 6 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_OnTransition::
# 7 "data/maps/TwoIsland_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_TWO_ISLAND
# 8 "data/maps/TwoIsland_Frlg/scripts.pory"
	setflag FLAG_VISITED_TWO_ISLAND
# 9 "data/maps/TwoIsland_Frlg/scripts.pory"
	call TwoIsland_EventScript_SetShopState
# 10 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 11 "data/maps/TwoIsland_Frlg/scripts.pory"

# 12 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopState::
# 13 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, TwoIsland_EventScript_SetShopStateAfterHoennLink
# 14 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, TwoIsland_EventScript_SetShopStateAfterChampion
# 15 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_RESCUED_LOSTELLE, TwoIsland_EventScript_SetShopStateAfterLostelleRescue
# 16 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopStateDefault
# 17 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 18 "data/maps/TwoIsland_Frlg/scripts.pory"

# 19 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterHoennLink::
# 20 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_SetShopInitial
# 21 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_EXPANDED_1, TwoIsland_EventScript_SetShopExpanded1
# 22 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_EXPANDED_2, TwoIsland_EventScript_SetShopExpanded2
# 23 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded3
# 24 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 25 "data/maps/TwoIsland_Frlg/scripts.pory"

# 26 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterChampion::
# 27 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_SetShopInitial
# 28 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_RESCUED_LOSTELLE, TwoIsland_EventScript_SetShopInitial
# 29 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_EXPANDED_1, TwoIsland_EventScript_SetShopExpanded1
# 30 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded2
# 31 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 32 "data/maps/TwoIsland_Frlg/scripts.pory"

# 33 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterLostelleRescue::
# 34 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_SetShopInitial
# 35 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded1
# 36 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 37 "data/maps/TwoIsland_Frlg/scripts.pory"

# 38 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopStateDefault::
# 39 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_SetShopInitial
# 40 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 41 "data/maps/TwoIsland_Frlg/scripts.pory"

# 42 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopInitial::
# 43 "data/maps/TwoIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 1
# 44 "data/maps/TwoIsland_Frlg/scripts.pory"
	return
# 45 "data/maps/TwoIsland_Frlg/scripts.pory"

# 46 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopExpanded1::
# 47 "data/maps/TwoIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 2
# 48 "data/maps/TwoIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_WOMAN
# 49 "data/maps/TwoIsland_Frlg/scripts.pory"
	return
# 50 "data/maps/TwoIsland_Frlg/scripts.pory"

# 51 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopExpanded2::
# 52 "data/maps/TwoIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 3
# 53 "data/maps/TwoIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_BEAUTY
# 54 "data/maps/TwoIsland_Frlg/scripts.pory"
	return
# 55 "data/maps/TwoIsland_Frlg/scripts.pory"

# 56 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SetShopExpanded3::
# 57 "data/maps/TwoIsland_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 4
# 58 "data/maps/TwoIsland_Frlg/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_SUPER_NERD
# 59 "data/maps/TwoIsland_Frlg/scripts.pory"
	return
# 60 "data/maps/TwoIsland_Frlg/scripts.pory"

# 61 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_Clerk::
# 62 "data/maps/TwoIsland_Frlg/scripts.pory"
	lock
# 63 "data/maps/TwoIsland_Frlg/scripts.pory"
	faceplayer
# 64 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 4, TwoIsland_EventScript_ClerkShopExpanded3
# 65 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 3, TwoIsland_EventScript_ClerkShopExpanded2
# 66 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 2, TwoIsland_EventScript_ClerkShopExpanded1
# 67 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopInitial
# 68 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 69 "data/maps/TwoIsland_Frlg/scripts.pory"

# 70 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopExpanded3::
# 71 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_EXPANDED_3, TwoIsland_EventScript_ClerkShopSkipIntro
# 72 "data/maps/TwoIsland_Frlg/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_EXPANDED_3
# 73 "data/maps/TwoIsland_Frlg/scripts.pory"
	message TwoIsland_Text_BringingItemsFromDistantLands
# 74 "data/maps/TwoIsland_Frlg/scripts.pory"
	waitmessage
# 75 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded3
# 76 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 77 "data/maps/TwoIsland_Frlg/scripts.pory"

# 78 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopExpanded2::
# 79 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_EXPANDED_2, TwoIsland_EventScript_ClerkShopSkipIntro
# 80 "data/maps/TwoIsland_Frlg/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_EXPANDED_2
# 81 "data/maps/TwoIsland_Frlg/scripts.pory"
	message TwoIsland_Text_HopeYouGiveItYourBest
# 82 "data/maps/TwoIsland_Frlg/scripts.pory"
	waitmessage
# 83 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded2
# 84 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 85 "data/maps/TwoIsland_Frlg/scripts.pory"

# 86 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopExpanded1::
# 87 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_EXPANDED_1, TwoIsland_EventScript_ClerkShopSkipIntro
# 88 "data/maps/TwoIsland_Frlg/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_EXPANDED_1
# 89 "data/maps/TwoIsland_Frlg/scripts.pory"
	message TwoIsland_Text_AddedMerchandiseForLostelle
# 90 "data/maps/TwoIsland_Frlg/scripts.pory"
	waitmessage
# 91 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded1
# 92 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 93 "data/maps/TwoIsland_Frlg/scripts.pory"

# 94 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopInitial::
# 95 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_ClerkShopSkipIntro
# 96 "data/maps/TwoIsland_Frlg/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_INTRODUCED
# 97 "data/maps/TwoIsland_Frlg/scripts.pory"
	message TwoIsland_Text_WelcomeToShopMerchandiseLimited
# 98 "data/maps/TwoIsland_Frlg/scripts.pory"
	waitmessage
# 99 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ShopInitial
# 100 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 101 "data/maps/TwoIsland_Frlg/scripts.pory"

# 102 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ClerkShopSkipIntro::
# 103 "data/maps/TwoIsland_Frlg/scripts.pory"
	message gText_HowMayIServeYou
# 104 "data/maps/TwoIsland_Frlg/scripts.pory"
	waitmessage
# 105 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 4, TwoIsland_EventScript_ShopExpanded3
# 106 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 3, TwoIsland_EventScript_ShopExpanded2
# 107 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 2, TwoIsland_EventScript_ShopExpanded1
# 108 "data/maps/TwoIsland_Frlg/scripts.pory"
	goto TwoIsland_EventScript_ShopInitial
# 109 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 110 "data/maps/TwoIsland_Frlg/scripts.pory"

# 111 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ShopInitial::
# 112 "data/maps/TwoIsland_Frlg/scripts.pory"
	pokemart TwoIsland_Items_ShopInitial
# 113 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 114 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
# 115 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 116 "data/maps/TwoIsland_Frlg/scripts.pory"

# 117 "data/maps/TwoIsland_Frlg/scripts.pory"
	.align 2
# 118 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Items_ShopInitial::
# 119 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 120 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 121 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 122 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
# 123 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 124 "data/maps/TwoIsland_Frlg/scripts.pory"

# 125 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ShopExpanded1::
# 126 "data/maps/TwoIsland_Frlg/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded1
# 127 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 128 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
# 129 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 130 "data/maps/TwoIsland_Frlg/scripts.pory"

# 131 "data/maps/TwoIsland_Frlg/scripts.pory"
	.align 2
# 132 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Items_ShopExpanded1::
# 133 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 134 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 135 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_SODA_POP
# 136 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 137 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 138 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
# 139 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 140 "data/maps/TwoIsland_Frlg/scripts.pory"

# 141 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ShopExpanded2::
# 142 "data/maps/TwoIsland_Frlg/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded2
# 143 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 144 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
# 145 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 146 "data/maps/TwoIsland_Frlg/scripts.pory"

# 147 "data/maps/TwoIsland_Frlg/scripts.pory"
	.align 2
# 148 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Items_ShopExpanded2::
# 149 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 150 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 151 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_LEMONADE
# 152 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_SODA_POP
# 153 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 154 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 155 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 156 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
# 157 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 158 "data/maps/TwoIsland_Frlg/scripts.pory"

# 159 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_ShopExpanded3::
# 160 "data/maps/TwoIsland_Frlg/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded3
# 161 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox gText_PleaseComeAgain
# 162 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
# 163 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 164 "data/maps/TwoIsland_Frlg/scripts.pory"

# 165 "data/maps/TwoIsland_Frlg/scripts.pory"
	.align 2
# 166 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Items_ShopExpanded3::
# 167 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 168 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 169 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 170 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_LEMONADE
# 171 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_SODA_POP
# 172 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 173 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 174 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 175 "data/maps/TwoIsland_Frlg/scripts.pory"
	.2byte ITEM_NONE
# 176 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
# 177 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 178 "data/maps/TwoIsland_Frlg/scripts.pory"

# 179 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_Sailor::
# 180 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_FellowMovedFromCeladonCity, MSGBOX_NPC
# 181 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 182 "data/maps/TwoIsland_Frlg/scripts.pory"

# 183 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_Woman::
# 184 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_ShopkeepersBrotherWorksGameCorner, MSGBOX_NPC
# 185 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 186 "data/maps/TwoIsland_Frlg/scripts.pory"

# 187 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_Beauty::
# 188 "data/maps/TwoIsland_Frlg/scripts.pory"
	lock
# 189 "data/maps/TwoIsland_Frlg/scripts.pory"
	faceplayer
# 190 "data/maps/TwoIsland_Frlg/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 4
# 191 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_BrunoCameToIslandWhileBack
# 192 "data/maps/TwoIsland_Frlg/scripts.pory"
	release
# 193 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 194 "data/maps/TwoIsland_Frlg/scripts.pory"

# 195 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_SuperNerd::
# 196 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_BuyRareItemsHere, MSGBOX_NPC
# 197 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 198 "data/maps/TwoIsland_Frlg/scripts.pory"

# 199 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_Boy::
# 200 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_OldWomanLivesOutOnCape, MSGBOX_NPC
# 201 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 202 "data/maps/TwoIsland_Frlg/scripts.pory"

# 203 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_LittleBoy::
# 204 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_HaveYouTriedJumpingGame, MSGBOX_NPC
# 205 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 206 "data/maps/TwoIsland_Frlg/scripts.pory"

# 207 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_IslandSign::
# 208 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_IslandSign, MSGBOX_SIGN
# 209 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 210 "data/maps/TwoIsland_Frlg/scripts.pory"

# 211 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_JoyfulGameCornerSign::
# 212 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_JoyfulGameCornerSign, MSGBOX_SIGN
# 213 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 214 "data/maps/TwoIsland_Frlg/scripts.pory"

# 215 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_EventScript_FastCurrentSign::
# 216 "data/maps/TwoIsland_Frlg/scripts.pory"
	msgbox TwoIsland_Text_DangerFastCurrent, MSGBOX_SIGN
# 217 "data/maps/TwoIsland_Frlg/scripts.pory"
	end
# 218 "data/maps/TwoIsland_Frlg/scripts.pory"

# 219 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_IslandSign::
# 220 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "TWO ISLAND\n"
# 221 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Boon Island for Two$"
# 222 "data/maps/TwoIsland_Frlg/scripts.pory"

# 223 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_JoyfulGameCornerSign::
# 224 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Skip & Chomp!\n"
# 225 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Joyful GAME CORNER$"
# 226 "data/maps/TwoIsland_Frlg/scripts.pory"

# 227 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_DangerFastCurrent::
# 228 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "DANGER! FAST CURRENT!\n"
# 229 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Fishing and surfing prohibited!$"
# 230 "data/maps/TwoIsland_Frlg/scripts.pory"

# 231 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_WelcomeToShopMerchandiseLimited::
# 232 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Oh!\n"
# 233 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Hello, welcome to my shop!\p"
# 234 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "We've only opened up recently.\p"
# 235 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Our merchandise is limited, but I\n"
# 236 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "hope we can serve your needs.$"
# 237 "data/maps/TwoIsland_Frlg/scripts.pory"

# 238 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_AddedMerchandiseForLostelle::
# 239 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "I can't tell you how grateful I am\n"
# 240 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "for your rescue of LOSTELLE.\p"
# 241 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Thanks to your feat, the people of\n"
# 242 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "THREE ISLAND have changed their\l"
# 243 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "attitudes about KANTO people.\p"
# 244 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "And, I'm from KANTO, you see.\p"
# 245 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "The people of THREE ISLAND\n"
# 246 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "helped me add to my merchandise.$"
# 247 "data/maps/TwoIsland_Frlg/scripts.pory"

# 248 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_HopeYouGiveItYourBest::
# 249 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Hi! I'm giving it my best here.\n"
# 250 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "I hope you do too, {PLAYER}.$"
# 251 "data/maps/TwoIsland_Frlg/scripts.pory"

# 252 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_BringingItemsFromDistantLands::
# 253 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Oh, hello, {PLAYER}!\n"
# 254 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Welcome!\p"
# 255 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "I've started bringing in items from\n"
# 256 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "distant lands.\p"
# 257 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "I've got some rare items in, too.\n"
# 258 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Please have a look!$"
# 259 "data/maps/TwoIsland_Frlg/scripts.pory"

# 260 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_FellowMovedFromCeladonCity::
# 261 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "That fellow there, he moved here\n"
# 262 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "from CELADON CITY.\p"
# 263 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "He started up a shop with his\n"
# 264 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "younger brother.\p"
# 265 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "You have to wonder if he knew what\n"
# 266 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "he was getting into.$"
# 267 "data/maps/TwoIsland_Frlg/scripts.pory"

# 268 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_ShopkeepersBrotherWorksGameCorner::
# 269 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "The shopkeeper's brother took\n"
# 270 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "a job at the GAME CORNER.\p"
# 271 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "He's trying to pull together money\n"
# 272 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "so they can buy more merchandise.$"
# 273 "data/maps/TwoIsland_Frlg/scripts.pory"

# 274 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_BrunoCameToIslandWhileBack::
# 275 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Listen, listen.\n"
# 276 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Did you know?\p"
# 277 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "A famous TRAINER came to the\n"
# 278 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "ISLAND a little while back.\p"
# 279 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "He's one of the ELITE FOUR.\n"
# 280 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "His name is BRUNO.\p"
# 281 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "He went away disappointed when he\n"
# 282 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "found out that they were all sold\l"
# 283 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "out of Rage Candybars.$"
# 284 "data/maps/TwoIsland_Frlg/scripts.pory"

# 285 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_BuyRareItemsHere::
# 286 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "The discerning TRAINER knows to\n"
# 287 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "buy rare items here!$"
# 288 "data/maps/TwoIsland_Frlg/scripts.pory"

# 289 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_OldWomanLivesOutOnCape::
# 290 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "There's an old woman who lives in\n"
# 291 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "a cottage out on the cape.\p"
# 292 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "She gives the eye to POKéMON.\n"
# 293 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "It's a bit unnerving.$"
# 294 "data/maps/TwoIsland_Frlg/scripts.pory"

# 295 "data/maps/TwoIsland_Frlg/scripts.pory"
TwoIsland_Text_HaveYouTriedJumpingGame::
# 296 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Boing! Boing!\n"
# 297 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Have you tried the jumping game?\p"
# 298 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "The POKéMON you can enter…\n"
# 299 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Boing!\p"
# 300 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Some go boing!\p"
# 301 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "And some go boooooooing!\p"
# 302 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Did you know that?\n"
# 303 "data/maps/TwoIsland_Frlg/scripts.pory"
	.string "Boing!$"
