#include <iostream>

using namespace std;

int main(){
	const int MAX = 100;
	char buffer[MAX];
	char* pbuffer(buffer);

	cout << endl << "Enter a string of less than " << MAX << " characters: " << endl;
	cin.getline(buffer, MAX, '\n');
	while(*pbuffer){
		pbuffer++;
	}

	cout << endl << "The string \"" << buffer << "\" has " << pbuffer - buffer << " characters." << endl;

	return 0;
}