#include <iostream>
using namespace std;

class Fahrenheit;

class Celsius {
    float temp;
public:
    Celsius(float t) : temp(t) {}
    Celsius(const Fahrenheit& f);
    
    float getTemp() const {
        return temp;
    }
};

class Fahrenheit {
    float temp;
public:
    Fahrenheit(float t) : temp(t) {}
    
    friend class Celsius;
    
    float getTemp() const {
        return temp;
    }
};

Celsius::Celsius(const Fahrenheit& f) {
    temp = (f.temp - 32) * 5 / 9;
}

int main() {
    Fahrenheit f(100);
    Celsius c = f; // Uses the conversion constructor
    
    cout << "100 Fahrenheit in Celsius is: " << c.getTemp() << endl;
    
    return 0;
}