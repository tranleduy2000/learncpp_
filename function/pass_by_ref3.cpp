#include <iostream>

using namespace std;

int addOne(int &value){
	value++;
	return value;
}

int main(){
	int v = 1;
	cout << &v << endl;
	v = addOne(v);
	cout << &v << endl;
	cout << v << endl;
	return 0;
}
