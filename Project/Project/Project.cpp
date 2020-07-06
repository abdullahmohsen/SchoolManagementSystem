#include <iostream>
#include "Subject.h"
#include "Teacher.h"
#include "Student.h"
#include "TeachingAssistant.h"
using namespace std;

int main()
{
    Teacher t("Abdallah");
    cout << t.getID() << endl;
    t.setName("Abdallah");
    t.setAddress("Giza");
    t.setEmail("abdullah@gmail.com");
    t.setMobile("01008831065");
    t.setSalary(1000);
    t.setWorkingHours(24);
    t.displayInfo();
    t.doTask();

    cout << endl;

    Student s("Mohamed");
    cout << s.getID() << endl;
    s.doTask();

    cout << endl;

    TeachingAssistant ta("Mohsen");
    ta.setResearchSubject("Math");
    ta.displayInfo();

    return 0;
}