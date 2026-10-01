#include<iostream>
using namespace std;
class Number{
    int x;
    public:
    Number(int a){
        x=a;
    }
    void operator++(){
        ++x;
    }
    void display(){
        cout<<"value:"<<x<<endl;
    }
};
int main(){
    Number n(10);
    cout<<"Before applying:"<<x<<endl;
    n.display();
    --n;
    

}

























}