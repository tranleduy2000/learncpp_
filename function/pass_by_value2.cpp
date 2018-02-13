#include <iostream>

using namespace std;

void printAdress(int param){
	cout << &param << endl;
}

int main(){
	int arg;
	cout << &arg << endl;
	printAdress(arg);
	
	return 0;
}
