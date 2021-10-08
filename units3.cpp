#include "../std_lib_facilities.h"

int main() {

	double unitDouble, unitDoubleM, unitDoubleMe, unitDoubleIN, unitDoubleFT, unitDoubleCM = 0;
	double smallest = 1.7976931348623157E+308;
	double largest = 1.7976931348623157E-308;
	string unitString;
	int count = 0;
	char op = 'w';
	vector <double>v;
	cout << "Please enter a value followed by a unit, followed by a space and a random operator, if you want to exit, write '|' as the random operator!\n";
	while (op != '|'){
		cin >> unitDouble >> unitString >> op;
		if(unitString=="m"){
			count++;
			unitDoubleCM=unitDouble*100;
			unitDoubleIN=unitDouble*(100/2.54);
			unitDoubleM=unitDouble;
			v.push_back(unitDoubleM);
			unitDoubleMe+=unitDouble;
			unitDoubleFT=unitDouble*(2.54*12);
				if (unitDoubleM<=smallest){
					smallest = unitDoubleM;
				}
				else if (unitDoubleM>=largest){
					largest = unitDoubleM;
				}
		}
		else if(unitString=="in"){
			count++;
			unitDoubleCM=unitDouble*2.54;
			unitDoubleM=unitDouble/(100/2.54);
			v.push_back(unitDoubleM);
			unitDoubleMe+=unitDouble/(100/2.54);
			unitDoubleFT=unitDouble/12;
			unitDoubleIN=unitDouble;
				if (unitDoubleM<=smallest){
					smallest = unitDoubleM;
				}
				else if (unitDoubleM>=largest){
					largest = unitDoubleM;
				}
		}
		else if(unitString=="ft"){
			count++;
			unitDoubleIN=unitDouble*12;
			unitDoubleM=unitDouble/(1.2*2.54);
			v.push_back(unitDoubleM);
			unitDoubleMe+=unitDouble/(1.2*2.54);
			unitDoubleFT=unitDouble;
			unitDoubleCM=unitDouble*(12*2.54);
				if (unitDoubleM<=smallest){
					smallest = unitDoubleM;
				}
				else if (unitDoubleM>=largest){
					largest = unitDoubleM;
				}
		}
		else if (unitString=="cm"){
			count++;
			unitDoubleCM=unitDouble;
			unitDoubleM=unitDouble/100;
			v.push_back(unitDoubleM);
			unitDoubleMe+=unitDouble/100;
			unitDoubleIN=unitDouble/2.54;
			unitDoubleFT=unitDouble/(2.54*12);
				if (unitDoubleM<=smallest){
					smallest = unitDoubleM;
				}
				else if (unitDoubleM>=largest){
					largest = unitDoubleM;
				}
		}
		else{
			cout << "Illegal representation of units!";
			break;
		}
	}
		sort(v);
		cout << "The smallest: " << smallest/100 << '\n';
		cout << "The largest: " << largest/100 << '\n';
		cout << "The number of values: " << count << '\n';
		cout << "The sum of values: " << unitDoubleMe << '\n';
		cout << "The values: " << '\n';
		for (int i = 0; i < v.size(); ++i)
			cout << v[i]<<"\n";

	return 0;
}