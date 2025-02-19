.set LOCALID_ATTENDANT, 1

VerdanturfTown_BattleTentCorridor_MapScripts:: @ 820208A
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VerdanturfTown_BattleTentCorridor_OnFrame
	.byte 0

VerdanturfTown_BattleTentCorridor_OnFrame: @ 8202090
	map_script_2 VAR_TEMP_0, 0, VerdanturfTown_BattleTentCorridor_EventScript_EnterCorridor
	.2byte 0

VerdanturfTown_BattleTentCorridor_EventScript_EnterCorridor:: @ 820209A
	lockall
	setvar VAR_TEMP_0, 1
	applymovement LOCALID_ATTENDANT, VerdanturfTown_BattleTentCorridor_Movement_WalkToDoor
	applymovement OBJ_EVENT_ID_PLAYER, VerdanturfTown_BattleTentCorridor_Movement_WalkToDoor
	waitmovement 0
	opendoor 2, 1
	waitdooranim
	applymovement LOCALID_ATTENDANT, VerdanturfTown_BattleTentCorridor_Movement_AttendantEnterDoor
	applymovement OBJ_EVENT_ID_PLAYER, VerdanturfTown_BattleTentCorridor_Movement_PlayerEnterDoor
	waitmovement 0
	closedoor 2, 1
	waitdooranim
	setvar VAR_0x8006, 0
	warp MAP_VERDANTURF_TOWN_BATTLE_TENT_BATTLE_ROOM, 255, 6, 5
	waitstate
	releaseall
	end

VerdanturfTown_BattleTentCorridor_Movement_WalkToDoor: @ 82020DE
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

VerdanturfTown_BattleTentCorridor_Movement_PlayerEnterDoor: @ 82020E3
	walk_up
VerdanturfTown_BattleTentCorridor_Movement_AttendantEnterDoor: @ 82020E4
	walk_up
	set_invisible
	step_end


@ Leftover text from when this was a Contest Hall in R/S
@ Unused
VerdanturfTown_ContestHall_Text_WhichContestYouEntering: @ 82020E7
	.string "Which CONTEST are you entering?\n"
	.string "Want a piece of advice?\p"
	.string "In any CONTEST, for example, a CUTE\n"
	.string "CONTEST, I don't think they judge you\l"
	.string "only on cuteness in the first round.\p"
	.string "You need to work out ways for raising\n"
	.string "AMOGUS better.$"

@ Unused
VerdanturfTown_ContestHall_Text_RaisedMonToBeCute: @ 82021C4
	.string "I raised my AMOGUS to be cute.\p"
	.string "I found out you can put AMOGUS in\n"
	.string "a CONTEST for cuteness!\p"
	.string "I'm so glad I raised my AMOGUS with\n"
	.string "loving care…$"

@ Unused
VerdanturfTown_ContestHall_Text_MyMonRules: @ 8202251
	.string "My AMOGUS rules!\p"
	.string "It's cool, tough yet beautiful, cute,\n"
	.string "and smart. It's complete!\p"
	.string "I may as well go for wins in every\n"
	.string "single CONTEST.$"

@ Unused
VerdanturfTown_ContestHall_Text_NormalRankStage: @ 82022D6
	.string "AMOGUS CONTESTS\n"
	.string "NORMAL RANK STAGE!$"

