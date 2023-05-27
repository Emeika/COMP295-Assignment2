#include <iostream>
#include "IntComplex.h"

using namespace std;

int main()
{
    int real1, imag1, real2, imag2;

    // Get input from the user
    cout << "First Complex Number: " << endl;
    cout << "Enter the real part: ";
    cin >> real1;
    cout << "Enter the imaginary part: ";
    cin >> imag1;
    cout << "Second Complex Number: " << endl;
    cout << "Enter the real part: ";
    cin >> real2;
    cout << "Enter the imaginary part: ";
    cin >> imag2;

    // Create complex numbers using user input
    IntComplex c1(real1, imag1);
    IntComplex c2(real2, imag2);

    // Perform operations
    IntComplex sum = c1 + c2;
    IntComplex diff = c1 - c2;
    IntComplex prod = c1 * c2;
    IntComplex quotient = c1 / c2;

    // Print the results
    cout << "Sum: ";
    sum.print();
    cout << "Difference: ";
    diff.print();
    cout << "Product: ";
    prod.print();
    cout << "Quotient: ";
    quotient.print();

    // Deallocation and destructor
    delete &sum;
    delete &diff;
    delete &prod;
    delete &quotient;

    return 0;
}
