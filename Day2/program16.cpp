//write a program for permutation and combination
#include <iostream>
using namespace std;

// Function to find factorial
int factorial(int n) {
    int fact = 1;

    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main() {
    int n, r;
    int permutation, combination;

    cout << "Enter n value: ";
    cin >> n;

    cout << "Enter r value: ";
    cin >> r;

    // Permutation formula
    permutation = factorial(n) / factorial(n - r);

    // Combination formula
    combination = factorial(n) / (factorial(r) * factorial(n - r));

    cout << "Permutation = " << permutation << endl;
    cout << "Combination = " << combination;

    return 0;
}