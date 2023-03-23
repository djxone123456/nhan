#pragma once
#ifndef RANKING_H
#define RANKING_H
#define DEBUG_RANKING
#include "Control.h"
#include "View.h"
#include "Data.h"

//DEFINES
struct TopRanking
{
	string Name;
	int Wins, Loses, Draws;
	TopRanking(string _Name = "<NO DATA>", int _Wins = 0, int _Draws = 0, int _Loses = 0) //Set default
	{
		Name = _Name;
		Wins = _Wins;
		Loses = _Loses;
		Draws = _Draws;
	}
};

struct D1_POINT
{
	int x, y;
	string Name;
	wstring WName;
	int width;

	D1_POINT(int _x = 0, int _y = 0, string _Name = "", int _width = 0)
	{
		x = _x; y = _y;
		Name = _Name;
		width = _width;
	}

	D1_POINT(int _x = 0, int _y = 0, wstring _WName = L"", int _width = 0)
	{
		x = _x; y = _y;
		WName = _WName;
		width = _width;
	}
};

//VARIABLES

//DEBUG
#ifdef DEBUG_RANKING
static void Init(TopRanking* arr);

#endif

//FUNCTIONS HERE
static void AllignCenter(const D1_POINT);
static void SplittingLine(int, int);
static void TopPlayerLogo(int, int);
static void CreateBar(int, int, int, int);
static void CreateRankingStep(int, int, int, int, int, int, TopRanking*);
static void CreateRankingTable(int, int, TopRanking*);
int Ranking();

#endif
