// A template is an outer skeleton of a class which can be re-used multiple times for different data types. Just like generics in TypeScript.

// This is a normal cpp class of type int. 
/* #include <iostream>
using namespace std;

class Arithmetic {
    private:
        int l;
        int b;
    
    public:
        Arithmetic(int l, int b);
        int add();
        int sub();
        ~Arithmetic();
};

Arithmetic::Arithmetic(int l, int b) {
    this->l = l; // here we are using this->a to access the class member variable and avoid namespace collision, had it been different name in the parameters then we could have just used l instead of this->l
    this->b = b;
};

int Arithmetic::add() {
    return l + b;
    // return this->l + this->b; // this is also allowed
};

int Arithmetic::sub() {
    return l - b;
};

Arithmetic::~Arithmetic() {
    cout << "Arithmetic object has been destroyed successfully." << endl;
};

int main() {
    Arithmetic ar(10, 6);

    cout << ar.add() << endl;
    cout << ar.sub() << endl;

    return 0;
} */

// Now the same above code written in generic style using template classes so that we can re-use the Arithmetic class not just for int type but also for float, double, long, etc.
#include <iostream>
using namespace std;

template <class T>
class Arithmetic {
    private:
        T l;
        T b;
    
    public:
        Arithmetic(T l, T b);
        T add();
        T sub();
};