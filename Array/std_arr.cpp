#include <array>
#include <cstdint>
#include <iostream>
using namespace std;

int main() {
	array<int32_t, 5> arr;
	
	cout << arr[1];
	cout << arr.at(1);
	
	cout << endl;
	cout << "Number of elements :" << arr.size() << endl;
	
	cout << boolalpha;
	cout << arr.empty() << endl;
	
	cout << "Enter value: ";
	for (int i = 0; i < arr.size(); i++) cin >> arr[i];
	
	arr[-1] = 2;
	
	return 0;
}
