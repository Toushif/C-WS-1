#include <iostream>
using namespace std;

int main() {
    string first_name, last_name;

    // cout << "Enter your first name-";
    // cin >> first_name;
    // cout << "Enter your last name-";
    // cin >> last_name;

    // cout << "Your full name is " << first_name + " " + last_name;

    int A[5];
    A[1] = 12;
    A[2] = 29;

    cout << sizeof(A) << endl;
    cout << "A[0] is " << A[0] << endl;
    cout << "A[2] is " << A[2] << endl;
    printf("%d\n", A[1]); //C code will also work in a C++ code

    return 0;
}