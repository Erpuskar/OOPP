#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

    // Static member shared by all objects
    static int totalStudents;

public:
    Student(string n, int m) {
        name = n;
        marks = m;
        totalStudents++;
    }

    // Static member function
    static void showTotalStudents() {
        cout << "Total Students: " << totalStudents << endl;
    }

    // Friend function declaration
    friend void showStudentDetails(Student s);
};

// Definition of static member
int Student::totalStudents = 0;

// Friend function
void showStudentDetails(Student s) {
    // Friend function can access private data
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
}

int main() {

    Student s1("Krish", 27);
    Student s2("Rahul", 90);
    Student s3("Aman", 78);

    cout << "--- Student Details ---" << endl;

    showStudentDetails(s1);
    showStudentDetails(s2);
    showStudentDetails(s3);

    cout << "\n--- Shared Data ---" << endl;
    Student::showTotalStudents();

    return 0;
}