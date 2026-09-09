#include<iostream>
using namespace std;

class Student {
    public:
        string name;
        int rollNo;
};

int main() {
    const int SIZE = 3;
    Student students[SIZE];

    // Input student details
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter details for student " << i + 1 << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Roll No: ";
        cin >> students[i].rollNo;
    }

    // Display student details
    cout << "\nStudent Details:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Name: " << students[i].name << ", Roll No: " << students[i].rollNo << endl;
    }

    return 0;
}