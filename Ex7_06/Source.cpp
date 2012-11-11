#include <iostream>

using namespace std;

class CBox{
public:
	double m_Length;
	double m_Width;
	double m_Height;

	CBox(double length = 1.0, double width = 1.0, double height = 1.0){
		cout << endl << "Constructor called!";
		m_Length = length;
		m_Width = width;
		m_Height = height;
	}

	double Volume(){
		return m_Length*m_Width*m_Height;
	}
};

int main(void){
	CBox box2;
	cout << endl << "Volume of box2=" << box2.Volume() << endl;

	return 0;
}