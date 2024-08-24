#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

void func(struct Rectangle r1) {
    r1.length = 20; // The modification will stay within the function, won't
                    // affect the main function

    cout << "Printing from the function: " << endl;
    cout << "Length: " << r1.length << ", Breadth: " << r1.breadth << endl;
}

int main() {
    Rectangle r = {10, 5};

    func(r); // Call by value

    cout << "Printing from the main function: " << endl;
    cout << "Length: " << r.length << ", Breadth: " << r.breadth << endl;

    return 0;
}