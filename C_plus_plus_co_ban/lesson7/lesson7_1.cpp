#include <iostream>
using namespace std;

int value = 1;

void print(){
	cout << "print method";
}

int main(){
	int value = 10;
	cout << "local variable " << value << endl;
	cout << "global variable " << ::value;
	::print();
	return 0;
}
