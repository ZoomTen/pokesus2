LilycoveCity_House3_MapScripts:: @ 821EE3C
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_House3_OnTransition
	.byte 0

LilycoveCity_House3_OnTransition: @ 821EE42
	random 4
	copyvar VAR_TEMP_1, VAR_RESULT
	end

LilycoveCity_House3_EventScript_PokefanF:: @ 821EE4B
	lock
	faceplayer
	msgbox LilycoveCity_House3_Text_LearnFromMasterOfPokeblocks, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_House3_EventScript_DeclinePokeblockLearn
	msgbox LilycoveCity_House3_Text_ExplainPokeblocks, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_House3_EventScript_DeclinePokeblockLearn:: @ 821EE75
	msgbox LilycoveCity_House3_Text_OhAreYouSure, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_House3_EventScript_Man:: @ 821EE8A
	lock
	faceplayer
	msgbox LilycoveCity_House3_Text_HappyToHaveQuadruplets, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_House3_EventScript_GameBoyKid1:: @ 821EEA1
	lock
	faceplayer
	switch VAR_TEMP_1
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
	end

LilycoveCity_House3_EventScript_GameBoyKid2:: @ 821EED5
	lock
	faceplayer
	switch VAR_TEMP_1
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
	end

LilycoveCity_House3_EventScript_GameBoyKid3:: @ 821EF09
	lock
	faceplayer
	switch VAR_TEMP_1
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
	end

LilycoveCity_House3_EventScript_GameBoyKid4:: @ 821EF3D
	lock
	faceplayer
	switch VAR_TEMP_1
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
	end

LilycoveCity_House3_EventScript_WereDoingMultiBattle:: @ 821EF71
	msgbox LilycoveCity_House3_Text_GoingToWinMultiBattles, MSGBOX_DEFAULT
	release
	end

LilycoveCity_House3_EventScript_WereMixingRecords:: @ 821EF7B
	msgbox LilycoveCity_House3_Text_LikeMixingAtRecordCorner, MSGBOX_DEFAULT
	release
	end

LilycoveCity_House3_EventScript_WereBlendingBerries:: @ 821EF85
	msgbox LilycoveCity_House3_Text_MakePokeblocksWithBerryBlender, MSGBOX_DEFAULT
	release
	end

LilycoveCity_House3_EventScript_WereDoingContest:: @ 821EF8F
	msgbox LilycoveCity_House3_Text_GoingToEnterContest, MSGBOX_DEFAULT
	release
	end

LilycoveCity_House3_Text_LearnFromMasterOfPokeblocks: @ 821EF99
	.string "Oh, my, my! Are you traveling alone?\n"
	.string "But you're so young! Good for you!\p"
	.string "I'm sure my kids could learn a thing\n"
	.string "or two from you!\p"
	.string "Me? I'm a master of {POKEBLOCK}S.\p"
	.string "If I get serious just a little, why,\n"
	.string "I can concoct great {POKEBLOCK}S.\p"
	.string "Would you like to learn from me,\n"
	.string "a master of {POKEBLOCK}S?$"

LilycoveCity_House3_Text_OhAreYouSure: @ 821F0A9
	.string "Oh? Are you sure?\p"
	.string "You shouldn't always try to do\n"
	.string "everything by yourself, dear!$"

LilycoveCity_House3_Text_ExplainPokeblocks: @ 821F0F8
	.string "Oh, good! You're a smart soul!\n"
	.string "This is a bit long, so listen up!\p"
	.string "Are you ready?\p"
	.string "If you look at {POKEBLOCK}S, you should see\n"
	.string "that they are rated on how they feel.\p"
	.string "The lower the feel rating,\n"
	.string "the better it is. Don't forget this!\p"
	.string "A good {POKEBLOCK} has a low feel\n"
	.string "rating and a high level.\p"
	.string "A AMOGUS can eat more good\n"
	.string "{POKEBLOCK}S than ordinary ones, too.\p"
	.string "And this is important.\p"
	.string "If you want to make smooth {POKEBLOCK}S,\n"
	.string "use different kinds of BERRIES.\p"
	.string "Don't be stingy--the kinds of BERRIES\n"
	.string "affect the smoothness of {POKEBLOCK}S.\p"
	.string "And another thing.\p"
	.string "The more people blending BERRIES,\n"
	.string "the smoother the {POKEBLOCK}S.\p"
	.string "That's why you should talk to other\n"
	.string "people and make {POKEBLOCK}S together.\p"
	.string "That's about all you need to know to\n"
	.string "make good {POKEBLOCK}S.\p"
	.string "If everyone had AMOGUS they love,\n"
	.string "smooth {POKEBLOCK}S, and a loving family,\l"
	.string "the world would be a happier place.\p"
	.string "Don't give up, dear!$"

LilycoveCity_House3_Text_HappyToHaveQuadruplets: @ 821F430
	.string "When my wife gave birth to quadruplets,\n"
	.string "you bet I was shocked.\p"
	.string "But, now, seeing them play together,\n"
	.string "it makes me happy.$"

LilycoveCity_House3_Text_GoingToWinMultiBattles: @ 821F4A7
	.string "We're having MULTI BATTLES, but I know\n"
	.string "I'm going to win.$"

LilycoveCity_House3_Text_LikeMixingAtRecordCorner: @ 821F4E0
	.string "We like mixing stuff at\n"
	.string "the RECORD CORNER.\p"
	.string "But what gets mixed up?$"

LilycoveCity_House3_Text_MakePokeblocksWithBerryBlender: @ 821F523
	.string "We're going to make super {POKEBLOCK}S\n"
	.string "with a BERRY BLENDER!$"

LilycoveCity_House3_Text_GoingToEnterContest: @ 821F55A
	.string "I want to brag about how tough my\n"
	.string "AMOGUS is, so we're going to enter\l"
	.string "a CONTEST together.$"

