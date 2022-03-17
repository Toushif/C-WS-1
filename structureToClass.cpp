// Program example in C lang style of coding using structures-
/* #include <iostream>
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
} */

// Same program example using C++ object oriented style of programming using classes -
#include <iostream>
using namespace std;

class Rectangle {
    private: int length;
    private: int breadth;

    public: Rectangle(int l, int b) {
        length = l;
        breadth = b;
    };

    public: int area() {
        return length * breadth;
    };

    public: void changeLength(int l) {
        length = l;
    };
};

int main() {
    Rectangle r(10, 6);
    int a  = r.area();
    r.changeLength(12);

    cout << "Area is " << a << endl;

    return 0;
}