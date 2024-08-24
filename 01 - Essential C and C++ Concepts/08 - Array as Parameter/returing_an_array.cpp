#include <iostream>

using namespace std;

int *func(int size) { // "*func" means we are returning an array
    int *p;
    p = new int[size]; // Dynamically allocating an array in heap

    for (int i = 0; i < size; i++) {
        p[i] = i + 1; // Assigning each array element to the value (i + 1) in
                      // each iteration
    }

    return p; // Returning the array
}

int main() {
    int *ptr, n = 5; // Declaring a pointer and the array size

    ptr = func(n); // Intializing the pointer by assigning it to the returning array by
            // calling the *func function and passing it the array size "n"

    for (int i = 0; i < n; i++) {
        cout << ptr[i] << " "; // Printing the array elements
    }
    cout << endl;

    return 0;
}