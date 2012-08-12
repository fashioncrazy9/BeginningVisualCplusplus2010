// Ex2_01.cpp
// A simple example of a program.

#include <iostream>

using namespace std;

int main(){
	int apples, oranges;
	int fruit;
	apples = 5; oranges = 6;
	fruit = apples + oranges;

	cout << endl;
	cout << "Oranges are not the only fruit..." << endl
		 << "- and we have " << fruit << " fruits in all." << endl;

	return 0;
}