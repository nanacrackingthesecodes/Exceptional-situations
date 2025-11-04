#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    string surname;
    int age;
    double Average;
    int year;

public:
    Student();
    Student(string n, string s, int a, double Av, int y);
    void Print();

    void SetYear(int y);
};
