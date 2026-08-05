# 1 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Frlg_MapScripts::
# 3 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 5 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_Clerk::
# 6 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	lock
# 7 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	faceplayer
# 8 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_BICYCLE, CeruleanCity_BikeShop_EventScript_AlreadyGotBicycle
# 9 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_BIKE_VOUCHER, CeruleanCity_BikeShop_EventScript_ExchangeBikeVoucher
# 10 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	showmoneybox 0, 0
# 11 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	message CeruleanCity_BikeShop_Text_WelcomeToBikeShop
# 12 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	waitmessage
# 13 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	multichoice 11, 0, MULTI_BIKE_SHOP, FALSE
# 14 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	hidemoneybox
# 15 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	showmoneybox 0, 0
# 16 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	switch VAR_RESULT
# 17 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	case 0, CeruleanCity_BikeShop_EventScript_TryPurchaseBicycle
# 18 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	case 1, CeruleanCity_BikeShop_EventScript_ClerkGoodbye
# 19 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	case 127, CeruleanCity_BikeShop_EventScript_ClerkGoodbye
# 20 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	end
# 21 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 22 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
@ The Bicycle price / players money is never actually checked
# 23 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_TryPurchaseBicycle::
# 24 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_SorryYouCantAffordIt
# 25 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto CeruleanCity_BikeShop_EventScript_ClerkGoodbye
# 26 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	end
# 27 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 28 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_ClerkGoodbye::
# 29 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_ThankYouComeAgain
# 30 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	hidemoneybox
# 31 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	release
# 32 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	end
# 33 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 34 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_ExchangeBikeVoucher::
# 35 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_OhBikeVoucherHereYouGo
# 36 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgreceiveditem CeruleanCity_BikeShop_Text_ExchangedVoucherForBicycle, ITEM_BICYCLE, 1, MUS_RG_OBTAIN_KEY_ITEM
# 37 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	setflag FLAG_GOT_BICYCLE
# 38 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	additem ITEM_BICYCLE
# 39 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	removeitem ITEM_BIKE_VOUCHER
# 40 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_ThankYouComeAgain
# 41 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	release
# 42 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	end
# 43 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 44 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_AlreadyGotBicycle::
# 45 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_HowDoYouLikeNewBicycle
# 46 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	release
# 47 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	end
# 48 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 49 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
@ Unused
# 50 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_NoRoomForBicycle::
# 51 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_MakeRoomForBicycle
# 52 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	release
# 53 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	end
# 54 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 55 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_Woman::
# 56 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_CityBikeGoodEnoughForMe, MSGBOX_NPC
# 57 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	end
# 58 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 59 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_Youngster::
# 60 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	lock
# 61 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	faceplayer
# 62 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_BICYCLE, CeruleanCity_BikeShop_EventScript_YoungsterHaveBike
# 63 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_BikesCoolButExpensive
# 64 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	release
# 65 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	end
# 66 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 67 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_YoungsterHaveBike::
# 68 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_WowYourBikeIsCool
# 69 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	release
# 70 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	end
# 71 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 72 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_EventScript_Bicycle::
# 73 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	msgbox CeruleanCity_BikeShop_Text_ShinyNewBicycle, MSGBOX_SIGN
# 74 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	end
# 75 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 76 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_WelcomeToBikeShop::
# 77 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Hi!\n"
# 78 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Welcome to our BIKE SHOP.\p"
# 79 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Have we got just the BIKE for\n"
# 80 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "you!$"
# 81 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 82 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_SorryYouCantAffordIt::
# 83 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Sorry!\n"
# 84 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "You can't afford it!$"
# 85 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 86 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_OhBikeVoucherHereYouGo::
# 87 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Oh, that's…\p"
# 88 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "A BIKE VOUCHER!\p"
# 89 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Okay!\n"
# 90 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Here you go!$"
# 91 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 92 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_ExchangedVoucherForBicycle::
# 93 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "{PLAYER} exchanged the\n"
# 94 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "BIKE VOUCHER for a BICYCLE.$"
# 95 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 96 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_ThankYouComeAgain::
# 97 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Thank you!\n"
# 98 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Come back again sometime!$"
# 99 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 100 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_HowDoYouLikeNewBicycle::
# 101 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "How do you like your new BICYCLE?\n"
# 102 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Do you like how it rides?\p"
# 103 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "You can take it out on CYCLING\n"
# 104 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "ROAD and even into caves!$"
# 105 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 106 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_MakeRoomForBicycle::
# 107 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "You better make room for your\n"
# 108 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "BICYCLE!$"
# 109 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 110 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_CityBikeGoodEnoughForMe::
# 111 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "A plain city bike is good enough\n"
# 112 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "for me.\p"
# 113 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "After all, you can't put a shopping\n"
# 114 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "basket on a mountain bike.$"
# 115 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 116 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_BikesCoolButExpensive::
# 117 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "These bikes are cool, but they're\n"
# 118 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "way expensive!$"
# 119 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 120 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_WowYourBikeIsCool::
# 121 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Wow.\n"
# 122 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "Your BIKE is really cool!$"
# 123 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 124 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
@ Unused
# 125 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_GermanFoldableBicyleFinallyOnMarket::
# 126 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "ついに　はつばい！\p"
# 127 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "ドイツ　せい　さいこうきゅう\n"
# 128 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "おりたたみ　じてんしゃ！$"
# 129 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"

# 130 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
CeruleanCity_BikeShop_Text_ShinyNewBicycle::
# 131 "data/maps/CeruleanCity_BikeShop_Frlg/scripts.pory"
	.string "A shiny new BICYCLE!$"
