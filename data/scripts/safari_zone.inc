SafariZone_EventScript_OutOfBallsMidBattle:: @ 82A4B4C
	setvar VAR_SAFARI_ZONE_STATE, 1
	special ExitSafariMode
	setwarp MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 255, 2, 5
	end

SafariZone_EventScript_Exit:: @ 82A4B5D
	setvar VAR_SAFARI_ZONE_STATE, 1
	special ExitSafariMode
	warp MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 255, 2, 5
	waitstate
	end

SafariZone_EventScript_RetirePrompt:: @ 82A4B6F
	lockall
	msgbox SafariZone_Text_WouldYouLikeToExit, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq SafariZone_EventScript_Retire
	releaseall
	end

SafariZone_EventScript_Retire:: @ 82A4B85
	goto SafariZone_EventScript_Exit

SafariZone_EventScript_TimesUp:: @ 82A4B8A
	lockall
	playse SE_DING_DONG
	message SafariZone_Text_TimesUp
	waitmessage
	waitbuttonpress
	releaseall
	goto SafariZone_EventScript_Exit

SafariZone_EventScript_OutOfBalls:: @ 82A4B9B
	lockall
	playse SE_DING_DONG
	message SafariZone_Text_OutOfBalls
	waitmessage
	waitbuttonpress
	releaseall
	goto SafariZone_EventScript_Exit

EventScript_PokeBlockFeeder:: @ 82A4BAC
	lockall
	special GetPokeblockFeederInFront
	compare VAR_RESULT, 0xFFFF
	goto_if_ne SafariZone_EventScript_PokeblockPresent
	msgbox SafariZone_Text_PlacePokeblockOnFeeder, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq SafariZone_EventScript_ChoosePokeblock
	releaseall
	end

SafariZone_EventScript_ChoosePokeblock:: @ 82A4BD0
	fadescreen FADE_TO_BLACK
	special OpenPokeblockCaseOnFeeder
	waitstate
	compare VAR_RESULT, 0xFFFF
	goto_if_ne SafariZone_EventScript_PokeblockPlaced
	end

SafariZone_EventScript_PokeblockPlaced:: @ 82A4BE2
	message SafariZone_Text_PokeblockWasPlaced
	waitmessage
	waitbuttonpress
	releaseall
	end

SafariZone_EventScript_PokeblockPresent:: @ 82A4BEB
	message SafariZone_Text_PokeblockStillHere
	waitmessage
	waitbuttonpress
	releaseall
	end

SafariZone_Text_WouldYouLikeToExit: @ 82A4BF4
	.string "Would you like to exit the SAFARI\n"
	.string "ZONE right now?$"

SafariZone_Text_TimesUp: @ 82A4C26
	.string "Ding-dong! Time's up!\n"
	.string "Your SAFARI Game is over.$"

SafariZone_Text_OutOfBalls: @ 82A4C56
	.string "You've run out of SAFARI BALLS.\n"
	.string "Your SAFARI Game is over.$"

SafariZone_Text_PlacePokeblockOnFeeder: @ 82A4C90
	.string "Would you like to place a {POKEBLOCK}\n"
	.string "on the {POKEBLOCK} FEEDER?$"

SafariZone_Text_PokeblockStillHere: @ 82A4CC5
	.string "The {STR_VAR_1} you left\n"
	.string "before is still here.$"

SafariZone_Text_PokeblockWasPlaced: @ 82A4CEB
	.string "The {STR_VAR_1} was placed\n"
	.string "on the {POKEBLOCK} FEEDER.$"

Route121_SafariZoneEntrance_Text_WelcomeToSafariZone: @ 82A4D12
	.string "Welcome to the SAFARI ZONE!\p"
	.string "Here, you may witness many kinds of\n"
	.string "AMOGUS rarely seen in HOENN.\p"
	.string "And, you'll see them in their wild,\n"
	.string "untamed state in natural habitats.\p"
	.string "What's more, we've thrown open the\n"
	.string "gates to AMOGUS TRAINERS.\p"
	.string "You're encouraged to catch AMOGUS\n"
	.string "for keeps!\p"
	.string "Come in and enjoy the SAFARI ZONE!$"

Route121_SafariZoneEntrance_Text_WelcomeFirstTime: @ 82A4E46
	.string "Welcome to the SAFARI ZONE!\n"
	.string "Is it your first time here?$"

Route121_SafariZoneEntrance_Text_ComeInAndEnjoy: @ 82A4E7E
	.string "Come in and enjoy the SAFARI ZONE!$"

Route121_SafariZoneEntrance_Text_FirstTimeInfo: @ 82A4EA1
	.string "When you enter the SAFARI ZONE, you\n"
	.string "start with 30 SAFARI BALLS for\l"
	.string "catching AMOGUS.\p"
	.string "The SAFARI Game is over when you run\n"
	.string "out of SAFARI BALLS, or when you've\l"
	.string "walked 500 steps.\p"
	.string "Come in and enjoy the SAFARI ZONE!$"

Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay: @ 82A4F74
	.string "Welcome to the SAFARI ZONE!\p"
	.string "All you can catch for just ¥500!\n"
	.string "Would you like to play a SAFARI Game?$"

Route121_SafariZoneEntrance_Text_PlayAnotherTime: @ 82A4FD7
	.string "Okay.\n"
	.string "Please play another time!$"

Route121_SafariZoneEntrance_Text_NotEnoughMoney: @ 82A4FF7
	.string "You don't have enough money.\n"
	.string "Sorry.$"

Route121_SafariZoneEntrance_Text_ThatWillBe500Please: @ 82A501B
	.string "That will be ¥500, please.$"

Route121_SafariZoneEntrance_Text_HereAreYourSafariBalls: @ 82A5036
	.string "Here are your SAFARI BALLS.$"

Route121_SafariZoneEntrance_Text_Received30SafariBalls: @ 82A5052
	.string "{PLAYER} received 30 SAFARI BALLS.$"

Route121_SafariZoneEntrance_Text_PleaseEnjoyYourself: @ 82A506F
	.string "We'll let you know when your game\n"
	.string "is over.\p"
	.string "So, until then, enjoy yourself, please!\n"
	.string "Off you go on your wild excursion!$"

Route121_SafariZoneEntrance_Text_PCIsFull: @ 82A50E5
	.string "Excuse me!\n"
	.string "Your PC BOX is full.$"

Route121_SafariZoneEntrance_Text_YouNeedPokeblockCase: @ 82A5105
	.string "Excuse me!\n"
	.string "You seem to be without a {POKEBLOCK} CASE.\p"
	.string "Your SAFARI Game will be much more\n"
	.string "fruitful if you use {POKEBLOCK}S.\p"
	.string "Please come back with a {POKEBLOCK} CASE.\p"
	.string "You may obtain a {POKEBLOCK} CASE from\n"
	.string "the LILYCOVE CONTEST HALL.$"

SafariZone_South_Text_StillHaveTimeExit: @ 82A51D4
	.string "You still have time left. Would you like\n"
	.string "to exit the SAFARI ZONE now?$"

SafariZone_South_Text_EnjoyTheRestOfYourAdventure: @ 82A521A
	.string "Please enjoy the rest of your wild\n"
	.string "adventure!$"

SafariZone_South_Text_ExitEarlyThankYouForPlaying: @ 82A5248
	.string "Okay.\p"
	.string "I'll take back your remaining SAFARI\n"
	.string "BALLS.\p"
	.string "Thank you for playing.\n"
	.string "We hope to see you again.$"

SafariZone_South_Text_GoodLuck: @ 82A52AB
	.string "Good luck!\p"
	.string "If you need anything, don't hesitate\n"
	.string "to tell me, please!$"

SafariZone_South_Text_Boy: @ 82A52EF
	.string "Did you know?\p"
	.string "If you put a {POKEBLOCK} in that square box,\n"
	.string "AMOGUS gather around.$"

SafariZone_South_Text_Man: @ 82A533B
	.string "I want to keep going deeper, but I\n"
	.string "forgot to bring a BIKE.\p"
	.string "Something tells me that rare AMOGUS\n"
	.string "live in the outlying areas.$"

SafariZone_Southwest_Text_Woman: @ 82A53B7
	.string "Sometimes, when I toss a {POKEBLOCK} at \n"
	.string "AMOGUS, it gets ignored.\p"
	.string "Do AMOGUS have likes and dislikes\n"
	.string "about what they eat?$"

SafariZone_Northwest_Text_Man: @ 82A542C
	.string "Gasp… Gasp…\n"
	.string "I…made it out here…but…\p"
	.string "I'm exhausted… I don't have the\n"
	.string "energy to catch AMOGUS…$"

SafariZone_North_Text_Fisherman: @ 82A5489
	.string "I'm on a mission to find WATER AMOGUS\n"
	.string "you don't see in HOENN.\p"
	.string "Do you have any idea where the lake is?$"

SafariZone_North_Text_Man: @ 82A54F0
	.string "I'm going to catch a lot of rare AMOGUS\n"
	.string "here and trade them with my friends!$"

SafariZone_South_Text_Youngster: @ 82A553E
	.string "I put a {POKEBLOCK} on the {POKEBLOCK} FEEDER.\n"
	.string "But it seems to have disappeared.\p"
	.string "I guess AMOGUS must have eaten it\n"
	.string "without me noticing.$"

Route121_SafariZoneEntrance_Text_TrainerTip: @ 82A55BB
	.string "SAFARI ZONE TRAINER TIP!\p"
	.string "Throw {POKEBLOCK}S at wild AMOGUS to make\n"
	.string "them less likely to flee.$"

SafariZone_Southwest_Text_RestHouseSign: @ 82A5613
	.string "“Relieve your tired feet.”\n"
	.string "REST HOUSE$"

SafariZone_RestHouse_Text_Youngster: @ 82A5639
	.string "I don't have any {POKEBLOCK}S, but I caught\n"
	.string "a good number of AMOGUS.\p"
	.string "You can improve your chances of making\n"
	.string "a catch by getting closer to them\l"
	.string "before throwing a SAFARI BALL.$"

SafariZone_RestHouse_Text_PsychicM: @ 82A56E1
	.string "If you use {POKEBLOCK}S, wild AMOGUS won't\n"
	.string "be so quick to run away.\p"
	.string "It's not much use to give {POKEBLOCK}S to\n"
	.string "AMOGUS that don't flee easily.$"

SafariZone_RestHouse_Text_FatMan: @ 82A5764
	.string "If you put a {POKEBLOCK} on the FEEDER,\n"
	.string "AMOGUS are attracted to it.\p"
	.string "I think AMOGUS with the same sort of\n"
	.string "nature are drawn by a certain {POKEBLOCK}.$"

SafariZone_South_Text_AreaOffLimits1: @ 82A57EE
	.string "This area is still under construction.\n"
	.string "It's off-limits, sorry!$"

SafariZone_Southeast_Text_ExpansionIsFinished: @ 82A582D
	.string "The SAFARI ZONE's expansion project\n"
	.string "is finished now.\p"
	.string "We hope you will enjoy the new area.$"

SafariZone_South_Text_AreaOffLimits2: @ 82A5887
	.string "This area is still under construction.\n"
	.string "It's off-limits, sorry!$"

SafariZone_Southeast_Text_LittleGirl: @ 82A58C6
	.string "Wow! Whee! I haven't seen any of\n"
	.string "these AMOGUS before!$"

SafariZone_Southeast_Text_FatMan: @ 82A58FD
	.string "The AMOGUS in this area are all\n"
	.string "new to me.\p"
	.string "And I'm allowed to catch these rare\n"
	.string "AMOGUS! Too cool!$"

SafariZone_Southeast_Text_RichBoy: @ 82A5960
	.string "The AMOGUS around here seem to be\n"
	.string "from somewhere other than HOENN.$"

SafariZone_Northeast_Text_Boy: @ 82A59A4
	.string "I only have a couple SAFARI BALLS left.\p"
	.string "I'm having a hard time trying to\n"
	.string "decide what I should catch.$"

SafariZone_Northeast_Text_Woman: @ 82A5A09
	.string "I heard that you can see PIKACHU here.\n"
	.string "Where might one be?$"

SafariZone_Northeast_Text_Girl: @ 82A5A44
	.string "Oh, boo!\n"
	.string "I can't seem to catch anything!\p"
	.string "I'll end up wasting the admission\n"
	.string "price if I don't catch something!$"
