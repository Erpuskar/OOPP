#include<iostream>
#include<cstdarg>
using namespace std;
int sum(int count, ...) {
    va_list args;
    va_start(args, count);
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }
    va_end(args);
    return total;
}
int main() {
     cout << "Sum of 3, 5, 7 is: " << sum(3, 3, 5, 7) << endl;
     return 0;
}