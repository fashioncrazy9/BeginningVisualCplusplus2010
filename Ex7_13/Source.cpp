#include <iostream>

using namespace std;

class CBox{
private:
	double m_Length;
	double m_Width;
	double m_Height;

public:
	explicit CBox(double length = 1.0, double width = 1.0, double height = 1.0){
		cout << endl << "Constructor called!";
		m_Length = length;
		m_Width = width;
		m_Height = height;
	}

	double Volume() const{
		return m_Height*m_Length*m_Width;
	}

	bool Compare(CBox* pBox) const{
		if(!pBox){
			return 0;
		}
		return this->Volume() > pBox->Volume();
	}
};

int main(void){
	CBox boxes[5];
	CBox match(2.2, 1.1, 0.5);
	CBox cigar(8.0, 5.0, 1.0);
	CBox* pB1 = &cigar;
	CBox* pB2 = nullptr;

	cout << endl << "Address of cigar is " << pB1 << endl << "Volume of cigar is " << pB1->Volume();

	pB2 = &match;
	if(pB2->Compare(pB1)){
		cout << endl << "match is greater than cigar.";
	}else{
		cout << endl << "match is less than or equal to cigar.";
	}

	pB1 = boxes;
	boxes[2] = match;
	cout << endl << "Volume of boxes[2] is " << (pB1+2)->Volume() << endl;

	return 0;
}