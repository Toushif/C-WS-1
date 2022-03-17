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

void swap2(int &a, int &b) {
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

    return 0;
}