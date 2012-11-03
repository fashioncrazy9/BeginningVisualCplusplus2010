#include <iostream>

using namespace std;

int incr10(const int& num);

int main(){
	const int num = 3;
	int value = 6;

	int result = incr10(num);
	cout << endl << "inc(num) = " << result << endl << "num = " << num << endl;

	result = incr10(value);
	cout << endl << "inc(value) = " << result << endl << "value = " << value << endl;

	return 0;
}

int incr10(const int& num){
	cout << endl << "Value received = " << num;
	//num+=10 -> now it's illegal
	return num+10;
}