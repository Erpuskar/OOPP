#include <iostream>
using namespace std;

class sales_person
{
public:
    string id;
    string name;
    string post;
    int sales;
    int basicsalary;

    void getdata()
    {
        cout << "Enter employee id: ";
        cin >> id;

        cout << "Enter employee name: ";
        cin >> name;

        cout << "Enter employee post: ";
        cin >> post;

        cout << "Enter basic salary: ";
        cin >> basicsalary;

        cout << "Number of sales: ";
        cin >> sales;
    }
} sal;

class incentive
{
public:
    int incentive;

    void calculateincentive()
    {
        if (sal.sales > 10)
            incentive = sal.sales * 50;
        else if (sal.sales > 0)
            incentive = sal.sales * 30;
        else
            incentive = 0;

        cout << "Incentive: " << incentive << endl;
    }

    void totalearning()
    {
        int total = sal.basicsalary + incentive;
        cout << "Total Earning: " << total << endl;
    }
} ins;

int main()
{
    sal.getdata();
    ins.calculateincentive();
    ins.totalearning();

    return 0;
}