#include <iostream>
using namespace std;

class Employee{
    private:
        int salary;
    public:
        string name;
        Employee(int s, string n)
        {
            salary=s;
            name=n;
        }
        friend void display(Employee e);
};
void display(Employee e){
    cout<<"Name: "<<e.name<<endl;
    cout<<"Salary: "<<e.salary<<endl;
}
int main(){
    Employee e(50000, "John");
    display(e);
    return 0;
}