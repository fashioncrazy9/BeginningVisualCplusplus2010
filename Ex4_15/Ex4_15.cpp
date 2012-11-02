// Ex4_15.cpp : main project file.

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args){
	array<String^>^ names = {
		"Jill", "Ted", "Marry", "Eve", "Bill",
		"Al", "Ned", "Zoe", "Dan", "Jean"
	};
	
	array<int>^ weights = {
		103, 168, 128, 115, 180,
		176, 209, 98, 190, 130
	};

	array<String^>^ toBeFound = {
		"Bill", "Eve", "Al", "Fred"
	};

	Array::Sort(names, weights);

	int result = 0;
	for each(String^ name in toBeFound){
		result = Array::BinarySearch(names, name);
		if(result < 0)
			Console::WriteLine(L"{0} was not found.", name);
		else
			Console::WriteLine(L"{0} weighs {1} lbs.", name, weights[result]);
	}

    return 0;
}
