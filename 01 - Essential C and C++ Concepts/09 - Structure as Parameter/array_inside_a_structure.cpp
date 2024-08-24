#include <iostream>

using namespace std;

struct Test {
    int arr[5];
    int n;
};

void func(struct Test t1) {
    t1.arr[0] = 10;
    t1.arr[1] = 9;

    cout << "Array elements (Inside the function): " << endl;
    for (int i = 0; i < t1.n; i++) {
        cout << t1.arr[i] << " ";
    }
    cout << endl;
}

int main() {
    struct Test t = {{2, 4, 6, 8, 10}, 5};

    func(t);

    cout << "Array elements (Inside the main function): " << endl;
    for (int i = 0; i < t.n; i++) {
        cout << t.arr[i] << " ";
    }
    cout << endl;

    return 0;
}