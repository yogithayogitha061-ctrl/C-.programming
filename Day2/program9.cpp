//function with parameters and return value
#include <iostream>
using namespace std;

// Function with parameters and return value
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2, result;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Function call
    result = multiply(num1, num2);

    cout << "Multiplication = " << result;

    return 0;
}