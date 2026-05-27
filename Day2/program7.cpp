#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Menu" << endl;
    cout << "1. Pizza" << endl;
    cout << "2. Burger" << endl;
    cout << "3. Sandwich" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "You selected Pizza";
            break;

        case 2:
            cout << "You selected Burger";
            break;

        case 3:
            cout << "You selected Sandwich";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}