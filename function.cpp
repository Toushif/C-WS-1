#include <iostream>
using namespace std;

int add(int a, int b) {
    int c = a + b;
    return c;
};

void swap1(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
};

void swap2(int &a, int &b) { // In call by reference the function called (swap2) isnt a separate block of code, but it is treated like an inline code as if this function is pasted in the main function from where it is called, coz in call by reference the arguments in the called function does not create separate memory in heap, it points to the same address like the variable it is assigned to. So, calling a function by reference puts the function back to the main function from where it is called, and that way the this swap2 fucntion has access to the varible without creating a new one. So anything modified in this function will alter the original data coz it's the same data variable as discussed. 
    int temp = a;
    a = b;
    b = temp;
};

void fun1(int A[]) { // When you pass an array in a function, then the array is passed as a pointer pointing to the first elements's address in memory, so the size of array info is lost. 
    cout << sizeof(A)/sizeof(int) << endl; // This will throw warning for the above reason.
}

void fun2(int A[], int n) { // You also cannot use for each loop inside this function on 'A' coz A is a pointer and not an array. You have to use traditional for loop.
    for(int i = 0; i < n; i++) {
        cout << A[i] << endl;
    }
}

int * fun3(int size) { //  In this fucntion we are just passing the size of the array. The array is created inside this function and it returns a pointer ot the array
    int *p;
    p = new int[size];

    for (int i = 1; i <= size; i++)
    {
        p[i-1] = i * 2;
    }
    
    return p;
}

struct Rectangle {
    int length;
    int breadth;
};

int area(struct Rectangle R) { // Passing structures in functions as value
    return R.length * R.breadth;
}

int area2(struct Rectangle &R) { // Passing structures in functions as call by Reference
// But here as we know by call by reference, any variable modified will also change the original data
    R.length++;
    return R.length * R.breadth;
}

void changeLength(struct Rectangle *R, int l) { // Passing structures in functions as call by Address
    R->length = l;
}

struct Rectangle * fun4() { // a function of type Rectangle structure/object
    struct Rectangle *p;
    p = new Rectangle;

    p->length = 15;
    p->breadth = 8;

    return p;
}

int main() {
    int x, y, z;
    x = 10;
    y = 5;
    z = add(x, y); // call by Value

    cout << z << endl;

    swap1(&x, &y); // call by Address
    cout << "x is " << x << endl << "y is " << y << endl;

    swap2(x, y); // call by Reference
    cout << "x is " << x << endl << "y is " << y << endl;

    // Passing Array as parameters
    printf("Passing Arrays as parameters -\n");
    int A1[] = {2,4,6,8,10}, n = 5;
    fun1(A1);
    fun2(A1, n);

    cout << sizeof(A1)/sizeof(int) << endl;

    for(int x:A1) {
        cout << x << endl;
    }

    int *ptr, size = 7;
    ptr = fun3(size);

    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << endl;
    }

    // Passing strutures as parameters -
    printf("Passing strutures as parameters -\n");
    struct Rectangle r = {10, 5};
    int a1 = area(r);
    cout << a1 << endl;
    int a2 = area2(r);
    cout << a2 << endl;

    int newLength = 20;
    changeLength(&r, newLength); // Modifies the length of the Rectangle length by passing structure as call by address
    int a3 = area(r);
    cout << a3 << endl;

    struct Rectangle *ptr2 = fun4();
    cout << ptr2->length << endl;

    return 0;
}