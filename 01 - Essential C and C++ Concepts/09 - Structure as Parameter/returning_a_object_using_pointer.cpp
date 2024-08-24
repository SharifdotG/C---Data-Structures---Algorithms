#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

struct Rectangle *func() {
    struct Rectangle *p;

    // p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    // *C Style* Creating an object on heap
    p = new Rectangle; // *C++ Style* Creating an object on heap

    p->length = 15;
    p->breadth = 7;

    return p;
}

int main() {
    struct Rectangle *ptr = func();

    cout << "Length: " << ptr->length << ", Breadth: " << ptr->breadth << endl;

    return 0;
}