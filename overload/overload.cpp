// overload.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

//functionsqaure for ints
int square(int x)
{
	cout << "square of integer " << x << " is ";
	return x * x;
} // end function square with int argument

// function square for doubles
double square(double y)
{
	cout << "square of double " << y << " is ";
	return y * y;
} // end function square with double argument

int main()
{
	cout << square(7) << endl;
	cout << square(7.5) << endl;
	
	return 0;
}

