#include "Subject.h"

void Subject::set_Name(string n)
{
	name = n;
}

string Subject::get_Name()
{
	return name;
}

void Subject::set_fullMark(int fm)
{
	fullMark = fm;
}

int Subject::get_fullMark()
{
	return fullMark;
}

void Subject::set_studentMark(int sm)
{
	studentMarks = sm;
}

int Subject::get_studentMark()
{
	return studentMarks;
}

//Binary Operator Overloading
Subject Subject::operator+(Subject s2)
{
	Subject result;
	result.name = name + s2.get_Name();
	result.fullMark = fullMark + s2.get_fullMark();
	result.studentMarks = studentMarks + s2.get_studentMark();
	return result;
}

//Method OverLoading (Compile Time)
Subject::Subject()
{
}

Subject::Subject(string n, int sm, int fm) : name(n), studentMarks(sm), fullMark(fm)
{
	/*name = n;
	studentMarks = sm;
	fullMark = fm;*/
}

