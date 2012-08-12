// Ex2_06.cpp
// Exercising the comma operator
#include <iostream>

using namespace std;

int main(){
	long num1(0L), num2(0L), num3(0L), num4(0L);
	num4 = (num1 = 10L, num2 = 20L, num3 = 30L);
	cout << endl << "The value of a series of expressions ";
	cout << endl << "is the value of the rightmost: " << num4;
	cout << endl;
	return 0;
}