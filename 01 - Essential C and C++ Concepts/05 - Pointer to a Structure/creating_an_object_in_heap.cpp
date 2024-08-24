#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main() {
    Rectangle *p;
    // *C Style* Dynamically allocation of structure
    // p = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    // *C++ Style* Dynamically allocation of structure
    p = new Rectangle; 

    p->length = 15;
    p->breadth = 7;

    // Priniting the members using the pointer variable
    cout << p->length << endl;
    cout << p->breadth << endl;

    return 0;
}