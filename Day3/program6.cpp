//find the center value of array of floating values
#include <iostream>
using namespace std;

// Function to find center value
float findCenter(float arr[], int size)
{
    int center = size / 2;
    return arr[center];
}

int main()
{
    float arr[15];

    cout << "Enter 15 floating values:\n";

    // Input values
    for(int i = 0; i < 15; i++)
    {
        cin >> arr[i];
    }

    // Function call
    float centerValue = findCenter(arr, 15);

    // Output
    cout << "Center value = " << centerValue;

    return 0;
}