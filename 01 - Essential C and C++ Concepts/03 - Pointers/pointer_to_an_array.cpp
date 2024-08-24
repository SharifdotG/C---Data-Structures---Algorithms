#include <iostream>

using namespace std;

int main() {
    int a[5] = {2, 4, 6, 8, 10};
    int *p;

    p = a; // when initializing a pointer to an array, we don't have to use "&"
    // p = &a[0] // this is correct, as we are initializing a pointer to a
    // value.

    cout << "Printing the elements using the variable 'a': ";
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Printing the elements using the pointer variable 'p': ";
    for (int i = 0; i < 5; i++) {
        cout << p[i] << " ";
    }
    cout << endl;

    return 0;
}