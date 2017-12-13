// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int boxVolume(int length = 1, int width = 1, int height = 1);

int main()
{
	//using default values
	cout << "The default box volume is " << boxVolume();
	 // specified units
	cout << "\n\nThe volume of a box with length 10, \n" << "width 1 and height 1 is " << boxVolume(10);

	// specify length and width; default height
	cout << "\n\nThe volume of a box with length 10,\n"	<< "width 5 and height 1 is: " << boxVolume(10, 5);

	cout << "\n\nThe volume of a box with length 10,\n" << "width 5 and height 4 is: " << boxVolume(10, 5, 4) << endl;

	return 0;
}

int boxVolume(int length, int width, int height)
{
	return length * width* height;
}
