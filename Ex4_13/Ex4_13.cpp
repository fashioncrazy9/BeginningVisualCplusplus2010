// Ex4_13.cpp : main project file.

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    array<double>^ samples = gcnew array<double>(50);

	Random^ generator = gcnew Random;

	for(int i = 0; i< samples->Length; i++){
		samples[i] = 100.0*generator->NextDouble();
	}

	double max = 0.0;

	Console::WriteLine(L"The array contains the following values: ");
	for(int i = 0; i<samples->Length; i++){
		Console::Write(L"{0,10:F2}", samples[i]);
		if((i+1)%5 == 0)
			Console::WriteLine();
		if(max < samples[i])
			max = samples[i];
	}

	Console::WriteLine(L"The maximum value in tha array is {0:F2}", max);
    return 0;
}
