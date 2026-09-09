#include<iostream>
using namespace std;
class student{
    public:
        static int totalstudent;
        student(){
            totalstudent++;
        }
};
int student::totalstudent = 0;
int main(){ 
    student s1, s2, s3;
    cout << "Total students: " << student::totalstudent << endl;
    return 0;
    //output- Total students: 3
}