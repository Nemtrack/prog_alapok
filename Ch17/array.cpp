#include "std_lib_facilities.h"

	//task4, 7
ostream& print_array(ostream& os, int* a, int n){
		for (int i = 0; i < n; ++i){
			os << a[i] << '\n';
		}
    return os;
}

ostream& print_vector(ostream& os, vector<int>& v)
{
    for (int vv : v)
    	os << vv << '\n';
    return os;
}

void push_vector(vector<int>& v, int n){
	for (int i = 100; i < n+100; ++i)
	{
		v.push_back(n);
	}
}

int main(){

	//task 1
	int* array = new int[10];

	//task 2
	for (int i = 0; i < 10; ++i){
		cout << array[i] << ' ';
	}

	//task 3
	delete[] array;

	cout << endl;

	//task 5	
	int* array10 = new int[10] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};

	print_array(cout, array10, 10);

	delete[] array10;

	cout << endl;

	//task 6
	int* array11 = new int[11] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};

	print_array(cout, array11, 11);

	delete[] array11;

	cout << endl;

	//task8
	int* array20 = new int[20] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110,
		111, 112, 113, 114, 115, 116, 117, 118, 119};

	print_array(cout, array20, 20);

	delete[] array20;

	cout << endl;

	vector<int> v10(10);

    int y = 100;
    for (int& v : v10) {
        v = y;
        ++y;
    }

    print_vector(cout, v10);
	return 0;
}