// Exercise_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	int x;
	int y;
	int z;
	int sum;
	int product;
	int Average;
	int large;
	int small;

		cout << "Enter three integers" << endl;
		cin >> x >> y >> z;
		sum = x + y + z;
		product = x*y*z;
		Average = sum / 3;
		cout << "The product of your integers is " << product << endl;
		cout << "The sum of your integers is " << sum << endl;
		cout << "The average of your numbers is " << Average << endl;

		if (x > y)

		{
			large = x;
			small = y;
		}

		else
		{

			large = y;
			small = x;
		};

		if (z > large)
		
		large = z;

		cout << "The largest number is " << large << endl;

		if (z < small)
		{
			small = z;
		}
		
		cout << "The smallest number is " << small << endl;
			
return 0;
}

