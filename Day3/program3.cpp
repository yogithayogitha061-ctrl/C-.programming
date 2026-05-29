//simple calculator using functions
#include <iostream>
using namespace std;

// Function for addition
float add(float a, float b)
{
    return a + b;
}

// Function for subtraction
float subtract(float a, float b)
{
    return a - b;
}

// Function for multiplication
float multiply(float a, float b)
{
    return a * b;
}

// Function for division
float divide(float a, float b)
{
    return a / b;
}

int main()
{
    float num1, num2;
    int choice;

    cout << "Simple Calculator\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(choice)
    {
        case 1:
            cout << "Result = " << add(num1, num2);
            break;

        case 2:
            cout << "Result = " << subtract(num1, num2);
            break;

        case 3:
            cout << "Result = " << multiply(num1, num2);
            break;

        case 4:
            if(num2 != 0)
                cout << "Result = " << divide(num1, num2);
            else
                cout << "Division by zero is not possible";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}