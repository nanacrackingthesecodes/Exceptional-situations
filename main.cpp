#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    try
    {
        Student obj("Ivan", "Petrov", 19, 11.7, 2);
        obj.Print();

        obj.SetYear(7);
        obj.Print();
    }
    catch (const char* str)
    {
        cout << "Catch exception: " << str << endl;
    }

    return 0;
}
