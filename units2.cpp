#include "../std_lib_facilities.h"

int main() {

	double value = 0;
	double largest = 2.22507e-307;
	double smallest = 2.22507e+307;
	char op = 'w';
	cout << "Please enter a value before a random char except '|', if you wish to exit the program, enter '|' after a number!\n";
	while(op != '|'){
		cin >> value >> op;
		cout << value;
		if (value<=smallest){
			smallest = value;
			cout << " the smallest so far" << '\n';
		}
		else if (value>=largest){
			largest = value;
			cout << " the largest so far" << '\n';
		}
	}
	return 0;
}