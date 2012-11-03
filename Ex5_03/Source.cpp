#include <iostream>

using namespace std;

int incr10(int* num);

int main(){
	int num = 3;
	int* pnum = &num;

	cout << endl << "Address passed = " << pnum << endl;
	int result = incr10(pnum);
	cout << endl << "incr10(pnum) = " << result;

	cout << endl << "num = " << num << endl;

	return 0;
}

int incr10(int* num){
	cout << "Address received = " << num;
	*num += 10;
	return *num;
}