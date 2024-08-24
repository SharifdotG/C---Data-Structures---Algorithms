#include <iostream>

using namespace std;

int main() {
    int a = 10; // 4 bytes in the memory
    int *p;     // Declaration of pointer
    p = &a;     // Initilization

    cout << a << endl;
    cout << "Using pointer: " << *p << endl; // Here "*p" is Dereferencing

    cout << "The value of p is: " << p << endl;
    cout << "The address of a is: " << &a << endl;

    // as we can see both the values of p and &a is the same.

    return 0;
}