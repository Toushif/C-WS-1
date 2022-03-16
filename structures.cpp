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

int main() {
    // Declaration of a structure
    // struct Rectangle r;

    // Initialization of a structure
    struct Rectangle r = {10,6};
    printf("Area of the Rectangle is %d", r.length * r.breadth);

    // Declaring and initializing a single card
    struct Card c = {1,0,0}; // black club of value A

    // Declaring and initializing an array of cards
    struct Card deck[52] = {{1,0,0}, {2,0,0}} //so on and so forth...

    return 0;
}