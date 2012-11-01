#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void){
	long number(0L);
	cout << endl << "Enter an integer number less than 2 billion: ";
	cin >> number;

	// number % 2L -> if its 0 it means false, if it's non-zero it means true
	// its equivalent to number % 2L != 0
	if(number % 2L){
		cout << endl << "Your number is odd." << endl;
	}else{
		cout << endl << "Your number is even." << endl;
	}

	return 0;
}