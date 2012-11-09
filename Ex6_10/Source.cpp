#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;

void eatSpaces(char* str);
double expr(char* str);
double term(char* str, int& index);
double number(char* str, int& index);
char* extract(char* str, int& index);
const int MAX = 80;

int main(void){
	char buffer[MAX] = {0};
	cout << endl << "Welcome to your friendly calculator."
		 << endl << "Enter an expression, or an empty line to quit."
		 << endl;

	for(;;){
		cin.getline(buffer, sizeof buffer);
		eatSpaces(buffer);
		if(!buffer[0])
			return 0;
		cout << "\t= " << expr(buffer) << endl << endl;
	}
}

void eatSpaces(char* str){
	int i = 0;
	int j = 0;
	while((*(str + i) = *(str + j++)) != '\0'){
		if(*(str+i) != ' ')
			i++;
	}
	return;
}

double expr(char* str){
	double value = 0.0;
	int index = 0;

	value = term(str, index);

	for(;;){
		switch (*(str + index++)){
		case '\0':
			return value;
		case '+':
			value += term(str, index);
			break;
		case '-':
			value -= term(str, index);
			break;
		default:
			cout << endl << "There was an error #1!" << endl;
			break;
		}
	}
}

double term(char* str, int& index){
	double value = 0.0;

	value = number(str, index);

	while(true){
		if(*(str+index) == '*')
			value *= number(str, ++index);
		else if(*(str+index) == '/')
			value /= number(str, ++index);
		else
			break;		
	}

	return value;
}

double number(char* str, int& index){
	double value = 0.0;

	if(*(str+index) == '('){
		char* pSubStr = nullptr;
		pSubStr = extract(str, ++index);
		value = expr(pSubStr);
		delete[] pSubStr;
		return value;
	}

	if(!isdigit(*(str+index))){
		cout << endl << "There was an error #2!" << endl;
		exit(1);
	}

	while(isdigit(*(str+index))){
		value = 10*value+(*(str+index++) - '0');
	}
	
	if(*(str+index) != '.')
		return value;

	double factor = 1.0;

	while(isdigit(*(str+(++index)))){
		factor *= 0.1;
		value = value + (*(str+index)-'0')*factor;
	}

	return value;
}

char* extract(char* str, int& index){
	char buffer[MAX];
	char* pStr = nullptr;

	int numL = 0;
	int bufIndex = index;
	do{
		buffer[index-bufIndex] = *(str+index);
		switch (buffer[index-bufIndex]){
		case ')':
			if(0 == numL){
				buffer[index-bufIndex] = '\0';
				++index;
				pStr = new char[index-bufIndex];
				if(!pStr){
					cout << "Memory allocation failed, program terminated." << endl;
					exit(1);
				}
				strcpy_s(pStr, index-bufIndex, buffer);
				return pStr;
			}else{
				numL--;
				break;
			}
		case '(':
			numL++;
			break;
		}
	}while(*(str+index++)!= '\0');

	cout << "Ran off the end of the expression, must be a bad input." << endl;
	exit(1);
}