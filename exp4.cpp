#include<iostream>
using namespace std;
int main()
   { auto a=10;
    auto b=15.5;
    auto c='A';
    auto d="Hello";
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
    cout<<"d="<<d<<endl;
    int numbers[]={10, 20, 30, 40, 50};
    for(int value:numbers){
        cout<<value<<" ";
    }
}