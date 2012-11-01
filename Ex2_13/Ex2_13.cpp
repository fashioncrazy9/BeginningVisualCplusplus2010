// Ex2_13.cpp : main project file.

#include "stdafx.h"

using namespace System;

private enum class Suit{
	Clubs, Diamonds, Hearts, Spades
	};

[Flags] private enum class FlagBits{
	Ready = 1, ReadMode = 2, WriteMode = 4, EOF = 8, Disabled = 16
	};

int main(array<System::String ^> ^args){
	Suit suit = Suit::Clubs;
	int value = safe_cast<int>(suit);
	Console::WriteLine(L"Suit is {0} and the value is {1}", suit, value);
	suit = Suit::Diamonds;
	value = safe_cast<int>(suit);
	Console::WriteLine(L"Suit is {0} and the value is {1}", suit, value);
	suit = Suit::Spades;
	value = safe_cast<int>(suit);
	Console::WriteLine(L"Suit is {0} and the value is {1}", suit, value);
	suit = Suit::Hearts;
	value = safe_cast<int>(suit);
	Console::WriteLine(L"Suit is {0} and the value is {1}", suit, value);

	FlagBits status = FlagBits::Ready | FlagBits::ReadMode | FlagBits::EOF;
	Console::WriteLine(L"Current status: {0}", status);

	int x = 3;
	double y = 2.0;
	Console::WriteLine(L"Type of x*y is {0}", (x*y).GetType());

    return 0;
}
