#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int a[n] = {2, 4, 6, 8, 10, 12};

    for (int x : a) {
        cout << x << " ";
    }

    return 0;
}