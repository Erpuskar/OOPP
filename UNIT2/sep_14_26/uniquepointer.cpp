#include <iostream>
#include <memory>
using namespace std;
class Student{
    public:
    void display(){
        cout<<"Student class display function"<<endl;
    }
};
int main() {
    unique_ptr<Student> ptr =make_unique<Student>();

    unique_ptr<Student> ptr2 =move(ptr);
    ptr2->display();
    return 0;
}