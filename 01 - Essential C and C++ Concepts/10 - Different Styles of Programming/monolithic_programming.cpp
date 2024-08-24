// An example of Monolithic Programming

#include <iostream>

using namespace std;

int main() {
    int length = 0, breadth = 0; // Intializing variables is a good practice
    cout << "Enter Length and Breadth: ";
    cin >> length >> breadth; // Even if you're reading them afterwards

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    cout << "Area: " << area << ", Perimeter: " << perimeter << endl;

    return 0;
}