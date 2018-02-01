#include "stdafx.h"
#include <iostream>
using namespace std;

int main2() 
{
	cout << "this line is printed out." << endl;
	exit(-1);
	
	cout << "this lien will be never printed out." << endl;

	system("pause");
	return 0;
}