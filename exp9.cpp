#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;
    float marks;

public:
    void input() {
        cout << "Enter Roll No: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nRoll No: " << roll;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Dynamic array of objects
    Student *s = new Student[n];

    // Pointer to objects
    Student *ptr = s;

    // Input using pointer
    for(int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        (ptr + i)->input();
    }

    // Display using pointer
    cout << "\n--- Student Details ---\n";

    for(int i = 0; i < n; i++) {
        (ptr + i)->display();
    }

    // Free dynamically allocated memory
    delete[] s;

    return 0;
}