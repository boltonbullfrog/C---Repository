// ClassesCode.cpp : Defines the entry point for the console application. v5

#include "stdafx.h"
#include <iostream>
#include <Gradebook.h>

using namespace std;


int main()
{
	//string nameOfCourse;
	GradeBook gradebook1("C++ Programming"); // create an instance of Gradebook
	GradeBook gradebook2("Visual Studio Programming"); // 2nd instance
	// myGradebook.displayMessage();	
	cout << "Gradebook 1 created: " << gradebook1.getCourseName() << "\nGradebook 2 created: " << gradebook2.getCourseName() << endl;
	

	return 0;
}

