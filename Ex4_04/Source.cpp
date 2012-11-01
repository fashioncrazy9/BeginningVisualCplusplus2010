#include <iostream>

using namespace std;

int main(){
	char stars[6][80] = {
	  "Robert Redford",
	  "Hopalong Cassidy",
	  "Lassie",
	  "Slim Pickens",
	  "Boris Karloff",
	  "Oliver Hardy"
	};

	int dice = 0;

	cout << endl << "Pick a lucky star!" << endl << "Enter a number between 1 and 6: ";
	cin >> dice;

	if(dice >= 1 && dice <= 6){
		cout << endl << "Your lucky star is " << stars[dice -1];
	}else{
		cout << endl << "Sorry, you haven't got a lucky star.";
	}

	cout << endl;

	return 0;
}