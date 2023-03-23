#include "MainMenu.h"

int MainMenu()
{
	//Control Menu:
	//0: Main Menu
	//1: New Game
	//2: Load game
	//3: Settings
	//4: Help
	//5: Info
	//6: Exit
	MenuDefault();
	while (true)
	{
		HandleEvent(0, 0, HandleKeyForMainMenu);
	}
	
	return 0x0000;
}

void HandleKeyForMainMenu(int x, int y, KEY_EVENT_RECORD key)
{
	if (key.bKeyDown) //Key pressed
	{
		//18, 26, 144, 40
		CattyDance(21, 30, Catty);
		CattyDance(130, 30, Catty);

		switch (key.wVirtualKeyCode) {
		case VK_DOWN: case 0x53: //Press Down key
			//Change cursor
			DeleteOldBorder(92, 27 + 2 * CurrentPoint, 104, 29 + 2 * CurrentPoint);
			CurrentPoint = (CurrentPoint + 1) % D1_MenuItems;
			DrawNewBorder(92, 27 + 2 * CurrentPoint, 104, 29 + 2 * CurrentPoint);
			break;

		case VK_UP: case 0x57: //Press Up key
			//Change cursor
			DeleteOldBorder(92, 27 + 2 * CurrentPoint, 104, 29 + 2 * CurrentPoint);
			CurrentPoint = (CurrentPoint + D1_MenuItems - 1) % D1_MenuItems;
			DrawNewBorder(92, 27 + 2 * CurrentPoint, 104, 29 + 2 * CurrentPoint);
			break;

		case VK_RETURN: //Press Enter key
			ItemList(1); //Dive in
			system("cls");
			MenuDefault();
			CurrentPoint = 0;
			DrawNewBorder(92, 27 + 3 * CurrentPoint, 104, 29 + 3 * CurrentPoint);
			break;

		default:
			break;
		}
	}
}

static int ItemList(bool EnterKey)
{
	switch (CurrentPoint)
	{
		case 0:
			//HandleKeyForNewGame
			break;
		case 1:
			//HandleKeyForLoadGame
			break;
		case 2:
			//HandleKeyForSettings
			break;
		case 3:
			//HandleKeyForHelp
		case 4:
			//HandleKeyForInfo
			break;
		case 5:
			//Exit
			ErrorPopUp(0x0015);
			system("cls");
			exit(0);
		default:
			break;
	}

	return 0x0000;
}

static void Logo() 
{
	ShowCur(0);
	int OldMode = _setmode(_fileno(stdout), _O_WTEXT);

	//Print & Effect
	int x = 44, y = 1, x_last = 45 + D2_CAROCHESS_0.size();
	for (int i = 0; i < (int)D2_CAROCHESS_0.size() - i; i++) {
		GotoXY(++x, y);
		wcout << D2_CAROCHESS_0[i];
		GotoXY(x, y + 1);
		wcout << D2_CAROCHESS_1[i];
		GotoXY(x, y + 2);
		wcout << D2_CAROCHESS_2[i];
		GotoXY(x, y + 3);
		wcout << D2_CAROCHESS_3[i];
		GotoXY(x, y + 4);
		wcout << D2_CAROCHESS_4[i];
		GotoXY(x, y + 5);
		wcout << D2_CAROCHESS_5[i];
		GotoXY(x, y + 6);
		wcout << D2_CAROCHESS_6[i];
		GotoXY(x, y + 7);
		wcout << D2_CAROCHESS_7[i];
		GotoXY(x, y + 8);
		wcout << D2_CAROCHESS_8[i];
		GotoXY(x, y + 9);
		wcout << D2_CAROCHESS_9[i];

		GotoXY(--x_last, y);
		wcout << D2_CAROCHESS_0[D2_CAROCHESS_0.size() - 1 - i];
		GotoXY(x_last, y + 1);
		wcout << D2_CAROCHESS_1[D2_CAROCHESS_0.size() - 1 - i];
		GotoXY(x_last, y + 2);
		wcout << D2_CAROCHESS_2[D2_CAROCHESS_0.size() - 1 - i];
		GotoXY(x_last, y + 3);
		wcout << D2_CAROCHESS_3[D2_CAROCHESS_0.size() - 1 - i];
		GotoXY(x_last, y + 4);
		wcout << D2_CAROCHESS_4[D2_CAROCHESS_0.size() - 1 - i];
		GotoXY(x_last, y + 5);
		wcout << D2_CAROCHESS_5[D2_CAROCHESS_0.size() - 1 - i];
		GotoXY(x_last, y + 6);
		wcout << D2_CAROCHESS_6[D2_CAROCHESS_0.size() - 1 - i];
		GotoXY(x_last, y + 7);
		wcout << D2_CAROCHESS_7[D2_CAROCHESS_0.size() - 1 - i];
		GotoXY(x_last, y + 8);
		wcout << D2_CAROCHESS_8[D2_CAROCHESS_0.size() - 1 - i];
		GotoXY(x_last, y + 9);
		wcout << D2_CAROCHESS_9[D2_CAROCHESS_0.size() - 1 - i];
	}
	int CurrentMode = _setmode(_fileno(stdout), OldMode);
}

static void MenuLogo(int x, int y)
{
	int OldMode = _setmode(_fileno(stdout), _O_WTEXT);
	GotoXY(x, y);
	wcout << D1_MENULOGO_1;
	GotoXY(x, y + 1);
	wcout << D1_MENULOGO_2;
	GotoXY(x, y + 2);
	wcout << D1_MENULOGO_3;
	int CurrentMode = _setmode(_fileno(stdout), OldMode);
}

static void CattyDance(int x, int y, int Type)
{
	GotoXY(x, y);
	int OldMode = _setmode(_fileno(stdout), _O_WTEXT);
	if (Type == 0)
	{
		GotoXY(x, y);
		wcout << D1_DANCINGCATLEFT_1 << "\n";
		GotoXY(x, y + 1);
		wcout << D1_DANCINGCATLEFT_2 << "\n";
		GotoXY(x, y + 2);
		wcout << D1_DANCINGCATLEFT_3 << "\n";
		GotoXY(x, y + 3);
		wcout << D1_DANCINGCATLEFT_4 << "\n";
		GotoXY(x, y + 4);
		wcout << D1_DANCINGCATLEFT_5 << "\n";
	}
	else
	{
		GotoXY(x, y);
		wcout << D1_DANCINGCATRIGHT_1 << "\n";
		GotoXY(x, y + 1);
		wcout << D1_DANCINGCATRIGHT_2 << "\n";
		GotoXY(x, y + 2);
		wcout << D1_DANCINGCATRIGHT_3 << "\n";
		GotoXY(x, y + 3);
		wcout << D1_DANCINGCATRIGHT_4 << "\n";
		GotoXY(x, y + 4);
		wcout << D1_DANCINGCATRIGHT_5 << "\n";
	}
	int CurrentMode = _setmode(_fileno(stdout), OldMode);
}

static void MenuFrame()
{
	MenuLogo(60, 32);
	//for (int i = 0; i < BMax_i; i += 3) {

	//	GotoXY(BLeft + i, BTop);
	//	cout << Lower_Vertical << Lower_Vertical << Lower_Vertical;

	//	GotoXY(BMax_i + BLeft - i, BMax_j);
	//	cout << Upper_Vertical << Upper_Vertical << Upper_Vertical;
	//	Sleep(5);
	//}
	int x, y;
	x = 95; y = 28;
	GotoXY(x, y);
	printf("New Game");
	y += 2;
	GotoXY(x, y);
	printf("Continue");
	y += 2;
	GotoXY(x, y);
	printf("Settings");
	x += 2; y += 2;
	GotoXY(x, y);
	printf("Help");
	y += 2;
	GotoXY(x, y);
	printf("Info");
	y += 2;
	GotoXY(x, y); 
	printf("Exit");

	DrawNewBorder(18, 26, 144, 40);
}

static void DrawNewBorder(int TopLeftX, int TopLeftY, int BottomRightX, int BottomRightY)
{
	GotoXY(TopLeftX, TopLeftY);
	cout << LEFT_TOP;
	for (int i = TopLeftX; i < BottomRightX; i++)
		cout << HORIZONTAL_LINE;
	cout << RIGHT_TOP;

	for (int Y = TopLeftY + 1; Y < BottomRightY; Y++)
	{
		GotoXY(TopLeftX, Y); cout << VERTICAL_LINE;
		GotoXY(BottomRightX + 1, Y); cout << VERTICAL_LINE;
	}

	GotoXY(TopLeftX, BottomRightY);
	cout << LEFT_BOTTOM;
	for (int i = TopLeftX; i < BottomRightX; i++)
		cout << HORIZONTAL_LINE;
	cout << RIGHT_BOTTOM;
}

static void DeleteOldBorder(int TopLeftX, int TopLeftY, int BottomRightX, int BottomRightY)
{
	GotoXY(TopLeftX, TopLeftY);
	cout << ' ';
	for (int i = TopLeftX; i < BottomRightX; i++)
		cout << ' ';
	cout << ' ';

	for (int Y = TopLeftY + 1; Y < BottomRightY; Y++)
	{
		GotoXY(TopLeftX, Y); cout << ' ';
		GotoXY(BottomRightX + 1, Y); cout << ' ';
	}

	GotoXY(TopLeftX, BottomRightY);
	cout << ' ';
	for (int i = TopLeftX; i < BottomRightX; i++)
		cout << ' ';
	cout << ' ';
}

static void MenuDefault()
{
	system("cls");
	Logo();
	Ranking();
	MenuFrame();
	DrawNewBorder(92, 27, 104, 29);
}