#include <iostream>
#include <string>

using namespace std;

string getString(int size){
	string str(size, '+');
	return str;
}

int doubleValue(int value){
	int newValue = value * 2;
	return newValue;
}

int& returnRef(){
	int var = 0;
	cout << &var << endl;
	return var;
}

int main(){
	
	string myStr = getString(10);
	cout << myStr << endl;
	
	int value = doubleValue(10);
	cout << value << endl;
	
	int & ref = returnRef();
	cout << &ref << endl;
	
	return 0;
}
