// GradeBookGrades.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "GradeBook.h"




int main()
{
	GradeBook myGradeBook("CS101 C++ Programming");

	myGradeBook.displayMessage();
	myGradeBook.inputGrades();
	myGradeBook.displayGradeReport();
	
	return 0;
}

