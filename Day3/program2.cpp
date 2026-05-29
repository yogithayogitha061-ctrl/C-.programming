//no of timmes number is repeated
#include <iostream>
using namespace std;

// Function to count occurrence of a number
int countOccurrence(int arr[], int size, int num)
{
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == num)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int arr[15];
    int num;

    cout << "Enter 15 numbers:\n";

    // Input array elements
    for(int i = 0; i < 15; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number to find occurrence: ";
    cin >> num;

    // Function call
    int result = countOccurrence(arr, 15, num);

    // Output
    cout << "The number " << num << " occurred "
         << result << " times." << endl;

    return 0;
}