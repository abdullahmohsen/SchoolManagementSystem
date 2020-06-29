#pragma once
#include "Teacher.h"
#include "Student.h"

class TeachingAssistant : public Teacher, public Student
{
private:
	string researchSubject;
public:
	void setResearchSubject(string r);
	string getResearchSubject();

	void doTask();
	void displayInfo();
	TeachingAssistant(string n);
};

