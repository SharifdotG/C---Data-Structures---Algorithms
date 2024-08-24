#include <iostream>

using namespace std;

int main() {
    int *p;

    // *C Style* Initializing and creating a array to size 5 in heap
    // p = (int *)malloc(5 * sizeof(int));

    // *C++ Style* Initializing and creating a array to size 5 in heap
    p = new int[5];

    // Assigning array values
    p[0] = 10;
    p[1] = 15;
    p[2] = 14;
    p[3] = 21;
    p[4] = 31;

    cout << "Printing the elements of array created in heap using the pointer "
            "variable 'p': ";
    for (int i = 0; i < 5; i++) {
        cout << p[i] << " ";
    }
    cout << endl;

    // *C Style* Freeing the allocated memory in heap after usage
    // free(p);

    // *C++ Style* Freeing the allocated memory in heap after usage or
    // deallocating the memory in heap (important for large programs!)
    delete[] p;

    return 0;
}