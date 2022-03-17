// Another example of class and constructor in cpp -
#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;

    public:
        Rectangle() {
            length = 0;
            breadth = 0;
        }
        Rectangle(int l, int b) {
            length = l;
            breadth = b;
        }
        int area() {
            return length * breadth;
        }
        int perimeter() {
            return 2*(length + breadth);
        }
        void setLength(int l) {
            length = l;
        }
        void setBreadth(int b) {
            breadth = b;
        }
        int getLength() {
            return length;
        }
        int getBreadth() {
            return breadth;
        }
        ~Rectangle() { // Destuctor function at the end of the class is called to destroy the object from memory
            cout << "Rectangle object has been destroyed" << endl;
        }
};

int main() {
    Rectangle r(12, 8);

    cout << "Area is " << r.area() << endl << "Perimeter is " << r.perimeter() << endl;

    return 0;
}