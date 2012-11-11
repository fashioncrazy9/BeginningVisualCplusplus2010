#include <iostream>

using namespace std;

class CBox{
private:
	double m_Length;
	double m_Width;
	double m_Height;

public:
	static int objectCount;

	CBox(double length, double width = 1.0, double height = 1.0){
		cout << endl << "Constructor called!";
		m_Length = length;
		m_Width = width;
		m_Height = height;
		objectCount++;
	}

	CBox(){
		cout << endl << "Default constructor called!";
		m_Length = m_Width = m_Height = 1.0;
		objectCount++;
	}

	double Volume() const{
		return m_Length*m_Width*m_Height;
	}
};

int CBox::objectCount = 0;

int main(void){
	CBox boxes[5];
	CBox cigar(8.0, 5.0, 1.0);

	cout << endl << endl << "Number of objects (through class) = " << CBox::objectCount;
	cout << endl << endl << "Number of objects (through object) = " << boxes[2].objectCount;
	cout << endl;

	return 0;
}