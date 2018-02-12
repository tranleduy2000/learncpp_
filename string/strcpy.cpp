#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char source[50] = "C++ Programming language";
	char dest[20];
	
	cout << source << endl << dest << endl;
	strcpy(dest, source);
	
	cout << source << endl << dest << endl;
	
	return 0;
}
