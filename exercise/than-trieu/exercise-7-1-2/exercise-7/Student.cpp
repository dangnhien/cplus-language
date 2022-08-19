#include "Student.h"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

Student::Student()
{
    strcpy_s(this->name, " ");
    strcpy_s(this->ID, " ");
    strcpy_s(this->grade, " ");
    strcpy_s(this->course, " ");
}

Student::Student(char* name, char* id, char* grade, char* course)
{
    setName(name);
    setID(id);
    setGrade(grade);
    setCourse(course);
}

Student::~Student()
{
}

void Student::setName(char* name)
{
    strcpy_s(this->name, name);
}

void Student::setID(char* id)
{
    strcpy_s(this->ID, id);
}

void Student::setGrade(char* grade)
{
    strcpy_s(this->grade, grade);
}

void Student::setCourse(char* course)
{
    strcpy_s(this->course, course);
}

char* Student::getName()
{
    return this->name;
}

char* Student::getID()
{
    return this->ID;
}

char* Student::getGrade()
{
    return this->grade;
}

char* Student::getCourse()
{
    return this->course;
}

void Student::displayInformationStudent()
{
    cout << "\n";
    cout << left
        << setw(15) << getName()
        << setw(15) << getID()
        << setw(15) << getGrade()
        << setw(15) << getCourse() << "\n";
}
