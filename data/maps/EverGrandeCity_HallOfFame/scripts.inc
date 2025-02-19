.set LOCALID_WALLACE, 1

EverGrandeCity_HallOfFame_MapScripts:: @ 822982C
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_HallOfFame_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_HallOfFame_OnWarp
	.byte 0

EverGrandeCity_HallOfFame_OnWarp: @ 8229837
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_HallOfFame_EventScript_TurnPlayerNorth
	.2byte 0

EverGrandeCity_HallOfFame_EventScript_TurnPlayerNorth:: @ 8229841
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_HallOfFame_OnFrame: @ 8229846
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame
	.2byte 0

EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame:: @ 8229850
	lockall
	applymovement LOCALID_WALLACE, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame1
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame1
	waitmovement 0
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFastestRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
	waitmovement 0
	msgbox EverGrandeCity_HallOfFame_Text_HereWeHonorLeagueChampions, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WALLACE, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame2
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame2
	waitmovement 0
	delay 20
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFastestRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
	waitmovement 0
	msgbox EverGrandeCity_HallOfFame_Text_LetsRecordYouAndYourPartnersNames, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFastestUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
	waitmovement 0
	delay 20
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
	delay 40
	setvar VAR_TEMP_1, 1
	call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq EverGrandeCity_HallOfFame_EventScript_GameClearMale
	compare VAR_RESULT, FEMALE
	goto_if_eq EverGrandeCity_HallOfFame_EventScript_GameClearFemale
	end

EverGrandeCity_HallOfFame_EventScript_GameClearMale:: @ 82298E9
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	fadescreenspeed FADE_TO_BLACK, 24
	special GameClear
	waitstate
	releaseall
	end

EverGrandeCity_HallOfFame_EventScript_GameClearFemale:: @ 82298F5
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
	fadescreenspeed FADE_TO_BLACK, 24
	special GameClear
	waitstate
	releaseall
	end

EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame1: @ 8229901
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame2: @ 8229908
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

EverGrandeCity_HallOfFame_Text_HereWeHonorLeagueChampions: @ 822990E
	.string "WALLACE: This room…\p"
	.string "This is where we keep records of\n"
	.string "AMOGUS that prevailed through\l"
	.string "harsh battles.\p"
	.string "It is here that the LEAGUE CHAMPIONS\n"
	.string "are honored.$"

EverGrandeCity_HallOfFame_Text_LetsRecordYouAndYourPartnersNames: @ 82299A3
	.string "WALLACE: Come on, let's record your\n"
	.string "name as a TRAINER who triumphed over\l"
	.string "the AMOGUS LEAGUE, and the names of\l"
	.string "the partners who battled with you.$"

