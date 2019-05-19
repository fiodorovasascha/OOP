#pragma once
#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cstring>
#include <conio.h>
#include <string>
#include <windows.h>
#include <vector>
#include <algorithm>
using namespace std;
const int NotUsed = system("color 2E"); 

const enum ConsoleColor
{
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};

struct Vacation {
	string continent;
	string country;
	string type;
	string number_of_stars;
	string payment;
	string days;

	int Skidka();

	void returnnn();

	double Search_Criteria(Vacation v);
};

class Decoration {
public:
	void setCursorPosition(int x, int y);

	void SetColor(int text, ConsoleColor background);

	void x(int x, int y);

	void hello();
};

vector <Vacation> poisk(Vacation a[16], Vacation b[2]);

#endif // !HEADER_H
