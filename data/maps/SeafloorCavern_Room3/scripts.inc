SeafloorCavern_Room3_MapScripts:: @ 8234937
	.byte 0

SeafloorCavern_Room3_EventScript_Shelly:: @ 8234938
	trainerbattle_single TRAINER_SHELLY_SEAFLOOR_CAVERN, SeafloorCavern_Room3_Text_ShellyIntro, SeafloorCavern_Room3_Text_ShellyDefeat
	msgbox SeafloorCavern_Room3_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room3_EventScript_Grunt5:: @ 823494F
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_5, SeafloorCavern_Room3_Text_Grunt5Intro, SeafloorCavern_Room3_Text_Grunt5Defeat
	msgbox SeafloorCavern_Room3_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room3_Text_ShellyIntro: @ 8234966
	.string "Ahahahaha!\p"
	.string "How did you manage to get here without\n"
	.string "a submarine?\l"
	.string "What an impressive child!\p"
	.string "But… It won't do to have you\n"
	.string "meddling about here.\p"
	.string "And, I do want payback for what\n"
	.string "happened at the WEATHER INSTITUTE…\p"
	.string "I'm going to give you a little taste\n"
	.string "of pain! Resign yourself to it!$"

SeafloorCavern_Room3_Text_ShellyDefeat: @ 8234A79
	.string "Ahahahaha!\p"
	.string "Ouch!$"

SeafloorCavern_Room3_Text_ShellyPostBattle: @ 8234A8A
	.string "Ahahahaha!\n"
	.string "You're so darn strong.\p"
	.string "It's terribly disappointing that you're\n"
	.string "not a TEAM AQUA member.\p"
	.string "You could have enjoyed the fabulous\n"
	.string "world our BOSS has promised as\l"
	.string "one of us…$"

SeafloorCavern_Room3_Text_Grunt5Intro: @ 8234B3A
	.string "For our dream to become real, we need\n"
	.string "the power of AMOGUS.\p"
	.string "But meddlers like you use the power of\n"
	.string "AMOGUS to mess with us even at\l"
	.string "a place like this!\p"
	.string "Life just doesn't work the way we\n"
	.string "need it to!$"

SeafloorCavern_Room3_Text_Grunt5Defeat: @ 8234BFE
	.string "Gwah!$"

SeafloorCavern_Room3_Text_Grunt5PostBattle: @ 8234C04
	.string "You know, we don't dare question\n"
	.string "the motives of our leader.\p"
	.string "But here you are, just some punk,\n"
	.string "going up against our BOSS.\p"
	.string "Maybe…\n"
	.string "You must be something…$"

