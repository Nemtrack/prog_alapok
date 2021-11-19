#include "../std_lib_facilities.h"

int f(int);
int main(){
	int i = 2;

	cout << f(i) << '\n';

	//int i = 2;
}	

int f(int x){
	return 2*x;
}
