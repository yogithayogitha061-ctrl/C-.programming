//function called multiple times
#include <iostream>
using namespace std;

// Function definition
void message() {
    cout << "Welcome to C++ Programming" << endl;
}

int main() {

    // Function called multiple times
    message();
    message();
    message();

    return 0;
}