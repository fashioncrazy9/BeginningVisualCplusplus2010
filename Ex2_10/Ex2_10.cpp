#include <iostream>

namespace myStuff{
	int value = 0;
}

using namespace myStuff;

int main(void){
	std::cout << "Enter an integer: ";
	std::cin >> value;
	std::cout << std::endl << "You entered " << value << std::endl;
	return 0;
}