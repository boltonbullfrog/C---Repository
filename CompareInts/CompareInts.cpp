// CompareInts.cpp : Defines the entry point for the console application.
//
// Fig. 2.13: fig02_13.cpp
// Comparing integers using if statements, relational operators
// and equality operators.

#include "stdafx.h"
#include <iostream> // allows program to perform input and output

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl


// function main begins program execution
int main()
{
	int number1; // first integer to compare
	int number2; // second integer to compare

	cout << "Enter two integers to compare: "; // prompt user for data
	cin >> number1 >> number2; // read two integers from user
	if (number1 == number2)
		cout << number1 << " == " << number2 << endl;
	if (number1 != number2)
		cout << number1 << " != " << number2 << endl;
	if (number1 < number2)
		cout << number1 << " < " << number2 << endl;
	if (number1 > number2)
		cout << number1 << " > " << number2 << endl;
	if (number1 <= number2)
		cout << number1 << " <= " << number2 << endl;
	if (number1 >= number2)
		cout << number1 << " >= " << number2 << endl;

	return 0;
}
