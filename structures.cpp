#include <iostream>
using namespace std;

// Definition of a structure
struct Rectangle {
    int length;
    int breadth;
};

int main() {
    // Declaration of a structure
    // struct Rectangle r;

    // Initialization of a structure
    struct Rectangle r = {10,6};
    printf("Area of the Rectangle is %d", r.length * r.breadth);

    return 0;
}