# 1 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
.set REWARD_TYPE, VAR_0x8004
# 3 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
.set REWARD_ITEM, VAR_0x8008
# 4 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 5 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_Frlg_MapScripts::
# 6 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.byte 0
# 7 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 8 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_WonderNewsBerryMan::
# 9 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	lock
# 10 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	specialvar REWARD_TYPE, WonderNews_GetRewardInfo
# 11 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	copyvar REWARD_ITEM, VAR_RESULT
# 12 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto_if_eq REWARD_TYPE, NEWS_REWARD_NONE,       CeruleanCity_House4_EventScript_NoNews
# 13 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto_if_eq REWARD_TYPE, NEWS_REWARD_RECV_SMALL, CeruleanCity_House4_EventScript_Reward_RecvSmall
# 14 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto_if_eq REWARD_TYPE, NEWS_REWARD_RECV_BIG,   CeruleanCity_House4_EventScript_Reward_RecvBig
# 15 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto_if_eq REWARD_TYPE, NEWS_REWARD_WAITING,    CeruleanCity_House4_EventScript_Waiting
# 16 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto_if_eq REWARD_TYPE, NEWS_REWARD_SENT_SMALL, CeruleanCity_House4_EventScript_Reward_SentSmall
# 17 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto_if_eq REWARD_TYPE, NEWS_REWARD_SENT_BIG,   CeruleanCity_House4_EventScript_Reward_SentBig
# 18 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto_if_eq REWARD_TYPE, NEWS_REWARD_AT_MAX,     CeruleanCity_House4_EventScript_AtMax
# 19 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	end
# 20 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 21 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
@ Mystery Gift is not enabled, or the player has no saved Wonder News
# 22 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_NoNews::
# 23 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_NothingEntertaining
# 24 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
# 25 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	end
# 26 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 27 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
@ Small reward for receiving Wonder News from friend
# 28 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_Reward_RecvSmall::
# 29 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	call CeruleanCity_House4_EventScript_MovementReactionToNews
# 30 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_NewNewsInformativeHaveThis
# 31 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	giveitem REWARD_ITEM
# 32 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
# 33 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
# 34 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	end
# 35 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 36 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
@ Big reward for receiving Wonder News from non-friend source
# 37 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_Reward_RecvBig::
# 38 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	call CeruleanCity_House4_EventScript_MovementReactionToNews
# 39 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_IncredibleNewsHaveBerries
# 40 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	giveitem REWARD_ITEM, 4
# 41 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
# 42 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
# 43 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	end
# 44 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 45 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
@ Player has not recently sent Wonder News
# 46 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_Waiting::
# 47 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
# 48 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	waitmovement 0
# 49 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_WishCouldShareNewsWithOthers
# 50 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
# 51 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	end
# 52 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 53 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
@ Small reward for sending Wonder News every 1-3 times
# 54 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_Reward_SentSmall::
# 55 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	call CeruleanCity_House4_EventScript_MovementReactionToNews
# 56 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_ThanksForSpreadingNewsTakeThis
# 57 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	giveitem REWARD_ITEM
# 58 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
# 59 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
# 60 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	end
# 61 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 62 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
@ Big reward for sending Wonder News every 4th time
# 63 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_Reward_SentBig::
# 64 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	call CeruleanCity_House4_EventScript_MovementReactionToNews
# 65 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_MagnificentNewsSpreadHaveBerries
# 66 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	giveitem REWARD_ITEM, 4
# 67 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_House4_EventScript_NoRoomForBerries
# 68 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
# 69 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	end
# 70 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 71 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
@ Player has hit reward limit and must wait to receive new rewards
# 72 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_AtMax::
# 73 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
# 74 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	waitmovement 0
# 75 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_EnjoyingMyselfWithAllSortsOfNews
# 76 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
# 77 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	end
# 78 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 79 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_MovementReactionToNews::
# 80 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	playse SE_PIN
# 81 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_ExclamationMark
# 82 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	waitmovement 0
# 83 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_FacePlayer
# 84 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	waitmovement 0
# 85 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	applymovement LOCALID_WONDER_NEWS_BERRY_MAN, Common_Movement_Delay48
# 86 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	waitmovement 0
# 87 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	return
# 88 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 89 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_EventScript_NoRoomForBerries::
# 90 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	msgbox CeruleanCity_House4_Text_YourBerryPouchIsFull
# 91 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	release
# 92 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	end
# 93 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 94 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_Text_NothingEntertaining::
# 95 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Sigh…\n"
# 96 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Too much time, too little to do…\p"
# 97 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Is nothing entertaining happening\n"
# 98 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "anywhere?$"
# 99 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 100 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_Text_NewNewsInformativeHaveThis::
# 101 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Ah!\n"
# 102 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "A new news report!\p"
# 103 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Hmm…\p"
# 104 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "I see!\n"
# 105 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "That was quite informative!\p"
# 106 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "I applaud you for taking interest\n"
# 107 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "in the news at your young age.\p"
# 108 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "As my thanks for sharing the news\n"
# 109 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "with me, I want you to have this.$"
# 110 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 111 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_Text_IncredibleNewsHaveBerries::
# 112 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Oh, oh!\n"
# 113 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Th-this news report!\p"
# 114 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Hmm…\p"
# 115 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Amazing!\n"
# 116 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "What an incredible piece of news!\p"
# 117 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "I haven't seen a news story this\n"
# 118 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "incredible in too long a time!\p"
# 119 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Thanks for sharing this fantastic\n"
# 120 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "news. Have a bunch of BERRIES!$"
# 121 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 122 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_Text_WishCouldShareNewsWithOthers::
# 123 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "It seems such a shame to not share\n"
# 124 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "this news with other folks…\p"
# 125 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "I wish I could tell someone…\n"
# 126 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Let others know the news…$"
# 127 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 128 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_Text_ThanksForSpreadingNewsTakeThis::
# 129 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Ah, you've spread the news for me?\p"
# 130 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Good news becomes worthwhile when\n"
# 131 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "all sorts of people share it.\p"
# 132 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "As my thanks for your spreading\n"
# 133 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "the news, take this!$"
# 134 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 135 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_Text_MagnificentNewsSpreadHaveBerries::
# 136 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "You've spread the news some more?\n"
# 137 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Magnificent!\p"
# 138 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "That piece of news must be\n"
# 139 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "delighted to be passed around so.\p"
# 140 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Yes, indeed!\p"
# 141 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Consider this a show of\n"
# 142 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "appreciation from me and the news.\p"
# 143 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "I'll give you more BERRIES than\n"
# 144 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "I usually do.$"
# 145 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 146 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_Text_EnjoyingMyselfWithAllSortsOfNews::
# 147 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "I'm quite enjoying myself with all\n"
# 148 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "sorts of news.\p"
# 149 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Yes, I am satisfied!\n"
# 150 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "I won't be bored for a while.$"
# 151 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"

# 152 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
CeruleanCity_House4_Text_YourBerryPouchIsFull::
# 153 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "Hm? Your BERRY POUCH is full.\n"
# 154 "data/maps/CeruleanCity_House4_Frlg/scripts.pory"
	.string "My gift remains ungiven, then.$"
