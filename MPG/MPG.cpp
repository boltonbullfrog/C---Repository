// MPG.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

// initialise external loop variables

int totalTravelled = 0;
int totalGallonsUsed = 0;
double tripMPG;
double totalAverage;
int tripMilage = 0;
double tripAverage;
int tripGallonsUsed = 0;
int tripCounter = 0;
double totalMPG;



int main()
{
	while (tripMilage != -1) // control
	{
		tripCounter++;
		cout << " How many mile did you travel this trip? ";
		cin >> tripMilage;
		totalTravelled = totalTravelled + tripMilage;
		cout << "How many gallons did you use? ";
		cin >> tripGallonsUsed;
		totalGallonsUsed = totalGallonsUsed + tripGallonsUsed;
		tripMPG = static_cast<double> (tripMilage) / tripGallonsUsed;
		cout << "MPG this trip is : " << setprecision(6) << fixed << tripMPG << endl;
		totalMPG = static_cast<double> (totalTravelled) / totalGallonsUsed;
		cout << "Total MPG is : " << setprecision(6) << fixed << totalMPG << endl;
	}

	
	return 0;
}

