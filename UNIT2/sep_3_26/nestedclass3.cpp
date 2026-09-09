#include<iostream>
using namespace std;
class bank{
    private:
    //private will give error because private members of outer class are not accessible to inner class
    class account{
        private:
        int accountnumber;
        double balance;
        public:
        account(int number,double amount)
        {
            accountnumber=number;
            balance=amount;
        }
        void showaccount(){
            cout<<"account number:"<<accountnumber<<endl;
            cout<<"balance:"<<balance<<endl;
        }


    };
};
int main(){
    bank::account obj(12345,1000.50);
    obj.showaccount();
    return 0;

    //output:
    //error: ‘class bank::account’ is private within this context
}