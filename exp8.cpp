#include <iostream>
using namespace std;

class Distance {
    int meter;

public:
    void setData(int m) {
        meter = m;
    }

    void display() {
        cout << "Distance = " << meter << " meters" << endl;
    }

    // Object passed as argument
    Distance add(Distance d) {
        Distance temp;
        temp.meter = meter + d.meter;

        // Returning an object
        return temp;
    }
};

int main() {
    Distance d1, d2, d3;

    d1.setData(10);
    d2.setData(20);

    d3 = d1.add(d2);

    d3.display();

    return 0;
}