#include <iostream>

using namespace std;

int main(void){
	char* pdata = nullptr;
	size_t count = ~static_cast<size_t>(0)/2;
	try{
		pdata = new char[count];
		cout << "Memory allocated." << endl;
	}catch(bad_alloc &ex){
		cout << "Memory allocation failed." << endl
			<< "The information from the exception object is: " << endl
			<< ex.what() << endl;
	}

	delete[] pdata;

	return	0;
}