// Ex4_18.cpp : main project file.

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	array<int>^ values = {
		2, 456, 23, -46, 34211, 456, 5609, 112098,
		234, -76504, 341, 6788, -909121, 99, 10
	};

	String^ formatStr1 = L"{0,";
	String^ formatStr2 = L"}";

	String^ number;

	int maxLength = 0;

	for each(int value in values){
		number = L"" + value;
		if(maxLength<number->Length)
			maxLength = number->Length;
	}
	String^ format = formatStr1 + (maxLength+1) +formatStr2;

	int numberPerLine = 3;
	for(int i = 0; i<values->Length; i++){
		Console::Write(format, values[i]);
		if((i+1)%numberPerLine == 0)
			Console::WriteLine();
	}

    return 0;
}
