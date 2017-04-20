#include <iostream>
#include <string> 

using namespace std;

int main()
{
	long a = 0;
	long b = 0;
	
	while (b == 0) {
		cout << "Count to... (Enter number)" << " ";
		cin >> b;
		cout << endl;
	}

	if (b > 0) {
		while (a < b) {
			a++;
			cout << a << " ";
		}
	}

	if (b < 0) {
		while (a > b) {
			a--;
			cout << a << " ";
		}
	}

	cout << endl;
	cout << endl;


	system("pause");

	return 0;
}