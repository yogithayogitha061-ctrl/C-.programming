//write a program to check if the number is odd or even(if else)
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is Even";
    } else {
        cout << num << " is Odd";
    }

    return 0;
}
