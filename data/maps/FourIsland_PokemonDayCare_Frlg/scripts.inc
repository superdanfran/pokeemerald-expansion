# 1 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 2 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_Frlg_MapScripts::
# 3 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 5 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_EventScript_DaycareWoman::
# 6 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	lock
# 7 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 9 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_EGG_WAITING, FourIsland_PokemonDayCare_EggWaiting
# 10 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_OneMonInDaycare
# 11 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_TWO_MONS, FourIsland_PokemonDayCare_TwoMonsInDaycare
# 12 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WouldYouLikeUsToRaiseMon, MSGBOX_YESNO
# 13 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_GiveMonToRaise
# 14 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_FineThenComeAgain
# 15 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 16 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 17 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 18 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_GiveMonToRaise::
# 19 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 20 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 1, FourIsland_PokemonDayCare_OnlyOneMonInParty
# 21 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WhichMonShouldWeRaise
# 22 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 23 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special ChooseSendDaycareMon
# 24 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, FourIsland_PokemonDayCare_ComeAgain
# 25 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
# 26 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 0, FourIsland_PokemonDayCare_OnlyOneAliveMonInParty
# 27 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 28 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitse
# 29 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	playmoncry VAR_0x8005, CRY_MODE_NORMAL
# 30 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WellRaiseYourMon
# 31 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitmoncry
# 32 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special StoreSelectedPokemonInDaycare
# 33 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	callnative UpdateFollowingPokemon
# 34 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	incrementgamestat GAME_STAT_USED_DAYCARE
# 35 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 36 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_CanRaiseOneMore
# 37 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 38 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 39 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 40 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_ComeAgain::
# 41 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_ComeAgain
# 42 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 43 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 44 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 45 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_CanRaiseOneMore::
# 46 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 47 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_GiveMonToRaise
# 48 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 49 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 50 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 51 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_OnlyOneMonInParty::
# 52 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_YouHaveJustOneMon
# 53 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 54 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 55 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 56 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_OnlyOneAliveMonInParty::
# 57 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WhatWillYouBattleWith
# 58 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 59 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 60 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 61 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_EggWaiting::
# 62 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_HusbandWasLookingForYou
# 63 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 64 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 65 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 66 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_MonHasGrownXLevels::
# 67 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_YourMonHasGrownXLevels
# 68 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	return
# 69 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 70 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_DisplayLevelsGained::
# 71 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetNumLevelsGainedFromDaycare
# 72 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	call_if_ne VAR_RESULT, 0, FourIsland_PokemonDayCare_MonHasGrownXLevels
# 73 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	return
# 74 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 75 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_OneMonInDaycare::
# 76 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_GoodToSeeYou
# 77 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 78 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 79 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 80 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_GiveMonToRaise
# 81 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 82 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_TryRetrieveMon
# 83 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 84 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 85 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 86 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_TryRetrieveMon::
# 87 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 88 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FourIsland_PokemonDayCare_NoRoomInParty
# 89 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 90 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 91 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_CostPrompt
# 92 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special ShowDaycareLevelMenu
# 93 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 94 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_EXITED_LEVEL_MENU, FourIsland_PokemonDayCare_ComeAgain
# 95 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_CostPrompt
# 96 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 97 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 98 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_CostPrompt::
# 99 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special GetDaycareCost
# 100 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_ItWillCostX, MSGBOX_YESNO
# 101 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_CheckEnoughMoney
# 102 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 103 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 104 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 105 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_CheckEnoughMoney::
# 106 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
# 107 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FourIsland_PokemonDayCare_RetrieveMon
# 108 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_NotEnoughMoney
# 109 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 110 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 111 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 112 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_RetrieveMon::
# 113 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	applymovement LOCALID_FOUR_ISLAND_DAYCARE_WOMAN, FourIsland_PokemonDayCare_Movement_RetrieveMon
# 114 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitmovement 0
# 115 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 116 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special SubtractMoneyFromVar0x8005
# 117 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	playse SE_SHOP
# 118 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_HeresYourMon
# 119 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitse
# 120 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	playmoncry VAR_RESULT, CRY_MODE_NORMAL
# 121 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 122 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_TookBackMon
# 123 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 124 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	waitmoncry
# 125 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 126 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_AskRetrieveOtherMon
# 127 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 128 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 129 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 130 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_AskRetrieveOtherMon::
# 131 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_TakeOtherOneBackToo, MSGBOX_YESNO
# 132 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_TryRetrieveMon
# 133 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 134 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 135 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 136 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_NoRoomInParty::
# 137 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_YourPartyIsFull
# 138 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 139 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 140 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 141 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_Movement_RetrieveMon::
# 142 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 143 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 144 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	face_right
# 145 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 146 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 147 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	face_left
# 148 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 149 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 150 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	face_up
# 151 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	walk_slow_up
# 152 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	set_invisible
# 153 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 154 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 155 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 156 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 157 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	delay_16
# 158 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	face_down
# 159 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	set_visible
# 160 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	walk_slow_down
# 161 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	step_end
# 162 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 163 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
@ Unused. Possibly a commented script, or a typo end added to the above Movement script
# 164 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_EventScript_UnusedEnd::
# 165 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 166 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 167 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_TwoMonsInDaycare::
# 168 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_GoodToSeeYou
# 169 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 170 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 171 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	setvar VAR_0x8004, 1
# 172 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 173 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 174 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_TryRetrieveMon
# 175 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_ComeAgain
# 176 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 177 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
# 178 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"

# 179 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
@ Unused
# 180 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
FourIsland_PokemonDayCare_EventScript_UnusedRetrieveMon::
# 181 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	special ShowDaycareLevelMenu
# 182 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, 2, FourIsland_PokemonDayCare_ComeAgain
# 183 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 184 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 185 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_HeresYourMon
# 186 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	msgbox DayCare_Text_ComeAgain
# 187 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	release
# 188 "data/maps/FourIsland_PokemonDayCare_Frlg/scripts.pory"
	end
