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
    struct Rectangle r = {0, 0};

    initialize(&r, 10, 6);
    int a = area(r);
    changeLength(&r, 12);

    cout << "Area is " << a << endl << "Length is " << r.length << endl;

    return 0;
} */

// Same above Program Cpp object orient style-
/* #include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;

    void initialize(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }

    void changeLength(int l) {
        length = l;
    }
};


int main() {
    struct Rectangle r = {0, 0};

    r.initialize(10, 6);
    int a = r.area();
    r.changeLength(12);

    cout << "Area is " << a << endl << "Length is " << r.length << endl;

    return 0;
} */

// Same program example using C++ object oriented style of programming using classes -
#include <iostream>
using namespace std;

class Rectangle { // in place of class you can also use struct, it will still work in cpp like above. In struct everything inside is public, whereas in class everything inside is private
// public: // you can write public or private here in the beginning to make evrything that follows public or private.
    private: int length;
    private: int breadth;

    public: Rectangle(int l, int b) { // This is a constructor function to initialize directly upon declaration and no need of separate initialize function
        length = l;
        breadth = b;
    };

    // Separate initialize function when you dont want to initialize in constructor above
    // public: void initialize(int l, int b) {
    //     length = l;
    //     breadth = b;
    // }

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
    cout << "Area is " << a << endl;
    r.changeLength(12);
    int a2  = r.area();
    cout << "New area is " << a2 << endl;

    return 0;
}