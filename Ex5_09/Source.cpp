#include <iostream>

using namespace std;

int incr10(int&& num);

int main(){
	int num = 3;
	int value = 6;
	int result = 0;

	result = incr10(value+num);
	cout << endl << "incr10(value+num) = " << result << endl << "value = " << value << endl;

	result = incr10(5);
	cout << endl << "incr10(5) = " << result << endl;

	return 0;
}

int incr10(int&& num){
	cout << endl << "Value received = " << num;
	num+=10;
	return num;
}