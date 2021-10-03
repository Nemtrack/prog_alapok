#include "../std_lib_facilities.h"

int main() {

	double smallest = 1.7976931348623157E+308;
	double largest = 1.7976931348623157E-308;
	double number = 0;
	while (cin >> number){
		cout << number << '\n';
		if (number<=smallest){
			smallest = number;
			cout << "The smallest so far: " << smallest << '\n';
		}
		else if (number>=largest){
			largest = number;
			cout << "The largest so far: " << largest << '\n';
		}
}
	return 0;
}