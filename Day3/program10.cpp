// Program to find largest and smallest character in an array
#include <iostream>
using namespace std;

// Function to find largest character
char findLargest(char arr[], int size)
{
    char largest = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

// Function to find smallest character
char findSmallest(char arr[], int size)
{
    char smallest = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    return smallest;
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

    // Function calls
    char largest = findLargest(arr, 15);
    char smallest = findSmallest(arr, 15);

    // Output
    cout << "Largest character = " << largest << endl;
    cout << "Smallest character = " << smallest << endl;

    return 0;
}