// Ex6_12.cpp : main project file.

#include "stdafx.h"
#include <cstdlib>

using namespace System;

String^ eatSpaces(String^ str);
double expr(String^ str);
double term(String^ str, int^ index);
double number(String^ str, int^ index);
String^ extract(String^ str, int^ index);

int main(array<System::String ^> ^args){
	String^ buffer;
	Console::WriteLine(L"Welcome to your friendly calculator!");
	Console::WriteLine(L"Enter an expression, or an empty line to quit.");
	for(;;){
		buffer = eatSpaces(Console::ReadLine());
		if(String::IsNullOrEmpty(buffer))
			return 0;
		Console::WriteLine(L" = {0}\n\n", expr(buffer));
	}

	return 0;
}

String^ eatSpaces(String^ str){
	return str->Replace(L" ", L"");
}

double expr(String^ str){
	int^ index = gcnew int(0);
	double value = term(str, index);
	while(*index < str->Length){
		switch (str[*index]){
		case '+':
			++(*index);
			value += term(str, index);
			break;
		case '-':
			++(*index);
			value -= term(str, index);
			break;
		default:
			Console::WriteLine(L"Error #1!");
			exit(1);
		}
	}
	return value;
}

double term(String^ str, int^ index){
	double value = number(str, index);

	while(*index < str->Length){
		if(L'*' == str[*index]){
			++(*index);
			value *= number(str, index);
		}else if(L'/' == str[*index]){
			++(*index);
			value /= number(str, index);
		}else{
			break;
		}
	}

	return value;
}

double number(String^ str, int^ index){
	double value = 0.0;

	if(L'(' == str[*index]){
		++(*index);
		String^ substr = extract(str, index);
		return expr(substr);
	}

	if(!Char::IsDigit(str, *index)){
		Console::WriteLine(L"Error #2!");
		exit(1);
	}

	while((*index < str->Length) && Char::IsDigit(str, *index)){
		value = 10.0*value+Char::GetNumericValue(str[(*index)]);
		++(*index);
	}

	if((*index == str->Length) || str[*index] != '.')
		return value;

	double factor = 1.0;
	++(*index);

	while((*index < str->Length) && Char::IsDigit(str, *index)){
		factor *= 0.1;
		value = value + Char::GetNumericValue(str[*index])*factor;
		++(*index);
	}

	return value;
}

String^ extract(String^ str, int^ index){
	int numL = 0;
	int bufindex = *index;

	while(*index < str->Length){
		switch(str[*index]){
		case ')':
			if(0 == numL)
				return str->Substring(bufindex, (*index)++ - bufindex);
			else
				numL--;
			break;
		case '(':
			numL++;
			break;
		}
		++(*index);
	}

	Console::WriteLine("Ran off the end of the expression, must be a bad input!");
	exit(1);
}
