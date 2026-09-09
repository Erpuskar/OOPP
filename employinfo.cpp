#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    string name;
    string post;
    float grossSalary;
    float basic;
    float hra;
    float da;
    void getdata()
    {
        cout << "Enter employee id: ";
        cin >> id;
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee post: ";
        cin >> post;
    
    };
    void calculateGrossSalary(){
        cout << "Enter employee basic salary: ";
        cin >> basic;
        hra = basic * 0.02;
    cout << "HRA: " << hra << endl;
    da = basic * 0.03 ;
    cout << "DA: " << da << endl;
    grossSalary = basic + hra + da;
    };
    

};


int main()
{
    Employee e1;
    e1.getdata();
    e1.grossSalary();
    cout << "Employee id: " << e1.id << endl;
    cout << "Employee name: " << e1.name << endl;
    cout << "Employee post: " << e1.post << endl;
    cout << "Employee salary: " << e1.grossSalary() << endl;
    return 0;
}