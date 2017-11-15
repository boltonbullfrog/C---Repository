// ClassesCode.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

// GradeBook class definition
class GradeBook
{
public:
	// function that displays a welcome message to the GradeBook user
	void displayMessage(string courseName)
	{
		cout << "Welcome to the Grade Book for\n" << courseName << "!" << endl;
	} // end function displayMessage
}; // end class GradeBook


int main()
{
	string nameOfCourse;
	GradeBook myGradebook; // create an instance of Gradebook
	// myGradebook.displayMessage();	
	cout << "Please enter the course name " << endl;
	getline(cin, nameOfCourse);
	cout << endl;
	myGradebook.displayMessage(nameOfCourse);

	return 0;
}

