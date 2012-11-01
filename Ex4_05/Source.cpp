#include <iostream>

using namespace std;

int main(){
	long* pnumber(nullptr);
	long number1 = 55, number2 = 99;
	pnumber = &number1;
	*pnumber += 11;

	cout << endl << "number1 = " << number1 << "   &number1 = " << hex << pnumber;

	pnumber = &number2;
	number1 = *pnumber*10;

	cout << endl << "number1 = " << dec << number1 << "  &pnumber = " << hex << pnumber << "    *pnumber = " << dec << *pnumber << endl;

	return 0;
}