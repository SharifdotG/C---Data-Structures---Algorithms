#include <iostream>

using namespace std;

int add(int a, int b) { // Call by value function
    int c;
    c = a + b; // Parameters are used but not modified

    return c; // Returning the value "c", not the parameters (a, b)
}

int main() {
    int num1 = 10, num2 = 15, sum;

    sum = add(num1, num2); // Values are called

    cout << "Sum is: " << sum << endl; // Returned value gets printed

    return 0;
}