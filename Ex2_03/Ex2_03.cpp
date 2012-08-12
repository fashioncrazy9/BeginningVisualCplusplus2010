// Ex2_03.cpp
// Exercising input
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int num1 = 1234, num2 = 5678;
	cout << endl;
	cout << setw(6) << num1 << setw(6) << num2;
	cout << endl;
	cout << setiosflags(ios::left) << num1 << setw(6) << num2 << endl;
	cout << setiosflags(ios::right) << num1 << setw(6) << num2 << endl;

	return 0;
}