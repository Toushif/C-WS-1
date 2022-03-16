// Pointer is an address variable that is meant for storing address of data and not data itself. Pointers are used for indirectly accessing the data. 
// Pointers are used for accessing Heap memory. It is used to access all the resources that are external to the program - that is a hard disk file or keyboard, monitor, internet, etc - anythig exterenal to program.
// It is also used for passing the parameters.

#include <iostream>
#include <stdio.h> // when using C lang library
#include <stdlib.h> // For using C lang malloc function
using namespace std;

int main() {
    int a = 10;
    int *p; // declaring a pointer
    p = &a; // initiazing a pointer - here we are storing the address of data variable a
    printf("%d", p); // value of the address of a stored in p
    printf("\n");
    printf("%d", &a); // value of the address of a same as above
    printf("\n");
    printf("%d", *p); // de-referencing a pointer - getting the value of 'a' using pointers

    // Allocate memory in Heap memory manually-
    // In C lang -
    int *x = (int *)malloc(5*sizeof(int)); 

    // In cpp -
    int *y = new int[5];

    int A[5] = {1,2,3,4,5};
    int *b;
    b = A; // Here when we are initializing the pointer b to store the address of the array A, then we do not need '&', coz array themselves point to the first variable in address
    //b = &A[2] // If we want to store individual element address in an array
    cout<<endl;
    for(int i = 0; i < 5; i++)
    cout << b[i] << endl; //Here also we dont need to use *b while de-referencing in the case of an array

    // Using pointers to create array in heap -
    int *c = new int[5];
    c[0]=2;
    c[1]=4;
    c[2]=6;
    c[3]=8;
    for(int i = 0; i < 5; i++)
    cout << c[i] << endl;
    
    return 0;
}