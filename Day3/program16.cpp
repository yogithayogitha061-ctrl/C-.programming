//write a program to demonstrate the use of default constructor, parameterized constructor and copy constructor and destructor
#include <iostream>
using namespace std;

class AIML
{
public:
    int num;

    // Default Constructor
    AIML()
    {
        num = 0;
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    AIML(int x)
    {
        num = x;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy Constructor
    AIML(AIML &obj)
    {
        num = obj.num;
        cout << "Copy Constructor Called" << endl;
    }

    // Destructor
    ~AIML()
    {
        cout << "Destructor Called" << endl;
    }
};

int main()
{
    // Default constructor
    AIML obj1;
    cout << "Value of obj1 = " << obj1.num << endl;

    // Parameterized constructor
    AIML obj2(50);
    cout << "Value of obj2 = " << obj2.num << endl;

    // Copy constructor
    AIML obj3(obj2);
    cout << "Value of obj3 = " << obj3.num << endl;

    return 0;
}