//find the frequency of elements in array using void function and no return value
#include <iostream>
using namespace std;

// Function without parameters and return value
void frequency()
{
    int arr[10], num, count = 0;

    cout << "Enter 10 numbers:\n";

    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number to find frequency: ";
    cin >> num;

    for(int i = 0; i < 10; i++)
    {
        if(arr[i] == num)
        {
            count++;
        }
    }

    cout << "Frequency = " << count;
}

int main()
{
    frequency();

    return 0;
}