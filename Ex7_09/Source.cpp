#include <iostream>

using namespace std;

class CBox{
private:
	double m_Length;
	double m_Height;
	double m_Width;
public:
	explicit CBox(double lv = 1.0, double bv = 1.0, double hv = 1.0){
		cout << endl << "Constructor called!";
		m_Length = lv;
		m_Width = bv;
		m_Height = hv;
	}

	double Volume(){
		return m_Length*m_Width*m_Height;
	}
};

int main(void){
	CBox box1(78.0, 24.0, 18.0);
	CBox box2 = box1;

	cout << endl << "box1 volume = " << box1.Volume();
	cout << endl << "box2 volume = " << box2.Volume();

	cout << endl << "&box1=" << &box1 << endl << "&box2=" << &box2 << endl;

	return 0;
}