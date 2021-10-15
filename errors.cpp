#include "../std_lib_facilities.h"

int main() {

	//error: upper case 'C' in 'cout'!
	cout << "1. Success!\n";
	//error: no closing quotation mark!
	cout << "2. Success!\n";
	//error: exclamation mark misplacement and no closing semicolon
	cout << "3. Success!" << "\n";
	//error: no uppercase letter for success and no exclamation mark used
	cout << "4. Success!" << '\n';
	//error: vector was int type, while "res" was string
	string res = "7"; vector<string> v1(10); v1[5] = res; cout << "5. Success!\n";
	//error: the vector's fifth element was not in brackets but parenthesis and
	//the "if" couldn't have been true
	vector<int> v2(10); v2[5] = 7; if (v2[5]=7) cout << "6. Success!\n";
	//error: the if condition was literally "cond"
	int i1 = 1; if (i1=1) cout << "7. Success!\n"; else cout << "Fail!\n";
	//error: the bool was false so only the else branch was able to run
	bool c1 = true; if (c1) cout << "8. Success!\n"; else cout << "Fail!\n";
	//error: bool variable had incorrect value, also string and bool can't be
	//compared with "<" operator
	string s1 = "ape"; bool c2 = true; if (c2) cout << "9. Success!\n";
	//error: string's value was different than declared so if couldn't have run
	string s2 = "ape"; if (s2=="ape") cout << "10. Success!\n";
	//error: cout had only one "<" and
	//string's value was different than declared so if couldn't have run
	string s3 = "ape"; if (s3=="ape") cout << "11. Success!\n";
	//error: if had a + operator rather than ==
	//cout had only one "<" and
	//string's value was different than declared so if couldn't have run
	string s4 = "ape"; if (s4=="ape") cout << "12. Success!\n";
	//error: in the for cycle, vector's size was infinitely traversed
	//because "i" was not used, rather there was 0 as traversing goal
	vector<char> v3(5); for (int i=0; i<v3.size(); ++i) ; cout << "13. Success!\n";
	//error: none
	vector<char> v4(5); for (int i=0; i<=v4.size(); ++i) ; cout << "14. Success!\n";
	//error: "i" didn't have a high enough max limit, so it only wrote out the first
	//six elements of string
	string s5 = "15. Success!\n"; for (int i=0; i<15; ++i) cout << s5[i];
	//error: "then" was used after "if"
	if (true) cout << "16. Success!\n"; else cout << "Fail!\n";
	//error: c was a char variable and had 2000 as value
	int x = 2000; int c = x; if (c==2000) cout << "17. Success!\n";
	//error: "i" didn't have a high enough max limit, so it only wrote out the first
	//ten elements of string
	string s6 = "18. Success!\n"; for (int i=0; i<15; ++i) cout << s6[i];
	//error: vector didn't have a type
	vector<int> v5(5); for (int i=0; i<=v5.size(); ++i) ; cout << "19. Success!\n";
	//error: infinite loop, i2 would've always remained as defined, because
	//the loop didn't increase, nor decrease it's value
	int i2=1; int j = 9; while (j!=0) --j; if (j<i2) cout << "20. Success!\n";
	//error: there was an incorrect operator used as substraction "–"
	//a floating point value was being added to an int type value
	//calculation issues (division by zero is undefined)
	double x1 = 2; double d = 18/(x1+2); if (d==2*x1+0.5) cout << "21. Success!\n";
	//error: string was tried to be declared as a char type "stringvector" also
	//"i" didn't have a high enough max limit, so it only wrote out the first
	//10 elements of string
	string s7 = "22. Success!\n"; for (int i=0; i<=15; ++i) cout << s7[i];
	//error: no declaration of j2
	//infinite loop, i3 always remains 0, while j2 increases, so if tree
	//can't run
	int i3, j2=0; while (i3<10) ++i3; if (j2<i3) cout << "23. Success!\n";
	//error: only one "=" used in if
	//int was being added floating type number
	//incorrect operator used as substraction
	//
	double x3 = 4; double d2 = 5/(x3-2); if (d2==x3+0.5-2) cout << "24. Success!\n";
	//error: cin was used as cout
	cout << "25. Success!\n";
	
	return 0;
}