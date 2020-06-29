#include "Teacher.h"
#include <iostream>
using namespace std;

void Teacher::setSalary(double s)
{
	salary = s;
}

double Teacher::getSalary()
{
	return salary;
}

void Teacher::setWorkingHours(int w)
{
	workingHours = w;
}

int Teacher::getWorkingHours()
{
	return workingHours;
}

//Method Overriding (Runtime)
void Teacher::displayInfo()
{
	Person::displayInfo();
	cout << salary << ' ' << workingHours << endl;
}

//Pure virtul method and abstract
void Teacher::doTask()
{
	cout << "Do Task" << endl;
}

Teacher::Teacher(string n) : Person(n)
{
	cout << "Teacher Constructor" << endl;
}
