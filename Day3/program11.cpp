//program to find center character of array of characters
#include <iostream>
using namespace std;

// Function to find center character
char findCenter(char arr[], int size)
{
    int center = size / 2;
    return arr[center];
}

int main()
{
    char arr[15];

    cout << "Enter 15 characters:\n";

    // Input characters
    for(int i = 0; i < 15; i++)
    {
        cin >> arr[i];
    }

    // Function call
    char centerValue = findCenter(arr, 15);

    // Output
    cout << "Center character = " << centerValue << endl;

    return 0;
}