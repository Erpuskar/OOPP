#include<iostream>
using namespace std;
class student{
    private:
    int value=10;
    public:
    friend void show(student& s);
};
void show(student& s){
    cout << "Value: " << s.value << endl;
}
int main(){
    student s;
    show(s);
    return 0;
}