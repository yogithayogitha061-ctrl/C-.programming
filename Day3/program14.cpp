//write a program to demonstrate the use of parameterized constructor
#include <iostream>
using namespace std;

class AIML
{
public:
    int age;

    // Parameterized Constructor
    AIML(int x)
    {
        age = x;
        cout << "Parameterized Constructor Called" << endl;
    }
};

int main()
{
    // Object creation with parameter
    AIML student(20);

    // Display value
    cout << "Age = " << student.age << endl;

    return 0;
}