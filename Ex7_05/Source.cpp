#include <iostream>

using namespace std;

class CBox{
public:
	double m_Length;
	double m_Width;
	double m_Height;

	CBox(double length, double width, double height){
		cout << endl << "Constructor called!";
		m_Length = length;
		m_Width = width;
		m_Height = height;
	}

	CBox(){
		cout << endl << "Default constructor called!";
	}
	double Volume(){
		return m_Length*m_Width*m_Height;
	}
};

int main(void){
	CBox box1(78.0, 24.0, 18.0);
	CBox box2;
	CBox cigarBox(8.0, 5.0, 1.0);

	double boxVolume = 0.0;

	boxVolume = box1.Volume();
	cout << endl << "Volume of box1=" << boxVolume;
	box2.m_Height = box1.m_Height - 10;
	box2.m_Length = box1.m_Length / 2.0;
	box2.m_Width = 0.25*box1.m_Length;

	cout << endl << "Volume of box2=" << box2.Volume();
	cout << endl << "Volume of cigarBox=" << cigarBox.Volume();
	cout << endl;

	return 0;
}