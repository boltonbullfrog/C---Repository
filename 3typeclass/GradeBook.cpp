// Fig. 3.12: GradeBook.cpp
// GradeBook member-function definitions. This file contains
// implementations of the member functions prototyped in GradeBook.h.
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "GradeBook.h" // include definition of class GradeBook

using namespace std;

// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook(string name)
	{
	 setCourseName(name); // call set function to initialize courseName
	} // end GradeBook constructor

// function to set the course name
void GradeBook::setCourseName(string name)
	{
	if (name.length() <= 25) // if name has 25 or fewer characters
		courseName = name; // store the course name in the object
	if (name.length() > 25) // if name has more than 25 characters
	{
		// set courseName to first 25 characters of parameter name
		courseName = name.substr(0, 25); // start at 0, length of 25
		cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
			<< "Limiting courseName to first 25 characters.\n" << endl;
	} // end if
} // end function setCourseName// end function setCourseName

// function to get the course name
string GradeBook::getCourseName()
	{
	return courseName; // return object's courseName
	} // end function getCourseName

 // display a welcome message to the GradeBook user

void GradeBook::displayMessage()
	{
	 // call getCourseName to get the courseName
	cout << "Welcome to the grade book for\n" << getCourseName()
	 << "!" << endl;
	 } // end function displayMessage

void GradeBook::determineClassAverage()
{
	int total;
	int gradeCounter;
	int grade;
	double average;

	//initialise
	total = 0;
	gradeCounter = 0;

	cout << "Enter grade or -1 to quit: ";
	cin >> grade;

	while (grade != -1)
	{
		total = total + grade;
		gradeCounter += 1;
		cout << "Enter grade or -1 to quit: ";
		cin >> grade;
	}

	if (gradeCounter != 0)
	{
		average = static_cast<double>(total) / gradeCounter;
		cout << "Class average is " << setprecision(2) << fixed << average << endl;
		cout << "\nTotal of all grades is " << total << endl;
	}
	else
		cout << "No gardes were entered" << endl;
}