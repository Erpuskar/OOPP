# include <iostream>
using namespace std;
class Employee {
    public:
        
        static int alivecount; // Static member to keep track of total employees

    public:
        Employee() {
            alivecount++; // Increment total employees when a new employee is created
           cout<< "Employee created.Currently alive: " << alivecount << endl;
        }
       ~Employee() {
            alivecount--; // Decrement total employees when an employee is destroyed
            cout<< "Employee destroyed.Currently alive: " << alivecount << endl;
        }   
};
int Employee::alivecount = 0; // Definition of static member,outside the class
int main() {
    Employee e1;
    {
        Employee e2;
        Employee e3;
        cout << "Inside the block." << endl;
    } // e2 and e3 go out of scope here, but alivecount is not decremented
   
    cout << "Back to main function." << endl;
   

    return 0;
}
/*
constructor does ++ - because a new objectd is created
destructor does -- because an object is destroyed
Both use the same static variable ,so the count stays accurate across all objects-this is possible because static members are shared.

concept One-line definition
static data member: A class variable shared among all instances of the class.
static member function: A class level function callable without an instance of the class.
Const Object:Cannot be modified after creation.
Const Function: Guarantees not to modify the object it is called on.
*/