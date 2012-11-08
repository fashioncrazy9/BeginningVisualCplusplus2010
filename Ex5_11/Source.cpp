#include <iostream>
#include <cstdarg>

using namespace std;

int sum(int count, ...){
	if(count <= 0)
		return 0;
	va_list arg_ptr;
	va_start(arg_ptr, count);

	int sum = 0;
	for(int i = 0; i<count; i++){
		int value = va_arg(arg_ptr, int);
		sum+=value;
	}
	va_end(arg_ptr);
	return sum;
}

int main(void){
	cout << sum(4,25,10,15,5) << endl;
	cout << sum(2,4,1) << endl;

	return 0;
}
