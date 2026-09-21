#include<iostream>
using namespace std;
class calculator{
    public:
    class add{
        public:
        int sum(int a,int b){
            return a+b;
        }
        int sum(int a,int b,int c){
            return a+b+c;
        }
        double sum(double a,double b){
            return a+b;
        }
    };
    class sub{
        public:
        int sub(int a,int b){
            return a-b;
        }
        int sub(int a,int b,int c){
            return a-b-c;
        }
        double sub(double a,double b){
            return a-b;
        }
    };
    class mul{
        public:
        int mul(int a,int b){
            return a*b;
        }
        int mul(int a,int b,int c){
            return a*b*c;
        }
        double mul(double a,double b){
            return a*b;
        }
    };
    class div{
        public:
        int div(int a,int b){
            return a/b;
        }
        int div(int a,int b,int c){
            return a/b/c;
        }
        double div(double a,double b){
            return a/b;
        }
    };  
};
int main(){
    calculator::add obj;
    cout<<obj.sum(10,20)<<endl;
    cout<<obj.sum(10,20,30)<<endl;
    cout<<obj.sum(10.5,20.5)<<endl;
}