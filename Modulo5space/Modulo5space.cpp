// Modulo5space.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int entrynum;
	int d1;
	int d2;
	int d3;
	int d4;
	int d5;
	int temp;

	cout << "Enter a 5 digit number ";
	cin >> entrynum;

	temp = entrynum % 10000;


	cout << temp << endl;
	d1 = entrynum / 10000;
	cout << d1 << endl;
	d2 = temp / 1000;
	cout << d2 << endl;

	int temp2 = entrynum % 1000;

	d3 = temp2 / 100;

	cout << d3 << endl;

	int temp3 = entrynum % 100;

	d4 = temp3 / 10;

	cout << d4 << endl;

	int temp4 = entrynum % 10;

	d5 = temp4;

	cout << d5 << endl;

	cout << d1 << "\t" << d2 << "\t" << d3 << "\t" << d4 << "\t" << d5 << endl;

    return 0;
}

