#include <iostream>
#include "Course.h"
using namespace std;

int main()
{

	Course C1("CS172", 10);//Create course
	Course C2(C1); 

	C1.addStudent("John");//Add three students
	C1.addStudent("Jessica");
	C1.addStudent("Alex");

	cout << "There are currently " << C1.getNumberOfStudents() << " students enrolled in " << C1.getCourseName() << "." << endl;
	cout << "Their names are: ";

	for (int i = 0; i < C1.getNumberOfStudents(); i++)
	{
		cout << C1.getStudents()[i] << ", ";
	}

	C1.dropStudent("John");//Drop student from course



	cout << "\n\nA student was dropped from " << C1.getCourseName() << ", there are now " << C1.getNumberOfStudents() << " students enrolled in " << C1.getCourseName() << endl;
	cout << "Their names are: ";
	for (int i = 0; i < C1.getNumberOfStudents(); i++)
	{
		cout << C1.getStudents()[i] << ", ";
	}
	cout << endl;




	C2.addStudent("Miranda");//Add students to the second course
	C2.addStudent("Jake");
	C2.addStudent("Amanda");


	cout << "\n\n\n\n\nThere are currently " << C2.getNumberOfStudents() << " students enrolled in " << C2.getCourseName() << "." << endl;
	cout << "Their names are: ";

	for (int i = 0; i < C2.getNumberOfStudents(); i++)
	{
		cout << C2.getStudents()[i] << ", ";
	}


		C2.dropStudent("Miranda");//Drop the student

		cout << "\n\nA student was dropped from " << C2.getCourseName() << ", there are now " << C2.getNumberOfStudents() << " students enrolled in " << C2.getCourseName() << endl;
		cout << "Their names are: ";
		for (int i = 0; i <= C2.getNumberOfStudents(); i++)
		{
			cout << C2.getStudents()[i] << ", ";
		}
		cout << endl;
}