#include <iostream>

using namespace std;

int main(){
	int i = 1, sum = 0;
	const int max = 10;

	for (i = 1; i<=max; i++){
		sum += i;
	}

	cout << endl << "sum = " << sum << endl << "i = " << i << endl;
	return 0;
}