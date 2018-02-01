#include "stdafx.h"
#include <iostream>

using namespace std;

void factorial() {
	cout << "enter a number: ";
	int number;
	cin >> number;
	long result = 1;
	for (int i = 1; i <= number; i++) {
		result *= i;
	}
	cout << number << "! = " << result << endl;
	
}

void task2() {
	float rate; 
	long currentPeople;
	cout << "Enter number citizen: ";
	cin >> currentPeople;
	cout << "Enter rate: (%)";
	cin >> rate;

	for (int i = 1; i <= 10; i++) {
		currentPeople += (long) (currentPeople * rate / 100);
	}
	cout << "Number people after 10 years is " << currentPeople << endl;
}

void task3() {

}

int main3() {

	//factorial();
	//task2();
	//task3();

	system("pause");
	return 0;
}