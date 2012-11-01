#include <iostream>

using namespace std;

int main(void){
	char letter(0);

	cout << endl << "Enter a character: ";
	cin >> letter;

	if(((letter >= 'A') && (letter <= 'Z')) ||
		((letter >= 'a') && (letter <= 'z'))){
			cout << endl << "You entered a letter." << endl;
	}else{
		cout << endl << "You didn't enter a letter." << endl;
	}

	return 0;
}