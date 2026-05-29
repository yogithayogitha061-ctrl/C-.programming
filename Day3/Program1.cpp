//find the largest and smallest (Array of 15numbers)
#include <iostream>
using namespace std;

// Function to find largest number
int findLargest(int arr[], int size)
{
    int largest = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

// Function to find smallest number
int findSmallest(int arr[], int size)
{
    int smallest = arr[0];

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
    int arr[15];

    cout << "Enter 15 numbers:\n";

    // Input array elements
    for(int i = 0; i < 15; i++)
    {
        cin >> arr[i];
    }

    // Function calls
    int largest = findLargest(arr, 15);
    int smallest = findSmallest(arr, 15);

    // Output
    cout << "Largest number = " << largest << endl;
    cout << "Smallest number = " << smallest << endl;

    return 0;
}
