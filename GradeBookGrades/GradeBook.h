#pragma once
// GradeBook.h definition - finds the maximum of three grades
#include <string>

using namespace std;

class GradeBook
{
public:
	GradeBook(string); // constructor initializes course name
	void setCourseName(string); //function to set course name
	string getCourseName(); // function to get Course name
	void inputGrades(); // function to input data
	void displayMessage(); // display welcome message
	void displayGradeReport(); // dispaly a report based upon grades
	int maximum(int, int, int); // calculate max grade

private:
	string courseName;
	int maximumGrade; 
}; // end class GradeBook