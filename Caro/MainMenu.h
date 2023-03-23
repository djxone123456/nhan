#pragma once
#ifndef MAINMENU_H
#define MAINMENU_H
#include "Control.h"
#include "View.h"
#include "Data.h"
#include "Ranking.h"
#include "Error.h"

//DEFINES
static const int D1_MenuItems = 6;

//VARIABLES
static int CurrentPoint = 0;
static int Catty = 1;

//FUNCTIONS HERE
void Logo();
static void CattyDance(int, int, int);
static int ItemList(bool);
static void MenuDefault();
static void DrawNewBorder(int, int, int, int);
static void DeleteOldBorder(int, int, int, int);
static void MenuLogo(int, int);
static void MenuFrame();
void HandleKeyForMainMenu(int, int, KEY_EVENT_RECORD);
int MainMenu();

#endif
