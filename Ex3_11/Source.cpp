#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
	for(char capital = 'A', small = 'a'; capital <= 'Z'; capital++, small++){
		cout << endl << "\t" << capital 
			<< hex << setw(10) << static_cast<int>(capital)
			<< dec << setw(10) << static_cast<int>(capital)
			<< " " << small
			<< hex << setw(10) << static_cast<int>(small)
			<< dec << setw(10) << static_cast<int>(small)
			<< endl;
	}

	return 0;
}