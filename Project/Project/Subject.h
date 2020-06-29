#pragma once
#include <string>
using namespace std;

class Subject
{
private:
	string name;
	int fullMark, studentMarks;

public:
	void set_Name(string n);
	string get_Name();

	void set_fullMark(int fm);
	int get_fullMark();

	void set_studentMark(int sm);
	int get_studentMark();

	//Binary Operator Overloading
	Subject operator +(Subject s2);

	//Method Overloading (Compile Time)
	Subject();
	Subject(string n, int sm, int fm);
};

