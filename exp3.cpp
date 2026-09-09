#include<iostream>
using namespace std;
inline int square(int x)
{
    return x*x;

};
void interest(float amount,float rate=8.5)
{
    float si;
    si=(amount*rate)/100;
    cout<<"simple Interest: "<<si<<endl;

};
class Demo{
    public:  //remember this agar hum kuch nhi lgate hai to ye by default private ho jata hai
            //  isiliye ye error show kar rha tha 
    void display(){
        cout<<"no argument"<<endl;
    }
    void display(int x){
        cout<<"Integer: "<<x<<endl;

    }
     void display(double y){
        cout<<"Double: "<<y<<endl;
        
    } void display(int x,int y){
        cout<<"sum: "<<x+y<<endl;
        
    }
};
int main(){
    //INLINE FUNCTION 
    int num;
    cout<<"enter number";
    cin>>num;
     cout <<endl;
     //DEFAULT ARGUMENTS
    cout<<"square="<<" "<<square(num);
     interest(10000);
    interest(10000,10);
     cout<<endl;
     Demo obj;
     //FUNCTION OVERLOADING 
  obj.display();
  obj.display(10);
  obj.display(5.666);
  obj.display(20,30);
return 0;
   
}