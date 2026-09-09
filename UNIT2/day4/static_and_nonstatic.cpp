#include <iostream>
#include <string>
using namespace std;

class Student {
    static int nextRollNo;   // Static data member

    int rollNo;              // Non-static data member
    string name;             // Non-static data member
    float marks;             // Non-static data member

public:
    Student(string n, float m) {
        rollNo = nextRollNo++;
        name = n;
        marks = m;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "-------------------" << endl;
    }
};

// Static member initialization:only one memory location is allocated for static members, and they are shared among all instances of the class. Therefore, we need to initialize the static member outside the class definition.
int Student::nextRollNo = 10;

int main() {

    Student s1("Rahul", 85);
    Student s2("Aman", 90);
    Student s3("Priya", 78);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}