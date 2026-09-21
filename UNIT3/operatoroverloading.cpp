#include <iostream>
using namespace std;

class Number {
public:
    int value;

    // Constructor
    Number(int v) {
        value = v;
    }

    void display() {
        cout << "Value: " << value << endl;
    }

    // Operator overloading +
    Number operator+(Number n) {
        Number temp(0);
        temp.value = value + n.value;
        return temp;
    }
};

int main() {
    Number n1(10), n2(20);

    Number n3 = n1 + n2;

    n3.display();

    return 0;
}