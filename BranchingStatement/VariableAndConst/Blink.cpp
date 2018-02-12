// VariableAndConst.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	char ch = '\0';
	cout << "Enter your full name: ";
	cin >> ch;
	system("cls"); //clear screen
	while (!cin.eof() && ch != '\n') {
		cout << ch;
		Sleep(100);
		ch = cin.get();
	}

	system("pause");
	return 0;
}

