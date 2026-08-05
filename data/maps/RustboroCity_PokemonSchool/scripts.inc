RustboroCity_PokemonSchool_EventScript_Nemona::
# 33 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 34 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 35 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_NEMONA_RUSTBORO, RustboroCity_PokemonSchool_EventScript_Nemona_2
# 38 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_NemonaIntro, MSGBOX_DEFAULT
# 39 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 40 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_NemonaBattle
RustboroCity_PokemonSchool_EventScript_Nemona_1:
# 42 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end

RustboroCity_PokemonSchool_EventScript_Nemona_2:
# 36 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_NemonaSpokeAlready
	goto RustboroCity_PokemonSchool_EventScript_Nemona_1


RustboroCity_PokemonSchool_NemonaBattle::
# 47 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_NemonaLetsBattle, MSGBOX_DEFAULT
# 48 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_STARTER_MON
# 49 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 0, RustboroCity_PokemonSchool_NemonaBattle_3
# 50 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 1, RustboroCity_PokemonSchool_NemonaBattle_4
# 51 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 2, RustboroCity_PokemonSchool_NemonaBattle_5
RustboroCity_PokemonSchool_NemonaBattle_1:
	end

RustboroCity_PokemonSchool_NemonaBattle_3:
# 49 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_NemonaBattleSprigatito
	goto RustboroCity_PokemonSchool_NemonaBattle_1

RustboroCity_PokemonSchool_NemonaBattle_4:
# 50 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_NemonaBattleFuecoco
	goto RustboroCity_PokemonSchool_NemonaBattle_1

RustboroCity_PokemonSchool_NemonaBattle_5:
# 51 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_NemonaBattleQuaxly
	goto RustboroCity_PokemonSchool_NemonaBattle_1


RustboroCity_PokemonSchool_EventScript_NemonaBattleSprigatito::
# 56 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_NEMONA_SCHOOL_SPRIGATITO, RustboroCity_PokemonSchool_Text_NemonaDefeated
# 57 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_NemonaDefeated
	end


RustboroCity_PokemonSchool_EventScript_NemonaBattleFuecoco::
# 62 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_NEMONA_SCHOOL_FUECOCO, RustboroCity_PokemonSchool_Text_NemonaDefeated
# 63 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_NemonaDefeated
	end


RustboroCity_PokemonSchool_EventScript_NemonaBattleQuaxly::
# 68 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_NEMONA_SCHOOL_QUAXLY, RustboroCity_PokemonSchool_Text_NemonaDefeated
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_NemonaDefeated
	end


RustboroCity_PokemonSchool_EventScript_NemonaDefeated::
# 84 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_NemonaTakeThis, MSGBOX_DEFAULT
# 85 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call RustboroCity_PokemonSchool_EventScript_GiveTeraOrb
# 86 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_NemonaExplainTeraOrb, MSGBOX_DEFAULT
# 87 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 88 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_NEMONA_RUSTBORO
	end


RustboroCity_PokemonSchool_EventScript_GiveTeraOrb::
# 101 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_TERA_ORB
# 102 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitfanfare
# 103 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag B_FLAG_TERA_ORB_CHARGED
	return


RustboroCity_PokemonSchool_EventScript_NemonaSpokeAlready::
# 108 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_GoodLuck, MSGBOX_DEFAULT
# 109 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


RustboroCity_PokemonSchool_EventScript_Dendra::
# 114 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 115 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 116 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_unset FLAG_MET_NEMONA_RUSTBORO, RustboroCity_PokemonSchool_EventScript_Dendra_2
# 118 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_DENDRA_BATTLE, RustboroCity_PokemonSchool_EventScript_Dendra_3
# 120 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_DENDRA_TRADE_DONE, RustboroCity_PokemonSchool_EventScript_Dendra_4
# 122 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_DENDRA_RUSTBORO, RustboroCity_PokemonSchool_EventScript_Dendra_5
# 125 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_DendraIntro, MSGBOX_DEFAULT
# 126 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_DendraWantToBattle
RustboroCity_PokemonSchool_EventScript_Dendra_1:
# 128 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end

RustboroCity_PokemonSchool_EventScript_Dendra_2:
# 117 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_DendraTalkToNemona
	goto RustboroCity_PokemonSchool_EventScript_Dendra_1

RustboroCity_PokemonSchool_EventScript_Dendra_3:
# 119 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_DendraTrade
	goto RustboroCity_PokemonSchool_EventScript_Dendra_1

RustboroCity_PokemonSchool_EventScript_Dendra_4:
# 121 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_DendraTradeCompleted
	goto RustboroCity_PokemonSchool_EventScript_Dendra_1

RustboroCity_PokemonSchool_EventScript_Dendra_5:
# 123 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_DendraSpokeAlready
	goto RustboroCity_PokemonSchool_EventScript_Dendra_1


RustboroCity_PokemonSchool_EventScript_DendraTalkToNemona::
# 133 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_DendraTalkToNemona, MSGBOX_DEFAULT
# 134 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


RustboroCity_PokemonSchool_EventScript_DendraWantToBattle::
# 139 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_DendraWantToBattle, MSGBOX_DEFAULT
# 140 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 141 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 0, FALSE
# 142 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 143 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 0, RustboroCity_PokemonSchool_EventScript_DendraWantToBattle_3
# 145 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 1, RustboroCity_PokemonSchool_EventScript_DendraWantToBattle_4
RustboroCity_PokemonSchool_EventScript_DendraWantToBattle_1:
# 148 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end

RustboroCity_PokemonSchool_EventScript_DendraWantToBattle_3:
# 144 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_DendraBattle
	goto RustboroCity_PokemonSchool_EventScript_DendraWantToBattle_1

RustboroCity_PokemonSchool_EventScript_DendraWantToBattle_4:
# 146 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_DendraBattleLater
	goto RustboroCity_PokemonSchool_EventScript_DendraWantToBattle_1


RustboroCity_PokemonSchool_EventScript_DendraBattle::
# 153 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	trainerbattle_no_intro TRAINER_DENDRA, RustboroCity_PokemonSchool_Text_DendraDefeated
# 154 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_DendraDefeated
	end


RustboroCity_PokemonSchool_EventScript_DendraBattleLater::
# 159 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_DendraBattleLater, MSGBOX_DEFAULT
# 160 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


RustboroCity_PokemonSchool_EventScript_DendraDefeated::
# 165 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_DendraGift, MSGBOX_DEFAULT
# 166 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_DENDRA_BATTLE
	end


RustboroCity_PokemonSchool_EventScript_DendraTrade::
# 171 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_DendraWantToTrade, MSGBOX_DEFAULT
# 172 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 173 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 0, FALSE
# 174 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 175 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 0, RustboroCity_PokemonSchool_EventScript_DendraTrade_3
# 177 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 1, RustboroCity_PokemonSchool_EventScript_DendraTrade_4
# 179 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_DendraTrade_5
RustboroCity_PokemonSchool_EventScript_DendraTrade_1:
	return

RustboroCity_PokemonSchool_EventScript_DendraTrade_3:
# 176 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_DendraTradeAccepted
	goto RustboroCity_PokemonSchool_EventScript_DendraTrade_1

RustboroCity_PokemonSchool_EventScript_DendraTrade_4:
# 178 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_DendraTradeLater
	goto RustboroCity_PokemonSchool_EventScript_DendraTrade_1

RustboroCity_PokemonSchool_EventScript_DendraTrade_5:
# 180 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_DendraTradeLater
	goto RustboroCity_PokemonSchool_EventScript_DendraTrade_1


# 185 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 186 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_DendraTradeAccepted::
# 187 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_DENDRA_TRADE_DONE, RustboroCity_PokemonSchool_EventScript_DendraTradeCompleted
# 188 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MEDITITE
# 189 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 190 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 191 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 192 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	special ChoosePartyMon
# 193 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitstate
# 194 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 195 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, RustboroCity_PokemonSchool_EventScript_DendraTradeLater
# 196 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 197 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 198 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 199 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 200 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 201 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	special CreateInGameTradePokemon
# 202 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	special DoInGameTradeScene
# 203 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitstate
# 204 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_DendraGoodLuck, MSGBOX_DEFAULT
# 205 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_DENDRA_TRADE_DONE
# 206 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 207 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end

RustboroCity_PokemonSchool_EventScript_DendraTradeLater::
# 211 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_DendraTradeLater, MSGBOX_DEFAULT
# 212 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


RustboroCity_PokemonSchool_EventScript_DendraTradeCompleted::
# 217 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_DendraGoodLuck, MSGBOX_DEFAULT
# 218 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


RustboroCity_PokemonSchool_EventScript_DendraSpokeAlready::
# 223 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_DendraGoodLuck, MSGBOX_DEFAULT
# 224 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
	end


# 228 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 229 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_MapScripts::
# 230 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.byte 0
# 231 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 232 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Blackboard::
# 233 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lockall
# 234 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
# 235 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 236 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 237 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 238 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
# 239 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
# 240 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 241 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
# 242 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 243 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 0, RustboroCity_PokemonSchool_EventScript_Poison
# 244 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 1, RustboroCity_PokemonSchool_EventScript_Paralysis
# 245 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 2, RustboroCity_PokemonSchool_EventScript_Sleep
# 246 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 3, RustboroCity_PokemonSchool_EventScript_Burn
# 247 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 4, RustboroCity_PokemonSchool_EventScript_Freeze
# 248 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 5, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
# 249 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
# 250 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 251 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 252 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Poison::
# 253 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainPoison, MSGBOX_DEFAULT
# 254 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 255 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 256 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 257 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Paralysis::
# 258 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainParalysis, MSGBOX_DEFAULT
# 259 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 260 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 261 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 262 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Sleep::
# 263 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainSleep, MSGBOX_DEFAULT
# 264 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 265 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 266 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 267 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Burn::
# 268 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainBurn, MSGBOX_DEFAULT
# 269 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 270 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 271 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 272 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Freeze::
# 273 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainFreeze, MSGBOX_DEFAULT
# 274 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 275 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 276 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 277 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ExitTopicSelect::
# 278 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	releaseall
# 279 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 280 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 281 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GameboyKid1::
# 282 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_TradingRightNow, MSGBOX_NPC
# 283 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 284 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 285 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GameboyKid2::
# 286 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot, MSGBOX_NPC
# 287 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 288 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 289 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_RichBoy::
# 290 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems, MSGBOX_NPC
# 291 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 292 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 293 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Lass::
# 294 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself, MSGBOX_NPC
# 295 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 296 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 297 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_SchoolKidM::
# 298 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry, MSGBOX_NPC
# 299 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 300 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 301 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_StudentNotebook::
# 302 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
# 303 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 304 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 305 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Teacher::
# 306 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 307 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 308 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_GaveQuickClaw
# 309 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast
# 310 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest
# 311 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw, MSGBOX_DEFAULT
# 312 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 313 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 314 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 315 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 316 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 317 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_RECEIVED_QUICK_CLAW
# 318 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 319 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 320 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 321 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast::
# 322 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast
# 323 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 324 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	return
# 325 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 326 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest::
# 327 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest
# 328 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 329 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	return
# 330 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 331 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GaveQuickClaw::
# 332 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainQuickClaw, MSGBOX_DEFAULT
# 333 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 334 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 335 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 336 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 337 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 338 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 339 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest:
# 340 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 341 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 342 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 343 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 344 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 345 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 346 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 347 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 348 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 349 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 350 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 351 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 352 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 353 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 354 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 355 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 356 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 357 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 358 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 359 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 360 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 361 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 362 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 363 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 364 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast:
# 365 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 366 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 367 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 368 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 369 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 370 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 371 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 372 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 373 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 374 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 375 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 376 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 377 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 378 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 379 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 380 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 381 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 382 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 383 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 384 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 385 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 386 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 387 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 388 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 389 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 390 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 391 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Scott::
# 392 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 393 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 394 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE, RustboroCity_PokemonSchool_EventScript_ScottWatchStudents
# 395 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready
# 396 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge
# 397 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut, MSGBOX_DEFAULT
# 398 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 399 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_RUSTBORO
# 400 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 401 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 402 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 403 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready::
# 404 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge
# 405 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
# 406 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 407 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 408 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 409 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge::
# 410 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge, MSGBOX_DEFAULT
# 411 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
# 412 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 413 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 414 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge::
# 415 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottStoneBadge, MSGBOX_DEFAULT
# 416 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
# 417 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 418 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 419 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge::
# 420 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 421 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
# 422 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 423 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 424 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 425 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottWatchStudents::
# 426 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
# 427 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 428 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 429 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 430 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges:
# 431 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The blackboard lists status changes\n"
# 432 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "that may affect POKéMON in battle.$"
# 433 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 434 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ReadWhichTopic:
# 435 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Which topic do you want to read?$"
# 436 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 437 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainPoison:
# 438 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON is poisoned, it will\n"
# 439 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "steadily lose HP.\p"
# 440 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The effects of poison remain after\n"
# 441 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a battle.\p"
# 442 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A poisoned POKéMON's HP will drop\n"
# 443 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "while it is traveling.\p"
# 444 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Heal a poisoning using an ANTIDOTE.$"
# 445 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 446 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainParalysis:
# 447 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON becomes paralyzed,\n"
# 448 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "its SPEED drops.\p"
# 449 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It may also not be able to move while\n"
# 450 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "it is in battle.\p"
# 451 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Paralysis remains after battle.\n"
# 452 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Cure it using a PARLYZ HEAL.$"
# 453 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 454 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainSleep:
# 455 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON falls asleep, it will be\n"
# 456 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "unable to attack.\p"
# 457 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A POKéMON may wake up on its own,\n"
# 458 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "but if a battle ends while it is\l"
# 459 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "sleeping, it will stay asleep.\p"
# 460 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Wake it up using an AWAKENING.$"
# 461 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 462 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainBurn:
# 463 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A burn reduces ATTACK power, and it\n"
# 464 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "steadily reduces the victim's HP.\p"
# 465 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A burn lingers after battle.\n"
# 466 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Cure a burn using a BURN HEAL.$"
# 467 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 468 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainFreeze:
# 469 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON is frozen, it becomes\n"
# 470 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "completely helpless.\p"
# 471 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It will remain frozen after battle.\n"
# 472 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Thaw it out using an ICE HEAL.$"
# 473 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 474 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw:
# 475 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Students who don't study get a little\n"
# 476 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "taste of my QUICK CLAW.\p"
# 477 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Whether or not you are a good student \n"
# 478 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "will be evident from the way you use\l"
# 479 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "this item.$"
# 480 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 481 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainQuickClaw:
# 482 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A POKéMON holding the QUICK CLAW will\n"
# 483 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "occasionally speed up and get to move\l"
# 484 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "before its opponent.\p"
# 485 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "There are many other items that are\n"
# 486 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "meant to be held by POKéMON.\p"
# 487 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Just those alone will give you many\n"
# 488 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "topics to study!$"
# 489 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 490 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_TradingRightNow:
# 491 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I'm trading POKéMON with my friend\n"
# 492 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "right now.$"
# 493 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 494 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot:
# 495 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I always wanted a SEEDOT, and\n"
# 496 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I'm finally getting one!$"
# 497 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 498 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems:
# 499 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON can hold items, but they\n"
# 500 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "don't know what to do with man-made\l"
# 501 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "items like POTION and ANTIDOTE.$"
# 502 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 503 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself:
# 504 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "You know how some POKéMON moves can\n"
# 505 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "confuse a POKéMON?\p"
# 506 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A confused POKéMON will sometimes\n"
# 507 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "attack itself without meaning to.\p"
# 508 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "But once it leaves battle, it will\n"
# 509 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "return to normal.$"
# 510 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 511 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry:
# 512 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A POKéMON holding a BERRY will heal\n"
# 513 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "itself…\p"
# 514 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "There are many kinds of items that\n"
# 515 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON can hold…\p"
# 516 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Boy, it sure is hard taking notes\n"
# 517 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "down…$"
# 518 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 519 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentsNotes:
# 520 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's this student's notebook…\p"
# 521 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON are to be caught using\n"
# 522 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKé BALLS.\p"
# 523 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Up to six POKéMON can accompany\n"
# 524 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a TRAINER.\p"
# 525 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A TRAINER is someone who catches\n"
# 526 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON, raises them, and battles\l"
# 527 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "with them.\p"
# 528 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A TRAINER's mission is to defeat\n"
# 529 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "the strong TRAINERS who await\l"
# 530 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "challengers in POKéMON GYMS.$"
# 531 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 532 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut:
# 533 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hello? Didn't we meet before?\n"
# 534 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I think back in PETALBURG CITY.\p"
# 535 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Let me introduce myself.\n"
# 536 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "My name's SCOTT.\p"
# 537 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I've been traveling everywhere in\n"
# 538 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "search of outstanding TRAINERS.\p"
# 539 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "More specifically, I'm looking for\n"
# 540 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON battle experts.\p"
# 541 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "So, what brings you to this SCHOOL?\n"
# 542 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Are you a TRAINER, too?\p"
# 543 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The first thing you should do is to\n"
# 544 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "have a POKéMON learn the move CUT.\p"
# 545 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If I remember correctly, someone in\n"
# 546 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "this town has CUT.$"
# 547 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 548 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown:
# 549 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "SCOTT: Hmm…\p"
# 550 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The talent levels of the students here\n"
# 551 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "are unknown. The potential's there.$"
# 552 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 553 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottStoneBadge:
# 554 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "SCOTT: Oh, what's that?\p"
# 555 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's a STONE BADGE, isn't it?\n"
# 556 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "That's pretty impressive, I'd say.\p"
# 557 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "But, you know, I would've loved to see\n"
# 558 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "you in battle.\p"
# 559 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's hard to tell what you're like as\n"
# 560 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a TRAINER from a LEAGUE BADGE.$"
# 561 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 562 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge:
# 563 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hello? Didn't we meet before?\n"
# 564 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I think back in PETALBURG CITY.\p"
# 565 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Let me introduce myself.\n"
# 566 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "My name's SCOTT.\p"
# 567 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I've been traveling everywhere in\n"
# 568 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "search of outstanding TRAINERS.\p"
# 569 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "More specifically, I'm looking for\n"
# 570 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON battle experts.\p"
# 571 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Oh, what's that?\n"
# 572 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's a STONE BADGE, isn't it?\p"
# 573 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "That's pretty impressive, I'd say, for\n"
# 574 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a starting TRAINER like yourself.\p"
# 575 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "But, you know, I would've loved to see\n"
# 576 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "you in battle.\p"
# 577 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's hard to tell what you're like as\n"
# 578 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a TRAINER from a LEAGUE BADGE.$"

RustboroCity_PokemonSchool_Text_DendraIntro::
# 1 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Osu, kid! You here to train for the gym?\n"
	.string "I see the fighting spirit in your eyes!\p"
	.string "Call me DENDRA. I'm NEMONA's instructor\n"
	.string "at the NARANJA ACADEMY.$"

RustboroCity_PokemonSchool_Text_GoodLuck::
# 5 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "NEMONA: Good luck with ROXANNE! Don't\n"
	.string "forget to TERASTALIZE!$"

RustboroCity_PokemonSchool_Text_DendraWantToBattle::
# 8 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "DENDRA: Want to warm up for your\n"
	.string "battle? If you beat me I can give you\l"
	.string "something that will thrash ROXANNE!$"

RustboroCity_PokemonSchool_Text_DendraWantToTrade::
# 11 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "You beat me fair and square. How about\n"
	.string "we trade?$"

RustboroCity_PokemonSchool_Text_DendraTalkToNemona::
# 14 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hey, kid. That girl at the front wants to\n"
	.string "talk to you.$"

RustboroCity_PokemonSchool_Text_DendraBattleLater::
# 17 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hey, I don't mind waiting!$"

RustboroCity_PokemonSchool_Text_DendraDefeated::
# 20 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "DENDRA: No way! I got crushed!$"

RustboroCity_PokemonSchool_Text_DendraGift::
# 23 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Thanks for the battle! I got a lot out\n"
	.string "of this. Us adults are learning every\l"
	.string "day too! But, you beat me fair and\l"
	.string "square. How about we trade?$"

RustboroCity_PokemonSchool_Text_DendraGoodLuck::
# 26 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Look after little Sippy for me!$"

RustboroCity_PokemonSchool_Text_DendraTradeLater::
# 29 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "We can always trade later!$"

RustboroCity_PokemonSchool_Text_NemonaIntro::
# 73 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Buenas! The professor told me you'd be\n"
	.string "coming here!. I've been dying to meet\l"
	.string "you! I'm NEMONA. I'm visiting from the\l"
	.string "PALDEA region with my SCHOOL, the\l"
	.string "NARANJA ACADEMY.$"

RustboroCity_PokemonSchool_Text_NemonaLetsBattle::
# 76 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "How about you show me all you've\n"
	.string "learned ... in a battle?$"

RustboroCity_PokemonSchool_Text_NemonaDefeated::
# 79 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Amazing! Look at you! Such potential!$"

RustboroCity_PokemonSchool_Text_NemonaTakeThis::
# 92 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I know what's gonna really spice up your\n"
	.string "battling, {PLAYER}! Take this, straight\l"
	.string "from PALDEA!$"

RustboroCity_PokemonSchool_Text_NemonaExplainTeraOrb::
# 96 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "NEMONA: That's a TERA ORB. It can\n"
	.string "change the type of your POKéMON during\l"
	.string "battle and give them a huge power\l"
	.string "boost! I hope it gives you an edge over\l"
	.string "ROXANNE! Press START in battle when\l"
	.string "you select a move and see what\l"
	.string "happens! But watch out, you can only\l"
	.string "use it once per battle!$"
