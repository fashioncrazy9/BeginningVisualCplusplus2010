#include <iostream>

using namespace std;

int main(void){
	int height = 0;
	const double inchesToMeters = 0.0254;
	char ch = 'y';
	try{
		while('y' == ch || 'Y' == ch){
			cout << "Enter a height in inches: ";
			cin >> height;
			try{
				if(height > 100){
					throw "Height exceeds maximum";
				}
				if(height < 9){
					throw height;
				}
				cout << static_cast<double>(height)*inchesToMeters << " meters." << endl;
			}catch(const char message[]){
				cout << message << endl;
			}
			cout << "Do you want to continue (y\\n): ";
			cin >> ch;
		}
	}catch(int badHeight){
		cout << badHeight << " inches is below minimum." << endl;
	}

	return 0;
}