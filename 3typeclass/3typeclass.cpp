// 3typeclass.cpp : Defines the entry point for the console application.
//


// GradeBook class demonstration after separating
// its interface from its implementation.
#include "stdafx.h"
#include <iostream>
#include "GradeBook.h"

using namespace std;

// function main begins program execution
int main()
{
// create two GradeBook objects
	 GradeBook myGradeBook ("CS101 Introduction to C++ Programming");
	 	
	//modify the course name with a valid name!
	myGradeBook.setCourseName("CS101 C++ Programming");
	myGradeBook.displayMessage();
	myGradeBook.determineClassAverage();

		
return 0;

} // end main