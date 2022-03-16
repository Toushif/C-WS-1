#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main() {
    struct Rectangle r = {10,5};
    struct Rectangle *p = &r; // this pointer will point to the address of variable 'r'. Here we are statically creating a pointer of size 4 (since all pointers are of same size unless allocated manually), but the Rectangle as we know is of size of 8 (4+4).
    r.length = 20; // modifying the length of r
    (*p).length = 20; // Here we are modifying the length of r using pointer. This is the syntax for de-referencing and assigning for pointer to structure
    p->length = 20; // This is the shortcut syntax to the above same operation.

    return 0;
}