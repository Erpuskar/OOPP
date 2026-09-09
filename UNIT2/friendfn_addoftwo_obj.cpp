#include<iostream>
using namespace std;
class Number{
    private:
        int value;
    public:
        Number(int v) : value(v) {}
        friend Number add(Number n1, Number n2);
};
Number add(Number n1, Number n2){
    return Number(n1.value + n2.value);
}
int main(){
    Number num1(5), num2(10);
    Number sum = add(num1, num2);
    
    return 0;
}
