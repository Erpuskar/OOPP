#include<iostream>
using namespace std;
class student{
   public:
void display() const{
        cout<<"student"<<endl;
    }
};
int main(){
    const student s1;
    s1.display();
    const student s2{s1};
    s2.display();
    return 0;
}