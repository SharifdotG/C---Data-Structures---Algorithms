// An example of Monodular Programming
// It breaks the main functions into smaller functions

#include <iostream>

using namespace std;

int area(int length, int breadth) { return length * breadth; }

int perimeter(int length, int breadth) { return 2 * (length + breadth); }

int main() {
    int length = 0, breadth = 0; // Intializing variables is a good practice
    cout << "Enter Length and Breadth: ";
    cin >> length >> breadth; // Even if you're reading them afterwards

    int a = area(length, breadth);
    int p = perimeter(length, breadth);

    cout << "Area: " << a << ", Perimeter: " << p << endl;

    return 0;
}