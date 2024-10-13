/*
Program File Name: Ch3Ex18
Programmer: Josh Richards
Date: October 11, 2024
Requirements:

Write a program that asks for the principal, the interest rate, and the number of times the interest is compounded.


*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double principal, rate, amount, interest;
	int timesCompounded;

	cout << "Enter the principal (initial investment): $";
	cin >> principal;

	cout << "Enter the interest rate (as a decimal, e.g. 4.25 = 4.25%): ";
	cin >> rate;
	rate = rate / 100;

	cout << "Enter the number of times the interest is compounded per year: ";
	cin >> timesCompounded;

	amount = principal * pow(1 + rate / timesCompounded, timesCompounded);

	interest = amount - principal;

	cout << fixed << setprecision(2);
	cout << "Interest Rate:			" << rate * 100 << "%" << endl;
	cout << "Times Compounded:		" << timesCompounded << endl;
	cout << "Principal:			$" << principal << endl;
	cout << "Interest:			$" << interest << endl;
	cout << "Amount in Savings:		$" << amount << endl;

	return 0;
}

