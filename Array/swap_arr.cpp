#include <iostream>

using namespace std;

int main(){
	int arr[] = { 2, 6, 5, 7, 9, 1, 3 };
	const int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i< size; i++) cout << arr[i] << " ";
	cout << endl;
	for (int i = 0; i < size / 2; i++){
		int tmp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = tmp;
	}
	
	for (int i = 0; i< size; i++) cout << arr[i] << " ";
	return 0;
}
