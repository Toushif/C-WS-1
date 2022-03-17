#include <iostream>
#include <stdlib.h>
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
    p->length = 22; // This is the shortcut syntax to the above same operation.
    cout << r.length << endl; // 22

    // Now the pointer p2 will point to the dynamically allocate memory in the heap for the object and do the same thing as above-
    struct Rectangle *p2;
    // p2 = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // in C lang
    p2 = new Rectangle;
    printf("%d", sizeof(p2));


    return 0;
}