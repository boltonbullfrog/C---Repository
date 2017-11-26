// Dice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;


int main()
{
	int frequency1 = 0; // count of 1s rolled
	int frequency2 = 0; // count of 2s rolled
	int frequency3 = 0; // count of 3s rolled
	int frequency4 = 0; // count of 4s rolled
	int frequency5 = 0; // count of 5s rolled
	int frequency6 = 0; // count of 6s rolled
						
						
						
	// loop 20 times
	
	int face; // stores most recently rolled value
	// summarize results of 6,000,000 rolls of a die
	for (int roll = 1; roll <= 6000000; ++roll)
	{
	
		face = 1 + rand() % 6; // random number from 1 to 6
	
	//for (int counter = 1; counter <= 20; ++counter)
	//{
	//	//pick a random number
	//	cout << setw(10) << (1 + rand() % 6);
	//	// if counter is divisable by 5, start a new line of output

	//	if (counter % 5 == 0)
	//		cout << endl;
	//}

		switch (face)
			{
			case 1:
				++frequency1; // increment the 1s counter
				break;
			case 2:
				++frequency2; // increment the 2s counter
				break;
			case 3:
				++frequency3; // increment the 3s counter
				break;
			case 4:
				++frequency4; // increment the 4s counter
				break;
			case 5:
				++frequency5; // increment the 5s counter
				break;
			case 6:
				++frequency6; // increment the 6s counter
				break;
			default: // invalid value
			cout << "Program should never get here!";
	} // end switch
	
	} // end for
	cout << "Face" << setw(13) << "Frequency" << endl; // output headers
	cout << " 1" << setw(13) << frequency1
	<< "\n 2" << setw(13) << frequency2
	<< "\n 3" << setw(13) << frequency3
	<< "\n 4" << setw(13) << frequency4
	<< "\n 5" << setw(13) << frequency5
	<< "\n 6" << setw(13) << frequency6 << endl;
	

    return 0;
}

