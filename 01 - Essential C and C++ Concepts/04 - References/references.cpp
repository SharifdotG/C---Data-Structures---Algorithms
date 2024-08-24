#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int &r = a; // "r" is initialized and referencing the variable "a", now "r"
                // means "a"

    int b = 30;
    r = b;

    cout << "a: " << a << endl; // printing the data variable "a"
    cout << "r: " << r << endl; // printing the reference variable "r"
    // "a" and "r" will have the same value, which is 30

    return 0;
}
