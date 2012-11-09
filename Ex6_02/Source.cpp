#include <iostream>
using namespace std;

double squared(double);
double cubed(double);
double sumArray(double array[], int len, double (*pfun)(double));

int main(void){
	double array[] = {
		1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5
	};									 
	int len = sizeof array / sizeof array[0];
	cout << endl << "Sum of squares = " << sumArray(array, len, squared);
	cout << endl << "Sum of cubes = " << sumArray(array, len, cubed);
	cout << endl;

	return 0;
}

double squared(double x){
	return x*x;
}
double cubed(double x){
	return x*x*x;
}

double sumArray(double array[], int len, double (*pfun)(double)){
	double total = 0.0;
	for(int i = 0; i<len; i++)
		total += pfun(array[i]);

	return total;
}