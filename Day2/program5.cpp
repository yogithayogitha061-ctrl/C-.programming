//nested if else
#include <iostream>
using namespace std;

int main() {
    int age;
    int marks;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter marks: ";
    cin >> marks;

    if (age >= 18) {
        if (marks >= 50) {
            cout << "Eligible";
        }
    }

    return 0;
}