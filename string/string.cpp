#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;
	
	getline(cin, name);
	
	cout << name;
	cout << "Length is " << name.length() << endl;
	
	string test = "this is string";
	cout << test;
	
	string cts("This is another string");
	cout << cts;
	
	
	return 0;
}
