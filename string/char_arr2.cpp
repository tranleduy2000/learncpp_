#include <iostream>

using namespace std;

int main(){
	char name[10];
	cout << "Enter your name: ";
	cin.getline(name, 10);
	cout << name;
	return 0;
}
