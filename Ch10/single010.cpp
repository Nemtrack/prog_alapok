#include "../../std_lib_facilities.h"

void skip_to_int()
{
	if (cin.fail())
	{
		cin.clear();
		for (char ch; cin >> ch; )
		{
			if (isdigit(ch) || ch == '-')
			{
				cin.unget();
				return;
			}
		}
	}
	error("no input");
}

int get_int()
{
	int n = 0;
	while(true)
	{
		if(cin >> n) return n;
		cout << "Sorry, that was not a number!\n";
		skip_to_int();
	}
}

int get_int(int low, int high, const string& greeting, const string& sorry)
{
	cout << greeting << ": [" << low << ":" << high << "]\n";
	while (true)
	{
		int n = get_int();
		if (low <= n && n <= high) return n;
		cout << sorry << ": [" << low << ":" << high << "]\n";
	}
}

int main()
try {

	int n = get_int(0, 40000, "enter altitude", "Impossible");

	cout << "Thanks: " << n << endl;

	return 0;

} catch (runtime_error& e) {
	cout << "Error: " << e.what() << endl;
	return 1;
} catch (...) {
	cout << "Some error happened\n";
	return 2;
}
