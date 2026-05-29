#include <iostream>
using namespace std;

// Function to find average ASCII value
float findAverage(char arr[], int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum = sum + arr[i]; // ASCII values added
    }

    return (float)sum / size;
}

int main()
{
    char arr[10];

    cout << "Enter 10 characters:\n";

    // Input characters
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    // Function call
    float average = findAverage(arr, 10);

    // Output
    cout << "Average ASCII value = " << average;

    return 0;
}