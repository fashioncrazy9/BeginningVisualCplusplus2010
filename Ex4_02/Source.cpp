#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int value[5] = {1,2,3};
	int junk[5];

	cout << endl;
	for(int i = 0; i<5;i++){
		cout << setw(12) << value[i];
	}
	cout << endl;
	for(int i = 0; i<5; i++){
		cout << setw(12) << junk[i];
	}
	cout << endl;
	return 0;
}