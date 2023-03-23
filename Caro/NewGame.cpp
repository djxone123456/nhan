#include "NewGame.h"

int D3_Y2 = D3_NewGame_Box_Top + 7;
int D3_GameMode = 0;
int D3_Time = 0;

string NewGame()
{
	ShowCur(0);

	//Draw Logo "NEW GAME"
	int OldMode = _setmode(_fileno(stdout), _O_WTEXT);
	for (size_t i = 0; i < D2_NEWGAME_1.size() - 1 - i; i += 2) {
		GotoXY(D3_NewGame_Box_Left + 8 + i, 4);
		wcout << D2_NEWGAME_1[i] << D2_NEWGAME_1[i + 1];
		GotoXY(D3_NewGame_Box_Left + 8 + i, 5);
		wcout << D2_NEWGAME_2[i] << D2_NEWGAME_2[i + 1];
		GotoXY(D3_NewGame_Box_Left + 8 + i, 6);
		wcout << D2_NEWGAME_3[i] << D2_NEWGAME_3[i + 1];
		GotoXY(D3_NewGame_Box_Left + 8 + i, 7);
		wcout << D2_NEWGAME_4[i] << D2_NEWGAME_4[i + 1];
		GotoXY(D3_NewGame_Box_Left + 8 + i, 8);
		wcout << D2_NEWGAME_5[i] << D2_NEWGAME_5[i + 1];
		GotoXY(D3_NewGame_Box_Left + 8 + i, 9);
		wcout << D2_NEWGAME_6[i] << D2_NEWGAME_6[i + 1];

		GotoXY(D3_NewGame_Box_Left + 8 + D2_NEWGAME_1.size() - i - 2, 4);
		wcout << D2_NEWGAME_1[D2_NEWGAME_1.size() - 2 - i] << D2_NEWGAME_1[D2_NEWGAME_1.size() - 1 - i];
		GotoXY(D3_NewGame_Box_Left + 8 + D2_NEWGAME_1.size() - i - 2, 5);
		wcout << D2_NEWGAME_2[D2_NEWGAME_1.size() - 2 - i] << D2_NEWGAME_2[D2_NEWGAME_1.size() - 1 - i];
		GotoXY(D3_NewGame_Box_Left + 8 + D2_NEWGAME_1.size() - i - 2, 6);
		wcout << D2_NEWGAME_3[D2_NEWGAME_1.size() - 2 - i] << D2_NEWGAME_3[D2_NEWGAME_1.size() - 1 - i];
		GotoXY(D3_NewGame_Box_Left + 8 + D2_NEWGAME_1.size() - i - 2, 7);
		wcout << D2_NEWGAME_4[D2_NEWGAME_1.size() - 2 - i] << D2_NEWGAME_4[D2_NEWGAME_1.size() - 1 - i];
		GotoXY(D3_NewGame_Box_Left + 8 + D2_NEWGAME_1.size() - i - 2, 8);
		wcout << D2_NEWGAME_5[D2_NEWGAME_1.size() - 2 - i] << D2_NEWGAME_5[D2_NEWGAME_1.size() - 1 - i];
		GotoXY(D3_NewGame_Box_Left + 8 + D2_NEWGAME_1.size() - i - 2, 9);
		wcout << D2_NEWGAME_6[D2_NEWGAME_1.size() - 2 - i] << D2_NEWGAME_6[D2_NEWGAME_1.size() - 1 - i];

		Sleep(10);
	}
	int CurrentMode = _setmode(_fileno(stdout), OldMode);

	//Draw NewGame Box
	for (int i = 0; i <= D3_NewGame_Box_Max_i; i += 2) {
		GotoXY(D3_NewGame_Box_Left + i, D3_NewGame_Box_Top);
		cout << D3_Lower_Horizontal_Thick_Line << D3_Lower_Horizontal_Thick_Line;
		GotoXY(D3_NewGame_Box_Max_i + D3_NewGame_Box_Left - i, D3_NewGame_Box_Max_j);
		cout << D3_Upper_Horizontal_Thick_Line << D3_Upper_Horizontal_Thick_Line;
		Sleep(5);
	}

	for (int i = 1; i < D3_NewGame_Box_Max_j - D3_NewGame_Box_Top; i += 2) {

		GotoXY(D3_NewGame_Box_Max_i + D3_NewGame_Box_Left + 1, D3_NewGame_Box_Top + i);
		cout << D3_Vertical_Thick_Line;
		GotoXY(D3_NewGame_Box_Max_i + D3_NewGame_Box_Left + 1, D3_NewGame_Box_Top + i + 1);
		cout << D3_Vertical_Thick_Line;

		GotoXY(D3_NewGame_Box_Left, D3_NewGame_Box_Max_j - i);
		cout << D3_Vertical_Thick_Line;
		GotoXY(D3_NewGame_Box_Left, D3_NewGame_Box_Max_j - i - 1);
		cout << D3_Vertical_Thick_Line;
		Sleep(5);
	}

	//Draw NewGame Content
	GotoXY(D3_NewGame_Box_Left + 26, D3_NewGame_Box_Top + 7);
	cout << "Mode: ";
	GotoXY(D3_NewGame_Box_Left + 37, D3_NewGame_Box_Top + 7);
	cout << D3_Left_Arrow;
	GotoXY(D3_NewGame_Box_Left + 40, D3_NewGame_Box_Top + 7);
	cout << D3_NewGame_Mode[D3_GameMode];
	GotoXY(D3_NewGame_Box_Left + 57, D3_NewGame_Box_Top + 7);
	cout << D3_Right_Arrow;

	GotoXY(D3_NewGame_Box_Left + 26, D3_NewGame_Box_Top + 11);
	cout << "Time: ";
	GotoXY(D3_NewGame_Box_Left + 43, D3_NewGame_Box_Top + 11);
	cout << D3_NewGame_Time[D3_Time] << " second";

	//Draw Esc Button
	GotoXY(D3_NewGame_Box_Left + 4, D3_NewGame_Box_Max_j - 2);
	cout << D3_Lower_Left_Corner_Button_Line;
	GotoXY(D3_NewGame_Box_Left + 4, D3_NewGame_Box_Max_j - 3);
	cout << D3_Vertical_Button_Line;
	GotoXY(D3_NewGame_Box_Left + 4, D3_NewGame_Box_Max_j - 4);
	cout << D3_Upper_Left_Corner_Button_Line;
	GotoXY(D3_NewGame_Box_Left + 5, D3_NewGame_Box_Max_j - 4);
	cout << D3_Horizontal_Button_Thin_Line << D3_Horizontal_Button_Thin_Line << D3_Horizontal_Button_Thin_Line << D3_Horizontal_Button_Thin_Line;
	cout << D3_Horizontal_Button_Thin_Line << D3_Horizontal_Button_Thin_Line << D3_Horizontal_Button_Thin_Line;
	GotoXY(D3_NewGame_Box_Left + 12, D3_NewGame_Box_Max_j - 4);
	cout << D3_Upper_Right_Corner_Button_Line;
	GotoXY(D3_NewGame_Box_Left + 12, D3_NewGame_Box_Max_j - 3);
	cout << D3_Vertical_Button_Line;
	GotoXY(D3_NewGame_Box_Left + 12, D3_NewGame_Box_Max_j - 2);
	cout << D3_Lower_Right_Corner_Button_Line;
	GotoXY(D3_NewGame_Box_Left + 5, D3_NewGame_Box_Max_j - 2);
	cout << D3_Horizontal_Button_Double_Line << D3_Horizontal_Button_Double_Line << D3_Horizontal_Button_Double_Line << D3_Horizontal_Button_Double_Line;
	cout << D3_Horizontal_Button_Double_Line << D3_Horizontal_Button_Double_Line << D3_Horizontal_Button_Double_Line;

	GotoXY(D3_NewGame_Box_Left + 7, D3_NewGame_Box_Max_j - 3);
	cout << "Esc";
	GotoXY(D3_NewGame_Box_Left + 14, D3_NewGame_Box_Max_j - 3);
	cout << "Back";

	//Draw Enter Button
	GotoXY(D3_NewGame_Box_Left + D3_NewGame_Box_Max_i - 11, D3_NewGame_Box_Max_j - 2);
	cout << D3_Lower_Left_Corner_Button_Line;
	GotoXY(D3_NewGame_Box_Left + D3_NewGame_Box_Max_i - 11, D3_NewGame_Box_Max_j - 3);
	cout << D3_Vertical_Button_Line;
	GotoXY(D3_NewGame_Box_Left + D3_NewGame_Box_Max_i - 11, D3_NewGame_Box_Max_j - 4);
	cout << D3_Upper_Left_Corner_Button_Line;
	GotoXY(D3_NewGame_Box_Left + D3_NewGame_Box_Max_i - 10, D3_NewGame_Box_Max_j - 4);
	cout << D3_Horizontal_Button_Thin_Line << D3_Horizontal_Button_Thin_Line << D3_Horizontal_Button_Thin_Line << D3_Horizontal_Button_Thin_Line;
	cout << D3_Horizontal_Button_Thin_Line << D3_Horizontal_Button_Thin_Line << D3_Horizontal_Button_Thin_Line;
	GotoXY(D3_NewGame_Box_Left + D3_NewGame_Box_Max_i - 3, D3_NewGame_Box_Max_j - 4);
	cout << D3_Upper_Right_Corner_Button_Line;
	GotoXY(D3_NewGame_Box_Left + D3_NewGame_Box_Max_i - 3, D3_NewGame_Box_Max_j - 3);
	cout << D3_Vertical_Button_Line;
	GotoXY(D3_NewGame_Box_Left + D3_NewGame_Box_Max_i - 3, D3_NewGame_Box_Max_j - 2);
	cout << D3_Lower_Right_Corner_Button_Line;
	GotoXY(D3_NewGame_Box_Left + D3_NewGame_Box_Max_i - 10, D3_NewGame_Box_Max_j - 2);
	cout << D3_Horizontal_Button_Double_Line << D3_Horizontal_Button_Double_Line << D3_Horizontal_Button_Double_Line << D3_Horizontal_Button_Double_Line;
	cout << D3_Horizontal_Button_Double_Line << D3_Horizontal_Button_Double_Line << D3_Horizontal_Button_Double_Line;

	GotoXY(D3_NewGame_Box_Left + D3_NewGame_Box_Max_i - 9, D3_NewGame_Box_Max_j - 3);
	cout << "Enter";
	GotoXY(D3_NewGame_Box_Left + D3_NewGame_Box_Max_i - 17, D3_NewGame_Box_Max_j - 3);
	cout << "Apply";

	return "0x8jkbfa8";
}

static void D3_EraseConsole(int x1, int x2, int y)
{
	for (int i = x1; i < x2; i++)
	{
		GotoXY(i, y);
		cout << " ";
	}
}

void HandleKeyForNewGame(int D3_X, int D3_Y, KEY_EVENT_RECORD key)
{
	// D3_X = D3_NewGame_Box_Left + 26
	// D3_Y = D3_NewGame_Box_Top + 7

	if (key.bKeyDown) //Key pressed
	{
		switch (key.wVirtualKeyCode)
		{
		case VK_ESCAPE:
			if (D2_INGAME_MUSIC) PlaySound(TEXT("sounds//select.wav"), NULL, SND_FILENAME | SND_ASYNC);
			D3_Y2 = D3_NewGame_Box_Top + 7;
			break;
		case VK_RETURN: //Enter
			if (D2_INGAME_MUSIC) PlaySound(TEXT("sounds//select.wav"), NULL, SND_FILENAME | SND_ASYNC);
			system("cls");
			Store();
			_CURRENT_MENU = 7; //###################
			break;
		case VK_LEFT: case 0x41: //Left arrow
			if (D2_INGAME_MUSIC) PlaySound(TEXT("sounds//switch-selection.wav"), NULL, SND_FILENAME | SND_ASYNC);
			GotoXY(D3_X + 11, D3_Y2);
			TextColor(8);
			cout << D3_Left_Arrow;
			Sleep(150);
			GotoXY(D3_X + 11, D3_Y2);
			TextColor(0);
			cout << D3_Left_Arrow;
			if (D3_Y2 == D3_Y)
			{
				GotoXY(D3_X + 14, D3_Y2);
				cout << D3_NewGame_Mode[D3_GameMode = D3_GameMode == 0 ? 1 : 0];
			}
			else if (D3_Y2 == D3_Y + 4)
			{
				GotoXY(D3_X + 17, D3_Y2);
				cout << D3_NewGame_Time[D3_Time = D3_Time == 0 ? 2 : (D3_Time == 1 ? 0 : 1)];
			}
			break;
		case VK_RIGHT: case 0x44: //Right arrow
			if (D2_INGAME_MUSIC) PlaySound(TEXT("sounds//switch-selection.wav"), NULL, SND_FILENAME | SND_ASYNC);
			GotoXY(D3_X + 31, D3_Y2);
			TextColor(8);
			cout << D3_Right_Arrow;
			Sleep(150);
			GotoXY(D3_X + 31, D3_Y2);
			TextColor(0);
			cout << D3_Right_Arrow;
			if (D3_Y2 == D3_Y)
			{
				GotoXY(D3_X + 14, D3_Y2);
				cout << D3_NewGame_Mode[D3_GameMode = D3_GameMode == 0 ? 1 : 0];
			}
			else if (D3_Y2 == D3_Y + 4)
			{
				GotoXY(D3_X + 17, D3_Y2);
				cout << D3_NewGame_Time[D3_Time = D3_Time == 0 ? 1 : (D3_Time == 1 ? 2 : 0)];
			}
			break;
		case VK_DOWN: case 0x53: //Down arrow
			if (D2_INGAME_MUSIC) PlaySound(TEXT("sounds//switch-selection.wav"), NULL, SND_FILENAME | SND_ASYNC);
			if (D3_Y2 != D3_Y + 4)
			{
				D3_EraseConsole(D3_X + 10, D3_X + 12, D3_Y2);
				D3_EraseConsole(D3_X + 30, D3_X + 32, D3_Y2);
				D3_Y2 += 4;
				GotoXY(D3_X + 11, D3_Y2);
				cout << D3_Left_Arrow;
				GotoXY(D3_X + 31, D3_Y2);
				cout << D3_Right_Arrow;
			}
			else if (D3_Y2 == D3_Y + 4)
			{
				D3_EraseConsole(D3_X + 10, D3_X + 12, D3_Y2);
				D3_EraseConsole(D3_X + 30, D3_X + 32, D3_Y2);
				D3_Y2 = D3_Y;
				GotoXY(D3_X + 11, D3_Y2);
				cout << D3_Left_Arrow;
				GotoXY(D3_X + 31, D3_Y2);
				cout << D3_Right_Arrow;
			}
			break;
		case VK_UP: case 0x57: //Up arrow
			if (D2_INGAME_MUSIC) PlaySound(TEXT("sounds//switch-selection.wav"), NULL, SND_FILENAME | SND_ASYNC);
			if (D3_Y2 != D3_Y)
			{
				D3_EraseConsole(D3_X + 10, D3_X + 12, D3_Y2);
				D3_EraseConsole(D3_X + 30, D3_X + 32, D3_Y2);
				D3_Y2 = D3_Y;
				GotoXY(D3_X + 11, D3_Y2);
				cout << D3_Left_Arrow;
				GotoXY(D3_X + 31, D3_Y2);
				cout << D3_Right_Arrow;
			}
			else if (D3_Y2 == D3_Y)
			{
				D3_EraseConsole(D3_X + 10, D3_X + 12, D3_Y2);
				D3_EraseConsole(D3_X + 30, D3_X + 32, D3_Y2);
				D3_Y2 += 4;
				GotoXY(D3_X + 11, D3_Y2);
				cout << D3_Left_Arrow;
				GotoXY(D3_X + 31, D3_Y2);
				cout << D3_Right_Arrow;
			}
			break;
		default:
			break;
		}
	}
}