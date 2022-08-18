#include <iostream>
#include <iomanip>
#include <cstring>

#include "student.h"

using namespace std;

void inputData(char data[]);
void studentInput(char* name, char* id, char* grade, char* course);
void studentOutput(char* name, char* id, char* grade, char* course);

int main()
{
    char name[40], ID[15], grade[10], course[10];

    studentInput(name, ID, grade, course);

    Student student_1(name, ID, grade, course);

    student_1.displayInformationStudent();

    return 0;
}

void inputData(char data[])
{
    char* t = NULL;

    fflush(stdin);
    fgets(data, 40, stdin);

    if ((t = strrchr(data, '\n')) != NULL)
        *t = '\0';
}

void studentInput(char* name, char* id, char* grade, char* course)
{
    cout << "\nInput name: ";
    inputData(name);

    cout << "\nInput ID: ";
    inputData(id);

    cout << "\nInput grade: ";
    inputData(grade);

    cout << "\nInput course: ";
    inputData(course);
}

void studentOutput(char* name, char* id, char* grade, char* course)
{
    cout << setw(30) << "Name student: "
        << setw(15) << "ID: "
        << setw(15) << "Grade: "
        << setw(15) << "Course: "
        << "\n";

    cout << setw(30) << name
        << setw(15) << id
        << setw(15) << grade
        << setw(15) << course
        << "\n";
}