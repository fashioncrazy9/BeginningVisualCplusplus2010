// Ex2_04.cpp
// Using escape sequences

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	char newline = '\n';
	cout << newline;
	cout << "\"We\'ll make our escapes in sequence\", he said.";
	cout << "\n\tThe program\'s over, it\'s time to make a beep beep.\a\a";
	cout << newline;
	return 0;
}