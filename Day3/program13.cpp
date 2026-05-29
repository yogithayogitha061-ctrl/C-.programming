//write a program to demonstrate the use of default constructor
#include <iostream>
using namespace std;

class AIML
{
public:
    int age;

    // Default Constructor
    AIML()
    {
        age = 18;
        cout << "Default Constructor Called" << endl;
    }
};

int main()
{
    // Object creation
    AIML student;

    // Display value
    cout << "Age = " << student.age << endl;

    return 0;
}