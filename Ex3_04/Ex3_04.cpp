#include <iostream>

using namespace std;

int main(){
	int nCakes(1);

	cout << endl << "We have " << nCakes << " cake" << ((nCakes > 1) ? "s." : ".");
	nCakes++;
	cout << endl << "We have " << nCakes << " cake" << ((nCakes > 1) ? "s." : ".");

	return 0;
}