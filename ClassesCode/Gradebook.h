//Gradebook.h

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Gradebook
{
public:
	Gradebook(string name)
	{
		setCourseName(name);
	}
	void setCourseName(string name)
	{
		courseName = name;
	}
	string getCourseName()// not sure about this!
	{
		return courseName;
	}
	void displayMessage()
	{
		cout << "Welcome to the gradebook for\n" << getCourseName() << "!" << endl;
	}

private:
	string courseName;
};