#include "std_lib_facilities.h"
void swap_v(int,int)
{
	int temp;
	int a;
	int b;
	temp = a, a=b;
	b=temp;
}
void swap_r(int&,int&)
{
	int temp;
	int a;
	int b;
	temp = a, a=b;
	b=temp;
}
void swap_cr(const int&, const int&)
{
	int temp;
	int a;
	int b;
	temp = a, a=b;
	b=temp;
}
int main()
{
	cout << "swap_v: " << endl;
	int x = 7;
	int y =9;
	swap_v(x,y);
	swap_v(7,9);
	cout << x << ", " << y << endl;
	const int cx = 7;
	const int cy = 9;
	swap_v(cx,cy);
	swap_v(7.7,9.9);
	cout << cx << ", " << cy << endl;
	double dx = 7.7;
	double dy = 9.9;
	swap_v(dx,dy);
	swap_v(7.7,9.9);
	cout << dx << ", " << dy << endl;

	cout << "swap_r: error" << endl;
	/*
	swap_r(x,y);
	swap_r(7,9);
	cout << x << ", " << y << endl;
	swap_r(cx,cy);
	swap_r(7.7,9.9);
	cout << cx << ", " << cy << endl;
	swap_r(dx,dy);
	swap_r(7.7,9.9);
	cout << dx << ", " << dy << endl;
	*/
	cout << "swap_cr: " << endl;
	swap_cr(x,y);
	swap_cr(7,9);
	cout << x << ", " << y << endl;
	swap_cr(cx,cy);
	swap_cr(7.7,9.9);
	cout << cx << ", " << cy << endl;
	swap_cr(dx,dy);
	swap_cr(7.7,9.9);
	cout << dx << ", " << dy << endl;
	return 0;
}