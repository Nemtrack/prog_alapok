#include "std_lib_facilities.h"

int main(){

	//task 1-2
	int seven = 7;
	int* p1 = new int {seven};
	cout << p1 << '\n' << *p1 << endl;

	//task 3
	int* p2 = new int [7] {1, 2, 4, 8, 16, 32, 64};

	//task 4
	for (int i = 0; i < 7; ++i)
	{
		cout << p2[i] << ' ';
	}
	cout << endl;
	cout << p2 << endl;

	//task 5
	int* p3 = p2;
	p1 = p3;
	p3 = p2;

	for (int i = 0; i < 7; ++i)
	{
		cout << p1[i] << ' ';
	}

	for (int i = 0; i < 7; ++i)
	{
		cout << p2[i] << ' ';
	}

	delete[] p1, p2, p3, seven;

}