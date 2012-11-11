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

	double Volume(){
		return m_Length*m_Width*m_Height;
	}
};

int main(void){
	CBox box1(78.0, 24.0, 18.0);
	CBox cigarBox(8.0, 5.0, 1.0);

	double boxVolume = 0.0;

	boxVolume = box1.Volume();

	cout << endl << "Volume of box1=" << boxVolume;
	cout << endl << "Volume of cigarBox="<<cigarBox.Volume();
	cout << endl;

	return 0;
}