#include "../std_lib_facilities.h"

int main() {

	cout << "|----Enter the name of the person you want to write to!----|\n";
	string first_name;
	cin >> first_name;
	cout << "\nDear "<< first_name << ",\n";

	cout << "\t I haven't heard from you in a while. How are you doing?" << "\n";
	cout << "Guess what! We have a new dog! Her name is Collie." << "\n";

	string friend_name = "Jácint";
	cout << "By the way, have you seen " << friend_name << " lately?\n";

	char friend_sex = '0';
	cout << "\n|----Write the first letter of the sex of your friend! (m or f)----|\n";
	cin >> friend_sex;
	cout << "\n";
	if (friend_sex == 'm')
		cout << "If you see " << friend_name << " please tell him to call me.\n";
	else if (friend_sex == 'f')
		cout << "If you see " << friend_name << " please tell her to call me.\n";
	else
		cout << "No sex's first letter is: " << friend_sex << "!\n";

	int age;
	cout << "\n|----Please enter the age of the recipient!----|\n";
	cin >> age;
	if (age > 0 && age < 110)
		cout << "\nI hear you just had a birthday and you are " << age << " years old. Happy birthday!\n";
	else
		simple_error("You're kidding!");

	if (age < 12)
		cout << "Next year you will be " << age+1 << ".\n";
	else if (age == 17)
		cout << "Next year you will be able to vote.\n";
	else if(age > 70)
		cout << "I hope you enjoy your retirement.\n";
	else{}

	cout << "Yours sincerely,\n\nBalázs\n";

	return 0;
}