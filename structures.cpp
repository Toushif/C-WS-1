#include <iostream>
using namespace std;

// Definition of a structure
struct Rectangle {
    int length;
    int breadth;
};

// Structure of a Card - 6 bytes (assuming each variable takes 2 bytes each)
struct Card {
    int face;
    int shape;
    int color;
};
// Here above the face is the value of the card from 1 to 13 (A,2,3 .... 10,J,Q,K)
// Here above the shape is the shape of the card from 0 to 3 (clubs, spades, diamonds, hearts)
// Here above the color is the color of the card - either black (0) or red (1)

struct Triangle {
    int base;
    int hypotenuse;
    char x;
} t1, t2, t3; // You can declare global variables along with defining the structures - these global variables will e found throughout all the functions

int main() {
    // Declaration of a structure
    // struct Rectangle r;

    // Initialization of a structure
    struct Rectangle r = {10,6};
    printf("Area of the Rectangle is %d", r.length * r.breadth);
    printf("\n");

    // Declaring and initializing a single card
    struct Card c = {1,0,0}; // black club of value A

    // Declaring and initializing an array of cards
    struct Card deck[52] = {{1,0,0}, {2,0,0}}; //so on and so forth...

    t1 = {4,6};
    printf("%lu", sizeof(t1)); // output is 12 instead of 9 (4+4+1 (char takes 1 byte)) coz for easy accessibility purpose, the compiler allocates 4 bytes to char while defining structures. This is called PADDING. So inside structres padding of memory is done so that it is easy for the processor to read that structure at once.
    // lu stands for long unsigned, d is for int.

    return 0;
}
