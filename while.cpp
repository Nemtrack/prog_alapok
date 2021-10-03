#include "../std_lib_facilities.h"

int main() {

double number1, number2 = 0;

cout << "Please enter two numbers!\n";
	while (cin >> number1, cin >> number2){
		cout << "Your two numbers are: " << number1 << " and " << number2 << "!\n";
		/*For unknown reasons the program exits with any input other than int
		and spacebar*/
		if((char)number1 == '|' || (char)number2 == '|')
			break;
			if (number1>number2)
				cout << "The smaller value is: " << number2 << " and the larger value is: " << number1 << "!\n";
			else if (number1<number2)
				cout << "The smaller value is: " << number1 << " and the larger value is: " << number2 << "!\n";
					if (number1==number2)
						cout << "The numbers are equal!\n";
					else if (1.011 > (number1/number2) && 0.989 < (number1/number2))
						cout << "The numbers are almost equal!\n";
	}
	return 0;
}