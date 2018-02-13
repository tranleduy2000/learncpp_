#include <iostream>
#include <string> 
#include <cstring>
using namespace std;

int add(int x, int y);

int add(int x, int y) {
	return x + y;
}

void swapValue(int v1, int v2){
	cout << "swapValue" << endl;
	int tmp = v1;
	v1 = v2;
	v2  = tmp;
	 
	cout << "v1 = " << v1 << endl;
	cout << "v2 = " << v2 << endl;
}

int main(){
	int a = 1; 
	int b = 2;
	swapValue(a, b);
	
	cout << a << endl << b << endl;
	return 0;
}









