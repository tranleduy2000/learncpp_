#include <iostream>
using namespace std;

int main(){
	int *ptr;
//	int arr[5] = {1, 2, 3, 4, 5};
//	for (int  i = 0; i < 5; i++){
//		ptr = &arr[i];
//		cout << ptr << endl;
//	}
	
	int value = 5;
	ptr = &value;
	cout << &value << endl;
	cout << ptr << endl;
	cout << value << endl;
	cout << *&value << endl;
	cout << *ptr << endl;

	return 0;
}
