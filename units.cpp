#include "../std_lib_facilities.h"

int main() {

	double number1, number2 = 0;
	char op = 'w';
	cout << "Please enter two values differentiated by a 'space' or 'enter'. If you wish to exit the program enter a '|' after the two values, if you wish to continue, enter another operator!\n";
	while (op != '|')
		cin >> number1 >> number2 >> op;
	if (number1>number2)
		cout << "The smaller value is: " << number2 << " and the larger value is: " << number1 << "!\n";
	else if (number1<number2)
		cout << "The smaller value is: " << number1 << " and the larger value is: " << number2 << "!\n";
	if (number1==number2)
		cout << "The numbers are equal!\n";
	else if (1.011 > (number1/number2) && 0.989 < (number1/number2))
		cout << "The numbers are almost equal!\n";
	return 0;
}