#include <iostream>

using namespace std;

struct RECTANGLE{
	int Left;
	int Top;

	int Right;
	int Bottom;
};

long Area(const RECTANGLE& aRect);

void MoveRect(RECTANGLE& aRect, int x, int y);

int main(void){
	RECTANGLE yard = {0, 0, 100, 120};
	RECTANGLE pool = {30, 40, 70, 80};
	RECTANGLE hut1, hut2;

	hut1.Left = 70;
	hut1.Top = 10;
	hut1.Right = hut1.Left+25;
	hut1.Bottom = 30;

	hut2 = hut1;
	MoveRect(hut2, 10, 90);

	cout << endl 
		 << "Coordinates of hut2 are "
		 << hut2.Left << ", " << hut2.Top << " and "
		 << hut2.Right << ", " << hut2.Bottom;
	cout << endl
		 << "The area of the yard is "
		 << Area(yard);

	cout <<	endl
		 << "The area of the pool is "
		 << Area(pool) << endl;
	
	return 0;
}

long Area(const RECTANGLE& aRect){
	return (aRect.Right - aRect.Left)*(aRect.Bottom-aRect.Top);
}

void MoveRect(RECTANGLE& aRect, int x, int y){
	int length = aRect.Right - aRect.Left;
	int width = aRect.Bottom - aRect.Top;

	aRect.Left = x;
	aRect.Top = y;
	aRect.Right = x + length;
	aRect.Bottom = y + width;
}