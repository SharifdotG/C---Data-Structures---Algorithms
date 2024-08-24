#include <iostream>

using namespace std;

// "void func(int *arr, int n) {" function header can also be used!
void func(int arr[], int n) {
    cout << "Array Printing using a function: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    // arr[0] = 15, this will change the actual array element in the main
    // function as we are passing this array using it's address
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = 5;

    cout << "Array Printing in the main function: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    func(arr, n);

    return 0;
}