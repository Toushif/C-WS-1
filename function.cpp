#include <iostream>
using namespace std;

int add(int a, int b) {
    int c = a + b;
    return c;
};

void swap1(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
};

void swap2(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
};

int main() {
    int x, y, z;
    x = 10;
    y = 5;
    z = add(x, y); // call by Value

    cout << z << endl;

    swap1(&x, &y); // call by Address
    cout << "x is " << x << endl << "y is " << y << endl;

    swap2(x, y); // call by Reference
    cout << "x is " << x << endl << "y is " << y << endl;

    return 0;
}