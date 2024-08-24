#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

void func(struct Rectangle *p) {
    p->length = 20; // The modification will stay beyond the function, will
                    // affect the main function

    cout << "Printing from the function: " << endl;
    cout << "Length: " << p->length << ", Breadth: " << p->breadth << endl;
}

int main() {
    Rectangle r = {10, 5};

    func(&r); // Call by address

    cout << "Printing from the main function: " << endl;
    cout << "Length: " << r.length << ", Breadth: " << r.breadth << endl;

    return 0;
}