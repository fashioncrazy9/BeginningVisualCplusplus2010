#include <iostream>

namespace myStuff{
	int value = 0;
}

int main(void){
	std::cout << "Enter an integer: ";
	std::cin >> myStuff::value;
	std::cout << std::endl << "You entered " << myStuff::value << std::endl;

	return 0;
}