#include <iostream>
using namespace std;

class A {
private:
    string name;
    int marks;

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }

    void setMarks(int m) {
        marks = m;
    }

    int getMarks() {
        return marks;
    }
};

class Student : public A {
private:
    int roll;

public:
    void setRoll(int r) {
        roll = r;
    }

    int getRoll() {
        return roll;
    }

    void display() {
        cout << "Name: " << getName() << endl;
        cout << "Marks: " << getMarks() << endl;
        cout << "Roll: " << roll << endl;
    }
};

int main() {
    Student s;

    s.setName("Harshit");
    s.setMarks(90);
    s.setRoll(12);

    s.display();

    return 0;
}