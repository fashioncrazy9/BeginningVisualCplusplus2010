#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char* str = "Smith, where Jones had had \"had had\" had had \"had\"."
		"\n\"Had had\" had had the examiners' approval.";
	char* word = "had";
	cout << "The string to be searched is: " << endl << str << endl;

	int count = 0;
	char* pstr = str;
	char* found = nullptr;

	while(true){
		found = strstr(pstr, word);
		if(!found){
			break;
		}
		count++;
		pstr = found+strlen(word);
	}

	cout << "\"" << word << "\" was found " << count << " times in the string." << endl;

	return 0;
}