#include<iostream>
using namespace std;
class car{
    string brand;
    public:
       car(string b){
              brand = b;
       }
       void show()const{
           cout << "Car brand: " << brand << endl;
       }
       void changeBrand(string b){
           brand = b;
       }
};

int main(){
    const car myCar("Toyota");
    myCar.show();
    // myCar.changeBrand("Honda"); // This line will cause a compilation error because changeBrand is not a const member function
   //if we want to change the brand of the car, we need to remove the const qualifier from the myCar object or make the changeBrand function a const member function.
    return 0;
}