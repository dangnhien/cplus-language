#include <iostream>
#include <iomanip>
#include <cstring>

#include "student.h"

using namespace std;

void inputData(char data[]);
void studentInput(char* name, char* id, char* grade, char* course);
void studentOutput(char* name, char* id, char* grade, char* course);

void menu();

int main()
{
    menu();

    return 0;
}

void menu()
{
    Student student_array[50];

    int number_student;

    char name[40], ID[15], grade[10], course[10];

    cout << "\nInput number of student: ";
    cin >> number_student;

    // flushes the standard input
   // (clears the input buffer)
    while ((getchar()) != '\n');



    for (int i = 0; i < number_student; i++)
    {
        cout << "\nInput information student number " << i + 1;

        studentInput(name, ID, grade, course);
        
        Student student_1(name, ID, grade, course);

        student_array[i] = student_1;
        
        cout << "\n";
    }

    int choose = -1;

    do {
        cout << "\n__MENU__"
            << "\n1_Output information of student."
            << "\n2_Sort student by name."
            << "\n3_Output information by grade."
            << "\nYou choose???";

        cin >> choose;

        switch (choose)
        {
            case 1:
                cout << "\nInformation student just enter:" << "\n";
                cout << setw(15) << "Name student: "
                    << setw(15) << "ID: "
                    << setw(15) << "Grade: "
                    << setw(15) << "Course: "
                    << "\n";
                for (int i = 0; i < number_student; i++)
                {
                    student_array[i].displayInformationStudent();
                }
                break;

            case 2:
                for (int i = 0; i <= number_student - 1; i++)
                {
                    for (int j = i + 1; j < number_student; j++)
                        if (strcmp(student_array[i].getName(), student_array[j].getName()) > 0)
                            swap(student_array[i], student_array[j]);
                }


                cout << "\nInformation student after sort:" << "\n";
                cout << setw(15) << "Name student: "
                    << setw(15) << "ID: "
                    << setw(15) << "Grade: "
                    << setw(15) << "Course: "
                    << "\n";
                for (int i = 0; i < number_student; i++)
                {
                    student_array[i].displayInformationStudent();
                }

                break;

            case 3:
                char ss[10];

                cout << "\nEnter grade:";
                fflush(stdin);
                cin.getline(ss, 10);

                cout << "\nInformation student by grade "<<ss<<" :"<<"\n";
                cout << setw(15) << "Name student: "
                    << setw(15) << "ID: "
                    << setw(15) << "Grade: "
                    << setw(15) << "Course: "
                    << "\n";

                for (int i = 0; i < number_student; i++)
                    if (strcmp(ss, student_array[i].getGrade()) == 0)
                        student_array[i].displayInformationStudent();
                break;

            default:
                cout << "\nEnter error. Input again!!!";
        }

    } while (choose);
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
    fflush(stdin);
    cin.getline(name, 40);

    cout << "\nInput ID: ";
    fflush(stdin);
    cin.getline(id, 15);

    cout << "\nInput grade: ";
    fflush(stdin);
    cin.getline(grade, 10);

    cout << "\nInput course: ";
    fflush(stdin);
    cin.getline(course, 10);
}

void studentOutput(char* name, char* id, char* grade, char* course)
{
    cout << left
        << setw(15) << "Name student: "
        << setw(15) << "ID: "
        << setw(15) << "Grade: "
        << setw(15) << "Course: "
        << "\n";

    cout << left
        << setw(15) << name
        << setw(15) << id
        << setw(15) << grade
        << setw(15) << course
        << "\n";
}