#include <iostream>

using namespace std;

double* treble1(double data); // wrong one
double* treble2(double data); // correct one

int main(void){
	double num = 5.0;
	double* ptr = nullptr;

	ptr = treble1(num);
	cout << endl << "Three times num = " << 3.0*num;
	cout << endl << "Wrong result = " << *ptr;
	ptr = treble2(num);
	cout << endl << "Correct result = " << *ptr;
	delete ptr;	// we must delete this pointer because it's dynamically allocated in treble2
	return 0;
}												

double* treble1(double data){
	double result = 0.0;
	result = 3.0*data;
	return &result;
}

double* treble2(double data){
	double* result = new double(0.0);  //dynamic allocation - we must delete it before the end of the program
	*result = 3.0*data;
	return result;
}