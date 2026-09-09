#include<iostream>
using namespace std;
class Bankaccount{
    private:
    int accountnumber;
    double balance;
 public :
    void setAccountDetails(int accNum, double bal){
        accountnumber = accNum;
        balance = bal;
    }
    void withdraw(double amount){
        if(amount <= balance){
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else {
            cout << "Insufficient funds. Withdrawal failed." << endl;
        }
    }
    void deposit(double amount){
        balance += amount;
        cout << "Deposit successful. New balance: " << balance << endl;
    }
    void displayAccountDetails(){
        cout << "Account Number: " << accountnumber << endl;
        cout << "Balance: " << balance << endl;
    }
};
   int main(){
       Bankaccount acc;
       acc.setAccountDetails(12345, 1000.0);
       acc.displayAccountDetails();
       acc.deposit(500.0);
       acc.withdraw(200.0);
       acc.withdraw(1500.0);
      return 0; 
   }
   
