//function overloading
#include <iostream>
using namespace std;

// Function with 2 integer parameters
int add(int a, int b) {
    return a + b;
}

// Function with 3 integer parameters
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {

    cout << "Sum of 2 numbers = " << add(10, 20) << endl;

    cout << "Sum of 3 numbers = " << add(10, 20, 30);

    return 0;
}