// Ex4_20.cpp : main project file.

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    array<double>^ data = {
		1.5, 3.5, 6.7, 4.2, 2.1
	};
	interior_ptr<double> pstart = &data[0];
	interior_ptr<double> pend = &data[data->Length-1];

	double sum = 0.0;

	while(pstart <= pend)
		sum += *pstart++;

	Console::WriteLine(L"Total of data array elements = {0}\n", sum);
	array<String^>^ strings = {
		L"Land ahoy!",
		L"Splice the mainbrace!",
		L"Shiver me timbers",
		L"Never throw into the wind"
	};

	for(interior_ptr<String^> pstring = &strings[0]; pstring-&strings[0] < strings->Length; pstring++)
		Console::WriteLine(*pstring);

    return 0;
}
