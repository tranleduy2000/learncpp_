#include <iostream>
using namespace std;

int main(){
	int arr[] = { 3, 5, 65, 23, 11 };
	cout << &arr << endl;
	cout << &arr[0] << endl;
	cout << arr << endl;
	
	cout << *(arr + 2) << endl;
	int *ptr = &arr[2];
	cout << *ptr << endl;
	
	for (ptr =&arr[0]; ptr <= &arr[4]; ptr++){
		cout << *ptr << " ";
	}
	cout << endl;
	for (ptr = arr; ptr <= arr + 4; ptr++){
		cout << *ptr<< " ";
	}
	cout << endl;
	
	ptr = arr;
	for (int i= 0; i < 5; i++){
		cout << ptr[i] << " ";
	}
	cout << endl;
	
	char *p_name = "tran le duy";
	cout << p_name  << endl;
	
	return 0;
}
