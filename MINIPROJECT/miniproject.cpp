#include<iostream>
using namespace std;
class bank {
    private:
    class account {
        private:
        int accountnumber;
        double balance;
        public:
        account(){
            accountnumber=0;
            balance=0;
        }
        account(int number,double amount){
            accountnumber=number;
            balance=amount;
        }
        // deposit method

        void deposit (double amount){
            if(amount>0){
                balance=balance+amount;
                cout<<"amount deposited successfully.\n";
                cout<<"updated balance:"<<balance<<endl;

            }
            else{
                cout<<"invalid account number:\n";
            }
        }
        // withdraw method
        void withdraw(double amount)
        {
            if(amount<=0){
                cout<<"invalid withdrawl amount.\n";
            }
            else if(amount>balance){
                cout<<"insufficient balance,\n";

            }
            else{
                balance=balance-amount;
                cout<<"amount withdrawn successfully.\n";
                cout<<"updated balance:"<<balance<<endl;
            }
            

        }
        // display account details 
        void showaccount(){
            cout<<"\naccount number:"<<accountnumber<<endl;
            cout<<"balance:"<<balance<<endl;
        }
        // return account number
        int getaccountnumber(){
            return accountnumber;
        }

    };
    public:
     account accounts[5];
     void createAccounts(){
        for(int i=0;i<5;i++){
            int number;
            double amount;
            cout<<"enter account number:";
            cin>>number;
            cout<<"enter initial balance:";
            cin>>amount;
            accounts[i]=account(number,amount);

        }
        cout<<"accounts created successfully.\n";
     }
     int findAccount(int number){
        for(int i=0;i<5;i++){
            if(accounts[i].getaccountnumber()==number){
                return i;
            }
        }
        return -1;
     }
     //display all accounts
    void showAllAccounts(){
          cout<< "\n======All Accounts======\n";
        for(int i=0;i<5;i++){
            accounts[i].showaccount();
        }
    }
    //deposit to account
    void depositMoney(){
        int number;
        double amount;
        cout<<"enter account number:";
        cin>>number;
         int index=findAccount(number);
        if(index!=-1){
            cout<<"enter amount to deposit:";
            cin>>amount; 
            accounts[index].deposit(amount);
        }
        else{
            cout<<"account not found.\n";
        }
    }
    void withdrawMoney(){
        int number;
        double amount;
        cout<<"enter account number:";
        cin>>number;
         int index=findAccount(number);
        if(index!=-1){
            cout<<"enter amount to withdraw:";
            cin>>amount; 
            accounts[index].withdraw(amount);
        }
        else{
            cout<<"account not found.\n";
        }
    }
    void showParticularAccount(){
        int number;
        cout<<"enter account number:";
        cin>>number;
         int index=findAccount(number);
        if(index!=-1){
            accounts[index].showaccount();
        }
        else{
            cout<<"account not found.\n";
        }
    }

};
int main(){
    
    bank b;
    b.createAccounts();
    int choice;
    do{
        cout<<"\n======Banking System Menu======\n";
        cout<<"1. Show all accounts\n";
        cout<<"2. Deposit money\n";
        cout<<"3. Withdraw money\n";
        cout<<"4. Show particular account\n";
        cout<<"5. Exit\n";
        cout<<"enter your choice:";
        cin>>choice;
        switch(choice){
            case 1:
            b.showAllAccounts();
            break;
            case 2:
            b.depositMoney();
            break;
            case 3:
            b.withdrawMoney();
            break;
            case 4:
            b.showParticularAccount();
            break;
            case 5:
            cout<<"exiting the program.\n";
            break;
            default:
            cout<<"invalid choice.\n";
        }
    }while(choice!=5);
    return 0;
}