#include "TeachingAssistant.h"
#include <iostream>
using namespace std;


void TeachingAssistant::setResearchSubject(string r)
{
	researchSubject = r;
}

string TeachingAssistant::getResearchSubject()
{
	return researchSubject;
}

void TeachingAssistant::doTask()
{
	cout << "Do Task" << endl;
}

void TeachingAssistant::displayInfo()
{
	Person::displayInfo();
	cout << researchSubject << endl;
}

TeachingAssistant::TeachingAssistant(string n) : Person(n)
{
	cout << "Teaching Assistant Constructor" << endl;
}
