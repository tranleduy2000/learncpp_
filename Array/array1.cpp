#include <iostream>

using namespace std;

int main(){
	
	double values[] = {12, 32, 32, 3};
	int count = sizeof(values) / sizeof(double);
	cout << count;
	
	return 0;
}
