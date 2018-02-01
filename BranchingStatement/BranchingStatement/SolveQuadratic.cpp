// BranchingStatement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main4()
{
	double a, b, c;
	cout << "enter a b c";
	cin >> a >> b >> c;

	if (a == 0.0) {
		cout << "a must be not equal zero";
	}
	else {
		double delta = b * b - 4 * a*c;
		if (delta == 0) {
			double x = -b / (2 * a);
			cout << "x = " << x;
		}
		else if (delta > 0) {
			double x1 = (-b - sqrt(delta)) / (2 * a);
			double x2 = (-b + sqrt(delta)) / (2 * a);
			cout << "x1 = " << x1 << "; x2 = " << x2;
		}
		else { //detal < 0
			cout << "No solution";
		}

	}

	system("pause");
	return 0;
}

