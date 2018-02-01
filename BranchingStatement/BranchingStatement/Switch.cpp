// BranchingStatement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int month, dayOfMonth;
	cin >> month;
	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		dayOfMonth = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		dayOfMonth = 30;
		break;
	case 2:
		dayOfMonth = 28;
		break;
	}
	cout << month << " has " << dayOfMonth << " day";

	system("pause");
	return 0;
}

