#include <iostream>

using namespace std;

int max(int array[], int len);
long max(long array[], int len);
double max(double array[], int len);

int main(void){
	int small[] = {1, 24, 34, 22};
	long medium[] = {23, 245, 123, 1, 234, 2345};
	double large[] = {23.0, 1.4, 2.456, 345.5, 12.0, 21.0};

	int lensmall = sizeof small / sizeof small[0];
	int lenmedium = sizeof medium / sizeof medium[0];
	int lenlarge = sizeof large / sizeof large[0];

	cout << endl << max(small, lensmall);
	cout << endl << max(medium, lenmedium);
	cout << endl << max(large, lenlarge);
	return 0;
}

int max(int array[], int len){
	int max = array[0];
	
	for(int i = 1; i<len; i++){
		if(max < array[i])
			max = array[i];
	}

	return max;
}

double max(double array[], int len){
	double max = array[0];
	
	for(int i = 0; i<len; i++){
		if(max < array[i])
			max = array[i];
	}

	return max;
}

long max(long array[], int len){
	long max = array[0];

	for(int i = 0; i<len; i++){
		if(max < array[i])
			max = array[i];
	}

	return max;
}