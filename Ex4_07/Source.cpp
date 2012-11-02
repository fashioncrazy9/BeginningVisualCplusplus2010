#include <iostream>

using namespace std;

int main(){
	char* pstr[] = {
		"Robert Redford",
		"Hopalong Cassidy",
		"Lassie",
		"Slim Pickens",
		"Bors Karloff",
		"Oliver Hardy"
	} ;

	char* pstart = "Your lucky star is ";
	int dice = 0;

	cout << endl << "Pick a lucky star!" << endl << "Enter a number between 1 and 6: ";
	cin >> dice;

	if(dice >= 1 && dice <= 6){
		cout << pstart << pstr[dice-1];
	}else{
		cout << "Sorry you havent hot a lucky star!" << endl;
	}

	return 0;
}