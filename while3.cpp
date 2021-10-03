#include "../std_lib_facilities.h"

int main() {

	string unitString;
	double unitDouble, unitDoubleCM, unitDoubleM, unitDoubleIN, unitDoubleFT, unitSum = 0;
	double newSmallest = 1.7976931348623157E+308;
	double newLargest = 1.7976931348623157E-308;
	cout << "Please enter a number and a unit (number + ' ' + cm, in, ft, m) or press 'b' as unit to exit the loop and print out the loops former statistics: \n";
	while (cin >> unitDouble, cin >> unitString)
			if(unitString=="m"){
				unitDoubleCM=unitDouble*100;
				unitDoubleIN=unitDouble*(100/2.54);
				unitDoubleM=unitDouble;
				unitDoubleFT=unitDouble*(2.54*12);
			}
			else if(unitString=="in"){
				unitDoubleCM=unitDouble*2.54;
				unitDoubleM=unitDouble*(100/2.54);
				unitDoubleFT=unitDouble/12;
				unitDoubleIN=unitDouble;
			}
			else if(unitString=="ft"){
				unitDoubleIN=unitDouble*12;
				unitDoubleM=unitDouble/(12*2.54);
				unitDoubleFT=unitDouble;
				unitDoubleCM=unitDouble*(12*2.54);
			}
			else if (unitString=="cm"){
				unitDoubleCM=unitDouble;
				unitDoubleM=unitDouble/100;
				unitDoubleIN=unitDouble/2.54;
				unitDoubleFT=unitDouble/(2.54*12);
			}
			else if (unitString=="y" || unitString == "yard" || unitString == "meter" || unitString == "km" || unitString == "gallons"){
				cout << "Illegal representation of units!\n";
				return 1;
			}
			else if(unitString=="b"){
				if (unitDoubleM<newSmallest)
					newSmallest=unitDoubleM;
				else if (unitDoubleM>newLargest)
					newLargest=unitDoubleM;
				else{}
				cout << "Sum of values: " << unitSum << '\n';
				cout << "Smallest of values: " << newSmallest << "m" << '\n';
				cout << "Largest of values: " << newLargest << "m" << '\n';
				return 1;
			}
		else{}
			vector<double>valuesEntered;
					for(double valueEntered; valueEntered=unitDoubleM;)
					valuesEntered.push_back(valueEntered);
				sort(valuesEntered);
					for (int i = 0; i < valuesEntered.size(); ++i)
					cout << valuesEntered[i] << "\n";

	return 0;
}