//write a program to demonstrate the use of copy constructor
#include <iostream>
using namespace std;

class AIML
{
public:
    int marks;

    // Parameterized Constructor
    AIML(int x)
    {
        marks = x;
    }

    // Copy Constructor
    AIML(AIML &obj)
    {
        marks = obj.marks;
        cout << "Copy Constructor Called" << endl;
    }
};

int main()
{
    // First object
    AIML student1(95);

    // Copying student1 to student2
    AIML student2(student1);

    // Display values
    cout << "Marks of Student1 = " << student1.marks << endl;
    cout << "Marks of Student2 = " << student2.marks << endl;

    return 0;
}