// Ex4_14.cpp : main project file.

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    array<String^>^ names = {"Jill", "Ted", "Mary", "Eve", "Bill", "Al" };
	array<int>^weights = { 103, 168, 128, 115, 180, 176 };

	Array::Sort(names, weights);

	for each(String^ name in names){
		Console::Write(L"{0, 10}", name);
	}
	Console::WriteLine();

	for each(int weight in weights){
		Console::Write(L"{0, 10}", weight);
	}
	Console::WriteLine();
    return 0;
}
