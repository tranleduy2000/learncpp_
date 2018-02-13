#include <iostream>

using namespace std;

int add(int x, int y) {
	return x + y;
}

float add(float x, float y) {
	return (float) (x + y);
}

void print(string str){
	cout << str;
}

void print(float c){
	cout << c;
}

int main() {
	cout <<	add(1, 2);
	cout << add((float) 2, (float) 2.0);
	print("hello android");
	print(1.0);
	print('a');
	
	cout << endl;
	
	int n = 5;
	cout << n << endl;
	cout << &n << endl;
	cout << *(&n) << endl;
	
	
	return 0;
}
