//average of 10 numbers
#include <iostream>
using namespace std;

// Function to find average
float findAverage(int arr[], int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return (float)sum / size;
}

int main()
{
    int arr[10];

    cout << "Enter 10 numbers:\n";

    // Input numbers
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    // Function call
    float average = findAverage(arr, 10);

    // Output
    cout << "Average = " << average;

    return 0;
}