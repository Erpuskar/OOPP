// #include<iostream>
// using namespace std;
// class student {
//     int id;
// public:
//  student():id(567){}
//    void display() {
//        cout << "Student ID: " << id << endl;
//    }
// };

// int main() {
//     student obj;
//     obj.display();
//     return 0;
// }
#include <iostream> 
using namespace std;
class student {
    int id;
public:
    student() : id(567) {}
default:
       student() : id(0) {}
parameterized:
    student(const student& s) : id(s.id) {}
    void display() {
        cout << "Student ID: " << id << endl;
    }
};
int main() {
    student obj1; // calls default constructor
    obj1.display();
    student obj2(123); // calls parameterized constructor
    obj2.display();
    return 0;
}