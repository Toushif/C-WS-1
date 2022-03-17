// Program example in C lang style of coding using structures-
#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

void initialize(struct Rectangle *R, int l, int b) {
    R->length = l;
    R->breadth = b;
}

int area(struct Rectangle R) {
    return R.length * R.breadth;
}

void changeLength(struct Rectangle *R, int l) {
    R->length = l;
}

int main() {
    struct Rectangle r;

    initialize(&r, 10, 6);
    int a = area(r);
    changeLength(&r, 12);

    cout << "Area is " << a << endl << "Length is " << r.length << endl;

    return 0;
}