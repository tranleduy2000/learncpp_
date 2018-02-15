#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
	char my_name[] = "Tran Le Duy";
	char *p_name = my_name;
	p_name[1] = 'R';
	cout << my_name << endl;
	
	for (int i = 0; i < strlen("Tran Le Duy"); i++){
		cout << "Tran Le Duy"[i];
	}
	cout << endl;
	
	char c = 'a';
	cout << c << endl;
	cout << &c << endl;
	return 0;
}
