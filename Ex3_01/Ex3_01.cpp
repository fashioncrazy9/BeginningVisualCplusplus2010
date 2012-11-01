#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void){
	char letter(0);
	cout << endl << "Enter a letter: ";
	cin >> letter;

	if(letter >= 'A'){
		if(letter <= 'Z'){
			cout << endl << "You entered a capital letter." << endl;
			return 0;
		}
	}
	if(letter >= 'a'){
		if(letter <= 'z'){
			cout << endl << "You entered a small letter." << endl;
			return 0;
		}
	}

	cout << endl << "You did not enter a letter." << endl;
	return 0;
}