// BranchingStatement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	bool b(true);
	cout << b << endl;
	cout << !b << endl;

	bool b2(false);
	cout << b2 << endl;
	cout << !b2 << endl;

	cout << true << endl;
	cout << false << endl;

	cout << boolalpha << endl;
	cout << true << endl;
	cout << false << endl;

	bool b;
	cout << boolalpha;
	b = 0; 
	cout << b << endl;
	b = 1; 
	cout << b << endl;
	b = 100; 
	cout << b << endl;
	b = -999;
	cout << b << endl;



	system("pause");
	return 0;
}

