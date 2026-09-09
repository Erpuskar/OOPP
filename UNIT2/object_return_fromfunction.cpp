#include<iostream>
using namespace std;
class Point{
    public:
    int x, y;
    
};

Point createPoint(int a, int b) {
    return Point{a, b};
}

int main() {
    Point p = createPoint(10, 20);
    cout << p.x << " " << p.y ;
    return 0;
}