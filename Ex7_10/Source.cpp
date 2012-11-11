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

	bool Compare(CBox& xBox){
		return this->Volume() > xBox.Volume();
	}
};

int main(void){
	CBox match(2.2, 1.1, 0.5);
	CBox cigar(8.0, 5.0, 1.0);

	if(cigar.Compare(match)){
		cout << endl << "match is smaller than cigar!";
	}else{
		cout << endl << "match is equal to or larger than cigar!";
	}
	cout << endl;

	return 0;
}