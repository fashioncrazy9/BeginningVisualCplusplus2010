// Ex2_11.cpp : main project file.

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    int apples, oranges;
	int fruit;

	apples = 5;
	oranges = 6;
	fruit = oranges + apples;

	Console::WriteLine(L"Oranges are not the only fruit...");
	Console::WriteLine(L" - and we have "+fruit+L" fruits in all.");
    return 0;
}
