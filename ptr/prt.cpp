#include <iostream>
using namespace std;

int main(){
	int i1 = 10;
	int &i_ref = i1;
	
	cout << &i1 << endl;
	cout << &i_ref << endl;
	
	return 0;
}
