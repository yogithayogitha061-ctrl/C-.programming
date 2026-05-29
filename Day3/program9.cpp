#include <iostream>
using namespace std;

// Function to count occurrence of a character in a word
int countOccurrence(char str[], char ch)
{
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char str[100];
    char ch;

    cout << "Enter a word: ";
    cin >> str;

    cout << "Enter the character to find occurrence: ";
    cin >> ch;

    // Function call
    int result = countOccurrence(str, ch);

    cout << "Occurrence of '" << ch << "' = " << result << endl;

    return 0;
}