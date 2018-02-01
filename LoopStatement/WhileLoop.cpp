// LoopStatement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//https://cpp.daynhauhoc.com/3/0-vong-lap-while/
int main1()
{

	int count = 0;
	while (count <= 5) {
		int index = 0;
		while (index < count) {
			index++;
			cout << index << " ";
		}
		count++;
		cout << endl;
	}

	system("pause");
	return 0;
}

