//write a program to check prime number
#include <iostream>
using namespace std;

int main() {
    int num, i;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if(num <= 1) {
        isPrime = false;
    }
    else {
        for(i = 2; i < num; i++) {
            if(num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if(isPrime) {
        cout << num << " is a Prime Number";
    }
    else {
        cout << num << " is Not a Prime Number";
    }

    return 0;
}