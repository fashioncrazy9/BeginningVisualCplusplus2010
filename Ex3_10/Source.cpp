#include <iostream>

using namespace std;

int main(){
	double value = 0.0;
	double sum = 0.0;
	int i = 0;
	char indicator = 'n';

	for(;;){
		cout << endl << "Enter a value: ";
		cin >> value;
		++i;
		sum += value;

		cout << endl << "Do you want to enter another value (y/n)? ";
		cin >> indicator;
		if(('n' == indicator) ||('N' == indicator))
			break;
	}

	cout << endl << "The average of the " << i << " values you entered is " << sum/i << "." << endl;

	return 0;
}