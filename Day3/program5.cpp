//find the center value of array
#include <iostream>
using namespace std;

// Function to find center value
int findCenter(int arr[], int size)
{
    int center = size / 2;
    return arr[center];
}

int main()
{
    int arr[15];

    cout << "Enter 15 numbers:\n";

    // Input array elements
    for(int i = 0; i < 15; i++)
    {
        cin >> arr[i];
    }

    // Function call
    int centerValue = findCenter(arr, 15);

    // Output
    cout << "Center value = " << centerValue;

    return 0;
}