#include <iostream>

using namespace std;

int main(void){
	int counts[] = {34, 54, 0, 27, 0, 10, 0};
	int time = 60;

	for(int i = 0; i< sizeof counts/sizeof counts[0]; i++){
		try{
			cout << endl << "Hour "<< i+1;
			if(0 == counts[i])
				throw "Zero count - calculation not possible!";
			cout << " minutes per item: " << static_cast<double>(time)/counts[i];
		}catch(const char message[]){
			cout << endl << message << endl;
		}
	}

	return 0;
}