// Reference in cpp is an alias name to other variables. It is useful for parameter passing in functions.

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int &r =  a; // r is a reference and is indicated by '&' in front. The address of a and r is the SAME. Both the variables are pointing to the same address in memory, therefore same value.
    // Reference must always be initialized.
    cout << a << endl;
    r++;
    cout << r;

    return 0;
}