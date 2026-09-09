#include<iostream>
using namespace std;
int x=10;
class Demo{
    public:
    static int y;
    void show();
};
int Demo::y=20;
void Demo::show(){
    cout<<"Global x="<<::x<<endl;
    cout<<"Static y="<<Demo::y<<endl;
}
int main(){
    Demo d;
    d.show();
    return 0;
}