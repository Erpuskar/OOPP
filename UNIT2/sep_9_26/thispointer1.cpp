#include <iostream>
using namespace std;
class student{
    private:
    string name;
    int marks;
    public:
    student* setname(string name){
        this->name=name;
        return this;
    }
    student* setmarks(int marks){
        this->marks=marks;
        return this;
    }
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"marks:"<<marks<<endl;
    }
};
int main(){
    student s;
    s.setname("Rahul")->setmarks(85)->display();
    return 0;
}
