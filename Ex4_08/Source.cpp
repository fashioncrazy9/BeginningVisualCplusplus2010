#include <iostream>

using namespace std;

int main(){
	char* pstr[] = {
		"Rober Redford",
		"Hopalong Cassidy",
		"Lassie",
		"Slim Pickens",
		"Boris Karloff",
		"Oliver Hardy"
	};

	char* pstart = "Your lucky star is ";
	int count((sizeof pstr)/(sizeof pstr[0]));

	int dice = 0;

	cout << endl << "Pick a lucky star!" << endl << "Enter a number between 1 and 6: ";
	cin >> dice;
	cout << endl;

	if(dice > 0 && dice <= count){
		cout << pstart << pstr[dice-1];
	}else{
		cout << "You don't have a lucky star!";
	}								  

	cout << endl;

	return 0;
}