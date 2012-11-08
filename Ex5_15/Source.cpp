#include <iostream>

using namespace std;

double power(double x, int n);

int main(void){
	double x = 2.0;
	double result = 0.0;

	for(int index = -3; index <=3; index++)
		cout << x << " to the power " << index << " is " << power(x, index) << endl;

	return 0;
}

double power(double x, int n){
	if(n < 0){
		x = 1.0/x;
		n = -n;
	}
	if(n > 0){
		return x*power(x, n-1);
	}else{
		return 1.0;
	}
}