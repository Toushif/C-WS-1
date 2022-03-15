#include <iostream>
using namespace std;

int main() {
    int A[5];
    A[1] = 12;
    A[2] = 29;


    cout << sizeof(A) << endl; //sizeof is used to determine the space the array has consumed in memeory, so above int A[5] has 5 integers, so each integer will occupy 4 bytes, so total size -> 4*5 = 20 bytes.
    cout << "A[0] is " << A[0] << endl;
    cout << "A[2] is " << A[2] << endl;
    printf("%d\n", A[1]); //C code will also work in a C++ code

    int B[10] = {2,7,4,8,6}; // Here array B is initialized as an array of size 10 but only has 5 values, so the rest of the values from index 5 to 9 will be 0 by default. If an array is not initiaized at all then by default the values will be random or garbage values.

    // For loops in cpp-
    for (int i = 0; i < sizeof(B)/sizeof(B[0]); i++)
    {
        cout << B[i] << endl;
    }
    cout << endl;
    // For-each loops in cpp-
    for(int i:A) {
        cout << i << endl;
    }
    cout << endl;

    // Dynamic array size input -
    int n;
    cout << "Enter the size of the array-" << endl;
    cin >> n;
    int C[n] = {1,2,3}; // In most compiler this initialization migth not work (only declaration), so in that case we need to initialize individually using indeces.
    for(int i:C) {
        cout << i << endl;
    }

    return 0;
}