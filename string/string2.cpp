#include <iostream>
#include <string>

using namespace std;

int main() {

	string str = "A sentence must end with a dot";
	str.push_back('.');

	cout << str << endl;
	str.pop_back();
	cout << str << endl;

	str.append(" New sentence").append(" test append method");
	cout << str << endl;

	str += " operator +=";
	cout << str << endl;

	str = "how to use.";
	string str2 = "i will introduce you ";

	cout << str << endl;

	str.insert(0, str2);
	cout << str << endl;

	str.insert(str.length() - 1, " string in C++");
	cout << str << endl;

	string str4  = "old string";
	cout << str4 << endl;
	str4.replace(0, 3, "new");

	cout << str4 << endl;
	cout << str4.find("new") << endl;
	cout << str4.compare("hello") << endl;
	
	cout << str4.substr(0, 3) << endl;
	return 0;
}




