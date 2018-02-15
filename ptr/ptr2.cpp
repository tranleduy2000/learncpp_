#include <iostream>
using namespace std;

int main(){
	int *iPtr;
	float *fPtr;
	double *dPtr;
	int *iPtr1, *iPtr2;
	
	cout << sizeof(char*) << endl;
	cout << sizeof(int*) << endl;
	cout << sizeof(double*) << endl;
	
	int *ptr;
	int value = 6;
	ptr = &value;
	cout << ptr << endl;
	cout << &value << endl;
	cout << &ptr << endl;

	return 0;
}
