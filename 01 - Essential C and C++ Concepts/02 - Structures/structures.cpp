#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
    char x;
};

int main() {
    struct Rectangle r1 = {10, 5};

    r1.length = 15;
    r1.breadth = 7;

    cout << r1.length << endl;
    cout << r1.breadth << endl;

    cout << "The area of the rectangle r1 is: " << r1.length * r1.length << endl;

    return 0;
}