//write a program to demonstrate the use of default constructor and parameterized constructor
#include <iostream>
using namespace std;

class AIML
{
public:
    int age;

    // Default Constructor
    AIML()
    {
        age = 0;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    AIML(int x)
    {
        age = x;
        cout << "Parameterized Constructor Called" << endl;
    }
};

int main()
{
    // Calling default constructor
    AIML obj1;
    cout << "Age of obj1 = " << obj1.age << endl;

    // Calling parameterized constructor
    AIML obj2(20);
    cout << "Age of obj2 = " << obj2.age << endl;

    return 0;
}