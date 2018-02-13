#include <iostream>

using namespace std;

int addOne(int value) {
	return value + 1;
}

int main() {
	int number = 9;
	number = addOne(number);
	cout << number << endl;

	int &ref = number;
	ref = 12;
	cout << number << endl;

	int num2 = 14;
	ref = num2;

	num2 = 15;
	cout << ref << endl;




	return 0;
}
