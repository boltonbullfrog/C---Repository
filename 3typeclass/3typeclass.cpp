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
	 GradeBook gradeBook1("CS101 Introduction to C++ Programming");
	 GradeBook gradeBook2("CS102 Data Structures in C++");
	
	// display initial value of courseName for each GradeBook
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
	<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
	<< endl;
//modify the course name with a valid name!
	gradeBook1.setCourseName("CS101 C++ Programming");
	gradeBook2.setCourseName("Binary functions");
	
	// display new value of courseName for each GradeBook
	cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
		<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
		<< endl;
	return 0;

} // end main