#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main() {
    Rectangle r = {10, 5};

    // Priniting the members using the normal variable
    cout << r.length << endl;
    cout << r.breadth << endl;

    Rectangle *p = &r;
    // Priniting the members using the pointer variable
    cout << p->length << endl;
    cout << p->breadth << endl;

    return 0;
}