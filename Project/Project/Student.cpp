#include "Student.h"
#include <iostream>
using namespace std;

void Student::setGrade(int g)
{
	grade = g;
}

int Student::getGrade()
{
	return grade;
}

void Student::setGPA(double g)
{
	GPA = g;
}

double Student::getGPA()
{
	return GPA;
}

//Method Overriding (Runtime)
void Student::displayInfo()
{
	Person::displayInfo();
	cout << GPA << ' ' << grade << endl;
}

//Pure virtul method and abstract
void Student::doTask()
{
	cout << "Do Task" << endl;;
}

//Constructor of Student
Student::Student(string n) : Person(n)
{
	cout << "Student Constructor" << endl;
}
