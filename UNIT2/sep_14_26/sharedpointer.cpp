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
    shared_ptr<int> p1 = make_shared<int>(100);
    shared_ptr<int> p2 = p1;
    cout << "Value pointed to by p1: " << *p1 << endl;
    cout<<"Reference count: " << p1.use_count() << endl;
    cout << "Value pointed to by p2: " << *p2 << endl;
    cout<<"Reference count: " << p2.use_count() << endl;
    return 0;   }