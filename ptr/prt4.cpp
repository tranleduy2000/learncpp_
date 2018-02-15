#include <iostream>
using namespace std;

int main(){
	
	int value = 0;
	int *ptr = &value;
	
	cout << ptr << endl;
	ptr++;
	cout << ptr << endl;
	ptr--;
	cout << ptr << endl;
	
	ptr = &value;
	cout << ptr << " => " << *ptr << endl;
	cout << ptr + 10 << " => " << *(ptr + 10) << endl;
	cout << ptr + 50 << " => " << *(ptr + 50) << endl;
	return 0;
}
