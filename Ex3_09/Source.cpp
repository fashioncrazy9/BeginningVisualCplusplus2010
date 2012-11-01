#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	const int max = 10;
	for(long i = 0L, power = 1L; i<=max; i++, power += power){
		cout << endl << setw(10) << i << setw(10) << power;
	}
	cout << endl;

	return 0;
}