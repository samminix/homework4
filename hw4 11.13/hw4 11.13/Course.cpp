#include <iostream>
#include "Course.h"
#include <algorithm>
using namespace std;

string* increaseCapacity(string* students, int size)
{
	string* newArray = new string[2 * size];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = students[i];
	}
	return newArray;
}




Course::Course(const string& courseName, int capacity)
{//Constructor
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course::~Course()
{//Destructor
	delete[] students;
}

string Course::getCourseName() const
{
	return courseName;
}

void Course::addStudent(const string& name)
{

	if (numberOfStudents == capacity)
	{//If the numberOfStudents = capacity
		students = increaseCapacity(students, capacity);
		capacity = 2 * capacity;
		students[numberOfStudents] = name;
		}
	else
		students[numberOfStudents] = name;//Else fill the array with the name normally
	numberOfStudents++;
	sort(students, students + numberOfStudents);		
}

void Course::dropStudent(const string& name)
{
	numberOfStudents--;
	for (int i = 0; i <= numberOfStudents; i++)
	{
		if (students[i] == name)
		for (int j = i; j <= numberOfStudents; j++)
		{
			students[j] = students[j + 1];
		}
	}
}

string* Course::getStudents() const
{
	return students;//Returns the students pointer
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;

void Course::clear()
{
	for (int i = 0; i < numberOfStudents; i++)
	{
		students[i] = "";
	}
	numberOfStudents = 0;
}

Course::Course(const Course& course)
{
	courseName = course.courseName;
	numberOfStudents = course.numberOfStudents;
	capacity = course.capacity;
	students = new string[capacity];
}