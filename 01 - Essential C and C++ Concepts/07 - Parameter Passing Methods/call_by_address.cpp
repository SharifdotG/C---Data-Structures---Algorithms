#include <iostream>

using namespace std;

void swap(int *x, int *y) { // Call by adress function
    int temp;
    temp = *x; // Parameters are modified using pointers
    *x = *y;
    *y = temp;
}

int main() {
    int num1 = 10, num2 = 15;

    cout << "Before Swap:" << endl;
    cout << "First Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;

    swap(&num1, &num2); // Addresses are called (Not Values!!!)

    cout << "After Swap:" << endl; // Modified values gets printed
    cout << "First Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;

    return 0;
}