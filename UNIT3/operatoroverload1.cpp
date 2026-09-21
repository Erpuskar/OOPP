#include <iostream>
#include <string>
using namespace std;
class String{
    private:
    char str[100];
    public:
    String (const char s[]=""){
        strcpy(str,s);
    }
    String operator+(String s){
        String temp;
        strcpy(temp.str,str);
        strcat(temp.str,s.str);
        return temp;
}
  void display(){
    cout<<str;
  }
};
int main(){
    String s1("hello");
    String s2("world");
    String s3;
    s3 = s1 + s2;
    cout<<"first string: ";
    s1.display();
    cout<<"\nsecond string: ";
    s2.display();
    cout<<"\nconcatenated string: ";
    s3.display();
    return 0;
}