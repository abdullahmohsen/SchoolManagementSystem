#pragma once
#include <string>
using namespace std;

class Person
{
private:
	int id;
	static int personsCount;
	string name, email, address, mobile;

public:
	int getID();

	void setName(string n);
	string getName();

	void setEmail(string e);
	string getEmail();

	void setAddress(string a);
	string getAddress();

	void setMobile(string m);
	string getMobile();

	void displayInfo();

	//Pure virtul method and abstract class
	virtual void doTask() = 0;
	
	Person(string n);
};

