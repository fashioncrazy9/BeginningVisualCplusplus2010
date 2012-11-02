// Ex4_17.cpp : main project file.

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    array<array<String^>^>^ grades = {
		gcnew array<String^>{"Louise", "Jack"},
		gcnew array<String^>{"Bill", "Mary", "Ben", "Joan" },
		gcnew array<String^>{ "Jill", "Will", "Phil" },
		gcnew array<String^>{ "Ned", "Fred", "Ted", "Jed", "Ed" },
		gcnew array<String^>{ "Dan", "Ann" }
	};

	wchar_t gradeLetter = 'A';

	for each(array<String^>^ grade in grades){
		Console::WriteLine(L"Students with grade {0}:", gradeLetter++);
		for each(String^ student in grade){
			Console::Write(L"{0,12}", student);
		}
		Console::WriteLine();
	}

    return 0;
}
