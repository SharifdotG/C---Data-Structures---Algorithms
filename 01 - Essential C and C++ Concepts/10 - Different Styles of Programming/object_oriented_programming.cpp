// An example of Object Oriented style of programming

#include <iostream>

using namespace std;

class Rectangle {
  private:
    int length;
    int breadth;

  public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    int area(Rectangle r) { return length * breadth; }

    int perimeter(Rectangle r) { return 2 * (length + breadth); }
};

int main() {
    int l, b;
    cout << "Enter Length and Breadth: ";
    cin >> l >> b;

    Rectangle r(l, b);

    int a = r.area(r);
    int p = r.perimeter(r);

    cout << "Area: " << a << ", Perimeter: " << p << endl;

    return 0;
}