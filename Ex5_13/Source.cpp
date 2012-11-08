#include <iostream>
#include <iomanip>

using namespace std;

double& lowest(double values[], int length);

int main(void){
	double array[] = {
		3.0, 10.0, 1.5, 15.0, 2.7, 23.0,
		4.5, 12.0, 6.8, 13.5, 2.1, 14.0
	};
	int len = sizeof array/sizeof array[0];

	cout << endl;
	for(int i = 0; i<len; i++){
		cout << setw(6) << array[i];
	}
	lowest(array, len) = 6.9; // change first lowest to 6.9
	lowest(array, len) = 7.9; // change second lowest to 7.9

	cout << endl;
	for(int i = 0; i<len; i++){
		cout << setw(6) << array[i];
	}

	cout << endl;

	return 0;
}

double& lowest(double values[], int length){
	int j = 0;
	for(int i = 1; i<length; i++){
		if(values[j] > values[i])
			j = i;
	}
	return values[j];
}