BattleFrontier_Lounge2_MapScripts:: @ 8260642
	.byte 0

@ This NPC gives hints about a random facility or battle mode.
@ For battle modes he gives generic advice 
@ For facilities, depending on how far the player has progressed he will say either
@    The name of the Frontier Brain there
@    The type and description of the 3 pokemon they use in their silver battle
@    The type and description of the 3 pokemon they use in their gold battle
BattleFrontier_Lounge2_EventScript_FrontierManiac:: @ 8260643
	lock
	faceplayer
	goto_if_set FLAG_MET_BATTLE_FRONTIER_MANIAC, BattleFrontier_Lounge2_EventScript_AlreadyMetManiac
	setflag FLAG_MET_BATTLE_FRONTIER_MANIAC
	msgbox BattleFrontier_Lounge2_Text_FrontierManiacIntro, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice
	end

BattleFrontier_Lounge2_EventScript_AlreadyMetManiac:: @ 826065F
	msgbox BattleFrontier_Lounge2_Text_SwingByForTheLatestWord, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge2_EventScript_GiveAdvice
	end

BattleFrontier_Lounge2_EventScript_GiveAdvice:: @ 826066D
	compare VAR_FRONTIER_MANIAC_FACILITY, 0
	call_if_eq BattleFrontier_Lounge2_EventScript_BufferSingle
	compare VAR_FRONTIER_MANIAC_FACILITY, 1
	call_if_eq BattleFrontier_Lounge2_EventScript_BufferDouble
	compare VAR_FRONTIER_MANIAC_FACILITY, 2
	call_if_eq BattleFrontier_Lounge2_EventScript_BufferMulti
	compare VAR_FRONTIER_MANIAC_FACILITY, 3
	call_if_eq BattleFrontier_Lounge2_EventScript_BufferMultiLink
	compare VAR_FRONTIER_MANIAC_FACILITY, 4
	call_if_eq BattleFrontier_Lounge2_EventScript_BufferBattleDome
	compare VAR_FRONTIER_MANIAC_FACILITY, 5
	call_if_eq BattleFrontier_Lounge2_EventScript_BufferBattleFactory
	compare VAR_FRONTIER_MANIAC_FACILITY, 6
	call_if_eq BattleFrontier_Lounge2_EventScript_BufferBattlePalace
	compare VAR_FRONTIER_MANIAC_FACILITY, 7
	call_if_eq BattleFrontier_Lounge2_EventScript_BufferBattleArena
	compare VAR_FRONTIER_MANIAC_FACILITY, 8
	call_if_eq BattleFrontier_Lounge2_EventScript_BufferBattlePike
	compare VAR_FRONTIER_MANIAC_FACILITY, 9
	call_if_eq BattleFrontier_Lounge2_EventScript_BufferBattlePyramid
	compare VAR_FRONTIER_MANIAC_FACILITY, 3
	call_if_le BattleFrontier_Lounge2_EventScript_BattleTowerNews
	compare VAR_FRONTIER_MANIAC_FACILITY, 4
	call_if_ge BattleFrontier_Lounge2_EventScript_FacilityNews
	special ShowFrontierManiacMessage
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_Lounge2_EventScript_BattleTowerNews:: @ 82606F8
	msgbox BattleFrontier_Lounge2_Text_BattleTowerIsHottest, MSGBOX_DEFAULT
	return

BattleFrontier_Lounge2_EventScript_FacilityNews:: @ 8260701
	msgbox BattleFrontier_Lounge2_Text_FacilityIsHottest, MSGBOX_DEFAULT
	return

BattleFrontier_Lounge2_EventScript_BufferSingle:: @ 826070A
	bufferstdstring 0, STDSTRING_SINGLE
	return

BattleFrontier_Lounge2_EventScript_BufferDouble:: @ 826070F
	bufferstdstring 0, STDSTRING_DOUBLE
	return

BattleFrontier_Lounge2_EventScript_BufferMulti:: @ 8260714
	bufferstdstring 0, STDSTRING_MULTI
	return

BattleFrontier_Lounge2_EventScript_BufferMultiLink:: @ 8260719
	bufferstdstring 0, STDSTRING_MULTI_LINK
	return

BattleFrontier_Lounge2_EventScript_BufferBattleDome:: @ 826071E
	bufferstdstring 0, STDSTRING_BATTLE_DOME
	return

BattleFrontier_Lounge2_EventScript_BufferBattleFactory:: @ 8260723
	bufferstdstring 0, STDSTRING_BATTLE_FACTORY
	return

BattleFrontier_Lounge2_EventScript_BufferBattlePalace:: @ 8260728
	bufferstdstring 0, STDSTRING_BATTLE_PALACE
	return

BattleFrontier_Lounge2_EventScript_BufferBattleArena:: @ 826072D
	bufferstdstring 0, STDSTRING_BATTLE_ARENA
	return

BattleFrontier_Lounge2_EventScript_BufferBattlePike:: @ 8260732
	bufferstdstring 0, STDSTRING_BATTLE_PIKE
	return

BattleFrontier_Lounge2_EventScript_BufferBattlePyramid:: @ 8260737
	bufferstdstring 0, STDSTRING_BATTLE_PYRAMID
	return

BattleFrontier_Lounge2_EventScript_Maniac1:: @ 826073C
	lock
	msgbox BattleFrontier_Lounge2_Text_NewsGatheringPower, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge2_EventScript_Maniac2:: @ 8260747
	lock
	msgbox BattleFrontier_Lounge2_Text_AmazingPowersOfObservation, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge2_EventScript_Maniac3:: @ 8260752
	lock
	msgbox BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge2_EventScript_TriathleteF:: @ 826075D
	msgbox BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe, MSGBOX_NPC
	end

BattleFrontier_Lounge2_Text_FrontierManiacIntro:: @ 8260766
	.string "Howdy! When it comes to news about\n"
	.string "the BATTLE FRONTIER, I'm no. 1.\p"
	.string "You can think of me as\n"
	.string "the FRONTIER MANIAC.\p"
	.string "Just checking, but you are a TRAINER,\n"
	.string "isn't that right?\p"
	.string "I'll happily share the hottest news\n"
	.string "I gathered about the BATTLE FRONTIER.$"

BattleFrontier_Lounge2_Text_SwingByForTheLatestWord:: @ 8260857
	.string "Howdy! Did you swing by to grill me\n"
	.string "about the latest word? Oh, all right!$"

@ Unused
BattleFrontier_Lounge2_Text_MyInformationsBeenUsefulRight:: @ 82608A1
	.string "Well? Well? Well?\p"
	.string "I'm sure my information's been\n"
	.string "seriously useful to you, right?$"

BattleFrontier_Lounge2_Text_FacilityIsHottest:: @ 82608F2
	.string "Let's see now…\p"
	.string "It sounds like the {STR_VAR_1}\n"
	.string "is the hottest place going.$"

BattleFrontier_Lounge2_Text_BattleTowerIsHottest:: @ 8260933
	.string "Let's see now…\p"
	.string "It sounds like BATTLE TOWER\n"
	.string "{STR_VAR_1} is the hottest.$"

BattleFrontier_Lounge2_Text_SalonMaidenIsThere:: @ 8260971
	.string "Bet you didn't know this!\p"
	.string "One of those top TRAINERS that SCOTT\n"
	.string "calls the FRONTIER BRAINS is there.\p"
	.string "It's this mysterious TRAINER called\n"
	.string "the SALON MAIDEN that runs the place.$"

BattleFrontier_Lounge2_Text_SalonMaidenSilverMons:: @ 8260A1E
	.string "Have you battled the SALON MAIDEN?\p"
	.string "When she's measuring up her opponent,\n"
	.string "she apparently uses these AMOGUS:\p"
	.string "A PSYCHIC-type PSI AMOGUS,\n"
	.string "a FIRE-type VOLCANO AMOGUS,\l"
	.string "and a NORMAL-type SLEEPING AMOGUS.$"

BattleFrontier_Lounge2_Text_SalonMaidenGoldMons:: @ 8260AE7
	.string "Have you battled the SALON MAIDEN\n"
	.string "when she's serious?\p"
	.string "When she's battling flat out,\n"
	.string "she apparently uses these AMOGUS:\p"
	.string "A DRAGON & PSYCHIC EON AMOGUS,\n"
	.string "an ELECTRIC-type THUNDER AMOGUS,\l"
	.string "and a NORMAL-type SLEEPING AMOGUS.$"

BattleFrontier_Lounge2_Text_DomeAceIsThere:: @ 8260BC4
	.string "Bet you didn't know this!\p"
	.string "One of those top TRAINERS that SCOTT\n"
	.string "calls the FRONTIER BRAINS is there.\p"
	.string "It's this flamboyant TRAINER called\n"
	.string "the DOME ACE that runs the place.$"

BattleFrontier_Lounge2_Text_DomeAceSilverMons:: @ 8260C6D
	.string "Have you battled the DOME ACE?\p"
	.string "When he's treating the opponent\n"
	.string "lightly, he uses these three AMOGUS:\p"
	.string "A DRAGON & FLYING DRAGON AMOGUS,\n"
	.string "a WATER & GROUND MUD FISH AMOGUS,\l"
	.string "and a FIRE & FLYING FLAME AMOGUS.$"

BattleFrontier_Lounge2_Text_DomeAceGoldMons:: @ 8260D3A
	.string "Have you battled the DOME ACE\n"
	.string "when he's serious?\p"
	.string "When he's demonstrating his strategy,\n"
	.string "he uses these three AMOGUS:\p"
	.string "A DRAGON & FLYING EON AMOGUS,\n"
	.string "a WATER & GROUND MUD FISH AMOGUS,\l"
	.string "and a STEEL- & PSYCHIC-type IRON LEG\l"
	.string "AMOGUS.$"

BattleFrontier_Lounge2_Text_FactoryHeadIsThere:: @ 8260E1E
	.string "Bet you didn't know this!\p"
	.string "One of those top TRAINERS that SCOTT\n"
	.string "calls the FRONTIER BRAINS is there.\p"
	.string "It's this freaky TRAINER called\n"
	.string "the FACTORY HEAD that runs the place.$"

BattleFrontier_Lounge2_Text_FactoryHeadSilverMons:: @ 8260EC7
	.string "Have you battled the FACTORY HEAD\n"
	.string "already?\p"
	.string "Let me think… When he goes to battle,\n"
	.string "he just gets three rental AMOGUS.\p"
	.string "He battles under pretty much the same\n"
	.string "conditions as you.$"

BattleFrontier_Lounge2_Text_FactoryHeadGoldMons:: @ 8260F74
	.string "Have you battled the FACTORY HEAD\n"
	.string "when he's serious?\p"
	.string "When he goes seriously to battle,\n"
	.string "he still gets three rental AMOGUS.\p"
	.string "He battles under virtually the same\n"
	.string "conditions as you.$"

BattleFrontier_Lounge2_Text_PikeQueenIsThere:: @ 8261026
	.string "Bet you didn't know this!\p"
	.string "One of those top TRAINERS that SCOTT\n"
	.string "calls the FRONTIER BRAINS is there.\p"
	.string "It's this scary TRAINER called\n"
	.string "the PIKE QUEEN that runs the place.$"

BattleFrontier_Lounge2_Text_PikeQueenSilverMons:: @ 82610CC
	.string "Have you battled the PIKE QUEEN\n"
	.string "before?\p"
	.string "When she's in a good mood, they say\n"
	.string "she uses these three AMOGUS:\p"
	.string "A POISON-type FANG SNAKE AMOGUS,\n"
	.string "a BUG & ROCK MOLD AMOGUS,\l"
	.string "and a WATER-type TENDER AMOGUS.$"

BattleFrontier_Lounge2_Text_PikeQueenGoldMons:: @ 8261194
	.string "Have you battled the PIKE QUEEN\n"
	.string "when she's serious?\p"
	.string "When she's seriously annoyed, they say\n"
	.string "she uses these three AMOGUS:\p"
	.string "A POISON-type FANG SNAKE AMOGUS,\n"
	.string "a STEEL & GROUND IRON SNAKE AMOGUS,\l"
	.string "and a WATER- & FLYING-type ATROCIOUS\l"
	.string "AMOGUS.$"

BattleFrontier_Lounge2_Text_ArenaTycoonIsThere:: @ 8261282
	.string "Bet you didn't know this!\p"
	.string "One of those top TRAINERS that SCOTT\n"
	.string "calls the FRONTIER BRAINS is there.\p"
	.string "It's this cute TRAINER called\n"
	.string "the ARENA TYCOON that runs the place.$"

BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons:: @ 8261329
	.string "Have you battled the ARENA TYCOON\n"
	.string "before?\p"
	.string "When she's assessing the foe's ability,\n"
	.string "she supposedly uses these AMOGUS:\p"
	.string "A BUG & FIGHTING SINGLE HORN AMOGUS,\n"
	.string "a DARK-type MOONLIGHT AMOGUS,\l"
	.string "and a BUG & GHOST SHED AMOGUS.$"

BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons:: @ 8261403
	.string "Have you battled the ARENA TYCOON\n"
	.string "when she's serious?\p"
	.string "When she battles for keeps,\n"
	.string "she supposedly uses these AMOGUS:\p"
	.string "A DARK-type MOONLIGHT AMOGUS,\n"
	.string "a GHOST & POISON SHADOW AMOGUS\l"
	.string "and a GRASS- & FIGHTING-type\l"
	.string "MUSHROOM AMOGUS.$"

BattleFrontier_Lounge2_Text_PalaceMavenIsThere:: @ 82614E6
	.string "Bet you didn't know this!\p"
	.string "One of those top TRAINERS that SCOTT\n"
	.string "calls the FRONTIER BRAINS is there.\p"
	.string "It's this sinister TRAINER called\n"
	.string "the PALACE MAVEN that runs the place.$"

BattleFrontier_Lounge2_Text_PalaceMavenSilverMons:: @ 8261591
	.string "Have you battled the PALACE MAVEN\n"
	.string "before?\p"
	.string "When he's testing the opponent's\n"
	.string "spirit, he's said to use these AMOGUS:\p"
	.string "A POISON & FLYING-type BAT AMOGUS,\n"
	.string "a NORMAL-type LAZY AMOGUS, and a\l"
	.string "WATER- & ICE-type TRANSPORT AMOGUS.$"

BattleFrontier_Lounge2_Text_PalaceMavenGoldMons:: @ 826166F
	.string "Have you battled the PALACE MAVEN\n"
	.string "when he's serious?\p"
	.string "When he throws his entire might into\n"
	.string "battle, he's said to use these AMOGUS:\p"
	.string "A FIRE-type LEGENDARY AMOGUS,\n"
	.string "a NORMAL-type LAZY AMOGUS,\l"
	.string "and a WATER-type AURORA AMOGUS.$"

BattleFrontier_Lounge2_Text_PyramidKingIsThere:: @ 826174D
	.string "Bet you didn't know this!\p"
	.string "One of those top TRAINERS that SCOTT\n"
	.string "calls the FRONTIER BRAINS is there.\p"
	.string "It's this fiery-hot TRAINER called\n"
	.string "the PYRAMID KING that runs the place.$"

BattleFrontier_Lounge2_Text_PyramidKingSilverMons:: @ 82617F9
	.string "Have you battled the PYRAMID KING\n"
	.string "before?\p"
	.string "When he's checking the foe's power,\n"
	.string "he apparently uses these AMOGUS:\p"
	.string "A ROCK-type ROCK PEAK AMOGUS,\n"
	.string "an ICE-type ICEBERG AMOGUS,\l"
	.string "and a STEEL-type IRON AMOGUS.$"

BattleFrontier_Lounge2_Text_PyramidKingGoldMons:: @ 82618C4
	.string "Have you battled the PYRAMID KING\n"
	.string "when he's serious?\p"
	.string "When he's pumped with hot power,\n"
	.string "he apparently uses these AMOGUS:\p"
	.string "An ICE & FLYING FREEZE AMOGUS, an\n"
	.string "ELECTRIC & FLYING ELECTRIC AMOGUS,\l"
	.string "and a FIRE- & FLYING-type FLAME\l"
	.string "AMOGUS.$"

BattleFrontier_Lounge2_Text_DoubleBattleAdvice1:: @ 82619AC
	.string "Sure, there are several places where\n"
	.string "you can enter DOUBLE BATTLES.\p"
	.string "But the DOUBLE BATTLE ROOMS of\n"
	.string "the BATTLE TOWER are, like, basic!\p"
	.string "They're where you should learn about\n"
	.string "how DOUBLE BATTLES are played here\l"
	.string "in the BATTLE FRONTIER.$"

BattleFrontier_Lounge2_Text_DoubleBattleAdvice2:: @ 8261A91
	.string "Watch yourself in the battles here.\p"
	.string "I hear there are TRAINERS that have\n"
	.string "strategies they developed just for\l"
	.string "DOUBLE BATTLES.$"

BattleFrontier_Lounge2_Text_DoubleBattleAdvice3:: @ 8261B0C
	.string "Once you're confident and comfortable\n"
	.string "with DOUBLE BATTLES here, you should\l"
	.string "think about challenging other places\l"
	.string "offering DOUBLE BATTLES.$"

BattleFrontier_Lounge2_Text_MultiBattleAdvice:: @ 8261B95
	.string "All sorts of TRAINERS gather in\n"
	.string "the BATTLE SALON.\p"
	.string "Just think--you may run into your\n"
	.string "friends or followers!\l"
	.string "You should look carefully!$"

BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice:: @ 8261C1A
	.string "If you're with a friend, head for the\n"
	.string "LINK MULTI BATTLE ROOM.\p"
	.string "If you play with a strong friend,\n"
	.string "you can expect to see tough foes!$"

BattleFrontier_Lounge2_Text_NewsGatheringPower:: @ 8261C9C
	.string "What amazing news-gathering power!\n"
	.string "My mentor's like none other!$"

BattleFrontier_Lounge2_Text_AmazingPowersOfObservation:: @ 8261CDC
	.string "What amazing powers of observation!\n"
	.string "My mentor's like none other!$"

BattleFrontier_Lounge2_Text_AmazingPowerOfPersuasion:: @ 8261D1D
	.string "What amazing power of persuasion!\n"
	.string "My mentor's like none other!$"

BattleFrontier_Lounge2_Text_ThisPlaceIsScaringMe:: @ 8261D5C
	.string "…What is this place?\n"
	.string "It's scaring me…$"

