#include <iostream>

using namespace std;

double power(double x, int n);

int main(void){
	int index = 3;
	double x = 3.0;
	double y = 0.0;

	y = power(5.0, 3);
	cout << endl << "5 cubed is " << y << endl;
	cout << "3 cubed is " << power(3.0, index) << endl;
	double temp = power(2.0, 2);
	x = power(x, static_cast<int>(power(2.0,2)));
	cout << "x = " << x << endl;

	return 0;
}

double power(double x, int n){
	double result = 1.0;
	for(int i = 1; i<=n; i++){
		result *= x;
	}
	return result;
}