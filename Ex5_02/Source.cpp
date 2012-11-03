#include <iostream>

using namespace std;

int incr10(int num);

int main(){
	int num = 3;
	cout << endl << "incr10(num) = " << incr10(num) << endl;
	cout << "num = " << num << endl;

	return 0;
}

int incr10(int num){
	num+=10;
	return num;
}