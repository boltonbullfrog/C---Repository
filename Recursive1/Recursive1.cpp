// Recursive1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

unsigned long factorial(unsigned long); // function prototype


int main()
{
	for (int counter = 0; counter <= 20; ++counter)
		cout << setw(2) << counter << "! = " << factorial(counter) << endl;

	return 0;
}

unsigned long factorial(unsigned long number)
{
	if (number <= 1) //base test
		return 1;
	else //recursive step
		return number * factorial(number - 1);
}
