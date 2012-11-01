#include <iostream>

using namespace std;

int main(void){
	int i = 1, sum = 0;
	const int max = 10;
loop:
	sum += i;
	if(++i <= max)
		goto loop;

	cout << endl << "sum = " << sum << endl << "i = " << i << endl;
	return 0;
}