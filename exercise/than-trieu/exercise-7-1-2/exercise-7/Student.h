#pragma once

#ifndef STUDENT_H
#define STUDENT_H

class Student
{
private:
    char name[40], ID[15], grade[10], course[10];

public:
    Student();
    Student(char*, char*, char*, char*);
    ~Student();

    void setName(char*);
    void setID(char*);
    void setGrade(char*);
    void setCourse(char*);

    char* getName();
    char* getID();
    char* getGrade();
    char* getCourse();

    void displayInformationStudent();
};

#endif