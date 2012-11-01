#include <iostream>

using namespace std;

int main(){
	char indicator = 'n';
	long value = 0L, factorial = 0L;

	do{
		cout << endl << "Enter an intiger value: ";
		cin >> value;
		factorial = 1L;
		for(long i = 2L; i<=value; i++){
			factorial *= i;
		}
		cout << "Factorial " << value << " is " << factorial << endl;
		cout << "Do you want to enter another value (y/n): ";
		cin >> indicator;
	}	while(('y' == indicator) || ('Y' == indicator));

	return 0;
}