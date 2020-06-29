#include "Person.h"
#include <iostream>
using namespace std;

int Person::getID()
{
	return id;
}

Person::Person()
{
	cout << "Person Constructor" << endl;
	personsCount++;
	id = personsCount;
}

void Person::setName(string n)
{
	name = n;
}

string Person::getName()
{
	return name;
}

void Person::setEmail(string e)
{
	email = e;
}

string Person::getEmail()
{
	return email;
}

void Person::setAddress(string a)
{
	address = a;
}

string Person::getAddress()
{
	return address;
}

void Person::setMobile(string m)
{
	mobile = m;
}

string Person::getMobile()
{
	return mobile;
}
