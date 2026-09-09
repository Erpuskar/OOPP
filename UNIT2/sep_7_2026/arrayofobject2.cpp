#include<iostream>  
using namespace std;

class bankAccount {
    public:
        string accountHolderName;
        int accountNumber;
        double balance;

    
        void deposit(double amount) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }


        void withdraw(double amount) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Withdrawn: " << amount << endl;
            } else {
                cout << "Insufficient balance!" << endl;
            }
        }


        void displayAccountDetails() {
            cout << "Account Holder: " << accountHolderName << endl;
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: " << balance << endl;
            cout<<"withdrawl:"<<endl;
            double amount;
            cin>>amount;
            withdraw(amount);
            cout << "Updated Balance: " << balance << endl;

            
        }
};

int main() {
    const int SIZE = 3;
    bankAccount accounts[SIZE];

    // Input account details
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter details for account " << i + 1 << endl;
        cout << "Account Holder Name: ";
        cin >> accounts[i].accountHolderName;
        cout << "Account Number: ";
        cin >> accounts[i].accountNumber;
        cout << "Initial Balance: ";
        cin >> accounts[i].balance;
        cout<<"withdrawl:"<<endl;
        double amount;
        cin>>amount;
        accounts[i].withdraw(amount);
    }

    // Display account details
    cout << "\nAccount Details:\n";
    for (int i = 0; i < SIZE; i++) {
        accounts[i].displayAccountDetails();
    }

    return 0;
   
    for (int i = 0; i < SIZE; i++) {
        cout << "Account Holder: " << accounts[i].accountHolderName << ", Account Number: " << accounts[i].accountNumber << ", Balance: " << accounts[i].balance << endl;
    }

    return 0;
}