// TestMaximum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "maximum.h"
#include <iostream>

using namespace std;


int main()
{
	int int1 ,int2, int3;
	cout << "Input three integer values: ";
	cin >> int1 >> int2 >> int3;

		
	cout << "The maximum value is " << maximum( int1, int2, int3);

	double double1, double2, double3;

	cout << "Input 3 double values ";
	cin >> double1>> double2 >> double3;

	cout << "The maximum double is " << maximum( double1, double2, double3);

	char char1, char2, char3;

	cout << " Enter 3 chars";
	cin >> char1 >> char2 >> char3;

	cout << "The largest char is " << maximum( char1, char2, char3) << endl;
	
	
	return 0;
}

