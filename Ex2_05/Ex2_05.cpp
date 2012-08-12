// Ex2_05.cpp
// Calculating how many rolls of wallpaper are required for a room
#include <iostream>

using namespace std;

int main(){
	double height = 0.0, width = 0.0, length = 0.0;
	double perimeter = 0.0;
	const double rollWidth = 21.0;
	const double rollLength = 12.0*33.0;
	int strips_per_roll = 0;
	int strips_reqd = 0;
	int nrolls = 0;

	cout << endl;
	cout << "Enter the height of the room in inches: ";
	cin >> height;
	cout << endl;
	cout << "Now enter the length and width in inches: ";
	cin >> length >> width;

	strips_per_roll = static_cast<int>(rollLength/height);
	perimeter = 2.0*(length + width);
	strips_reqd = static_cast<int> (perimeter/rollWidth);
	nrolls = strips_reqd / strips_per_roll;

	cout << endl;
	cout << "For your room you need " << nrolls << " rolls of wallpaper." << endl;

	return 0;
}