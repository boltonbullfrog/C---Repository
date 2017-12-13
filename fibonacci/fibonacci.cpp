// fibonacci.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

unsigned long fibonacci(unsigned long);



int main()
{
	for (int counter = 0; counter <= 10; ++counter)
		cout << "fibonacci(" << counter << " ) = " << fibonacci(counter) << endl;

	//display higher numbers

	cout << "fibonacci(20) = " << fibonacci(20) << endl;
	cout << "fibonacci(30) = " << fibonacci(30) << endl;
	cout << "fibonacci(40) = " << fibonacci(40) << endl;
	
	return 0;
}

unsigned long fibonacci(unsigned long number)
{
	if ((number == 0) || (number == 1))// base case
		return number;

	else
		return fibonacci(number - 1) + fibonacci(number - 2);
}

