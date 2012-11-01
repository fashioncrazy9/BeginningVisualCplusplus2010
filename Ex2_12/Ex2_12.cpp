// Ex2_12.cpp : main project file.

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args){
	double carpetPriceSqYd = 27.95;
	double roomWidth = 13.5;
	double roomLength = 24.75;
	const int feetPerYard = 3;
	double roomWidthYds = roomWidth/feetPerYard;
	double roomLenfthYds = roomLength/feetPerYard;
	double carpetPrice = roomWidthYds*roomLenfthYds*carpetPriceSqYd;

	Console::WriteLine(L"Room size is {0:F2} yards by {1:F2} yards.", roomLenfthYds, roomWidthYds);
	Console::WriteLine(L"Room area is {0:F2} square yards", roomLenfthYds*roomWidthYds);
	Console::WriteLine(L"Carpet price is ${0:F2}", carpetPrice);
    return 0;
}
