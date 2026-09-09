#include<iostream>
using namespace std;
class student{
    public:
        static int totalstudent;
        static void showcount(){
            cout<<"count of students: "<<totalstudent<<endl;
        }
};
int student::totalstudent = 0;
int main(){ 
    student s1, s2, s3;
    student::showcount();
    return 0;
}