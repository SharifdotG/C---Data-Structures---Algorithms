#include <iostream>

using namespace std;

// Function header/prototype, (int a, int b) is called "formal parameters"
int add(int a, int b) {
    int c;
    c = a + b;

    return c; // returning the value
}

// Main Function
int main() {
    int num1 = 10, num2 = 15, sum;

    // Function call, (num1, num2) is called "actual parameters"
    sum = add(num1, num2); // The returning value assigned to the "sum" variable

    cout << "Sum is: " << sum << endl;

    return 0;
}