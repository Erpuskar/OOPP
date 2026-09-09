#include <iostream>
using namespace std;

class Student{
    private:
        int marks;
    public:
        Student(int m)
        {
            marks=m;
        }
        friend void compare(Student s1, Student s2);
};
void compare(Student s1, Student s2){
    if(s1.marks>s2.marks)
        cout<<"Student 1 has better marks."<<endl;
    else if(s1.marks==s2.marks)
        cout<<"Both students have equal marks."<<endl;    
    else
        cout<<"Student 2 has better marks."<<endl;
}
int main(){
    Student s1(84);
    Student s2(85);
    compare(s1, s2);
    return 0;
}
//here compare() is a non-member function that takes two Student objects as arguments and compares their marks. It is declared as a friend function of the Student class, which allows it to access the private member variable marks of both Student objects.