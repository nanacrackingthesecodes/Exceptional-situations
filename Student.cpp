#include "Student.h"

Student::Student()
{
    age = 0;
    Average = 0.0;
    year = 0;
}

Student::Student(string n, string s, int a, double Av, int y)
{
    name = n;
    surname = s;

    if (a < 17 || a > 65)
        throw "Age exception!!!";
    age = a;

    if (Av < 0)
        throw "Average exception!";
    Average = Av;

    if (y < 1 || y > 5)
        throw "Year exception!";
    year = y;
}

void Student::Print()
{
    cout << "Name: " << name << "\t"
         << "Surname: " << surname << "\t"
         << "Age: " << age << "\t"
         << "Average: " << Average << "\t"
         << "Year: " << year << endl << endl;
}

void Student::SetYear(int y)
{
    if (y < 1 || y > 5)
        throw "Year error!";
    year = y;
}
