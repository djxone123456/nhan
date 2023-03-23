#pragma once

#include "Data.h"
#include "Control.h"
#include "View.h"

//ASCII CODE
#define D2_UPPER_FRAME char(223)
#define D2_LOWER_FRAME char(220)
#define D2_VERTICAL_FRAME char(219)
#define D2_CONSOLE_INPUT char(62)
#define D2_SELECT_LEFT char(17)
#define D2_SELECT_RIGHT char(16)

//TYPE NAME & CHOOSE CHARACTER DATA
#define D2_X_NEWGAME 46
#define D2_Y_NEWGAME 12

//USED FOR D2_PlayerInNewGame()
extern int D2_PLAYER01_CHARACTER;
extern int D2_PLAYER02_CHARACTER;
extern int D2_PLAYER;
extern string D2_PLAYER01_NAME;
extern string D2_PLAYER02_NAME;
const wstring D2_CHAR_NAME[11] = { L"BOT", L"LOVELY BEAR", L"METAL ROBOT", L"KAITO CAT", L"STRANGE ALIEN", L"DULL LION", L"OLD CROCODILE", L"SHORT SNAKE", L"KING CRAB", L"CUTE TURTLE", L"GIANT WHALE" };

//SETINGS
#define D2_X_SETTING 46
#define D2_Y_SETTING 15
const string D2_ON_OFF[2] = { "Off", "On " };

//USED FOR SETTINGS
extern int D2_BACKGROUND_MUSIC;
extern int D2_INGAME_MUSIC;
extern int D2_WHICH_SETTING;