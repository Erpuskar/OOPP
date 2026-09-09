#include <iostream>
using namespace std;

class Student {
private:
    string name;
    string marks;

public:

    // 1. Default Constructor
    Student() {
        name = "Unknown";
        marks = "0";
        cout << "Default Constructor Called" << endl;
    }

    // 2. Parameterized Constructor
    Student(string n, string a) {
        name = n;
        marks = a;
        cout << "Parameterized Constructor Called" << endl;
    }

    // 3. Copy Constructor
    Student(const Student &s) {
        name = s.name;
        marks = s.marks;
        cout << "Copy Constructor Called" << endl;
    }

    // Display function
    void display() {
        cout << "Name: " << name << endl;
        cout << "marks: " << marks << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor Called for " << name << endl;
    }
};

int main() {

    cout << "--- Object 1 ---" << endl;
    Student s1;
    s1.display();

    cout << "\n--- Object 2 ---" << endl;
    Student s2("Krish", "fail");
    s2.display();

    cout << "\n--- Object 3 (Copy) ---" << endl;
    Student s3 = s2;
    s3.display();

    cout << "\nEnd of main()" << endl;

    return 0;
}