#include<iostream>
using namespace std;
class Payment{
    public:
    virtual void pay(int amount){
        cout<<"Paying rs."<<amount<<"using generic payment method"<<endl;
    }
};
class CreditCard:public Payment{
    public:
    void pay(int amount)override{
    cout<<"paying Rs."<<amount<<"using Credit card"<<endl;

    }
};
class UPI:public Payment{
    public:
    void pay(int amount) override{
        cout<<"Paying Rs."<<amount<<"using UPI "<<endl;

    }
};
int main(){
    Payment* method;
    CreditCard cc;
    UPI upi;
    method =&cc;
    method->pay(500);
    method =&upi;
    method->pay(200);

}