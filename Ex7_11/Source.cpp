#include <iostream>

using namespace std;

class CBox{
private:
	double m_Length;
	double m_Height;
	double m_Width;

public:
	CBox(double length, double width = 1.0, double height = 1.0){
		cout << endl << "Constructor called!";
		m_Length = length;
		m_Width = width;
		m_Height = height;
	}

	CBox(){
		cout << endl << "Default constructor called!";
		m_Length = m_Width = m_Height = 1.0;
	}

	double Volume() const{
		return m_Height*m_Length*m_Width;
	}
};

int main(void){
	CBox boxes[5];
	CBox cigar(8.0, 5.0, 1.0);

	cout << endl << "Volume of boxes[3]=" << boxes[3].Volume();
	cout << endl << "Volume of cigar=" << cigar.Volume() << endl;

	return 0;
}