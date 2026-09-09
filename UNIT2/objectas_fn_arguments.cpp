#include<iostream>
using namespace std;
class student{
    public:
    int marks;
};
void display(const student& s){
    cout<<"Marks: "<<s.marks<<endl;
}
int main(){
    student st{90};
    display(st);

}