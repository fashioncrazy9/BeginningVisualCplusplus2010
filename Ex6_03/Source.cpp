#include <iostream>

using namespace std;

void showIt(const char message[] = "Something is wrong.");

int main(void){
	const char myMessage[] = "The end of the world is nigh.";
	showIt();
	showIt("Something is terribly wrong!");
	showIt();
	showIt(myMessage);
	cout << endl;

	return 0;
}

void showIt(const char message[] /* = "Something is wrong." */){
	cout << endl << message;
}