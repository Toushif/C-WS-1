// Pointer is an address variable that is meant for storing address of data and not data itself. Pointers are used for indirectly accessing the data. 
// Pointers are used for accessing Heap memory. It is used to access all the resources that are external to the program - that is a hard disk file or keyboard, monitor, internet, etc - anythig exterenal to program.
// It is also used for passing the parameters.

#include <iostream>
#include <stdio.h> // when using C lang library
using namespace std;

int main() {
    int a = 10;
    int *p; // declaring a pointer
    p = &a; // initiazing a pointer - here we are storing the address of data variable a
    printf("%d", p); // value of the address of a stored in p
    printf("\n");
    printf("%d", *p); // de-referencing a pointer - getting the value of a using pointers

    // Allocate memory in Heap memory manually-
    // In C lang -
    int *x = (int *)malloc(5*sizeof(int)); 

    // In cpp -
    int *y = new int[5];
    
    return 0;
}