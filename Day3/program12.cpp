#include <iostream>
using namespace std;

// Creating class AIML
class AIML
{
public:
    string name;
    string usn;
    string address;
    string fathername;
    float sgpa;
    int yearofjoining;
    int sem;
};

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Array of objects
    AIML student[n];

    // Input details
    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter Details of Student " << i + 1 << endl;

        cout << "Enter Name: ";
        cin >> student[i].name;

        cout << "Enter USN: ";
        cin >> student[i].usn;

        cout << "Enter Address: ";
        cin >> student[i].address;

        cout << "Enter Father Name: ";
        cin >> student[i].fathername;

        cout << "Enter SGPA: ";
        cin >> student[i].sgpa;

        cout << "Enter Year of Joining: ";
        cin >> student[i].yearofjoining;

        cout << "Enter Semester: ";
        cin >> student[i].sem;
    }

    // Display details
    cout << "\n===== STUDENT DETAILS =====\n";

    for(int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Name            : " << student[i].name << endl;
        cout << "USN             : " << student[i].usn << endl;
        cout << "Address         : " << student[i].address << endl;
        cout << "Father Name     : " << student[i].fathername << endl;
        cout << "SGPA            : " << student[i].sgpa << endl;
        cout << "Year of Joining : " << student[i].yearofjoining << endl;
        cout << "Semester        : " << student[i].sem << endl;
    }

    return 0;
}