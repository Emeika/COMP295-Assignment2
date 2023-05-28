#include <iostream>
#include "IntComplex.h"
#include "IntComplex.cpp"
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Usage: program_name real1 imag1 real2 imag2" << endl;
    // check if correct number of arguments passed
    if (argc < 5)
    {
        cout << "Insufficient command line arguments!" << endl;
        cout << "Usage: program_name real1 imag1 real2 imag2" << endl;
        return 0;
    }
    // Parse command line arguments and create complex numbers as
    // input in argv[] list is in string format
    int real1 = atoi(argv[1]);
    int imag1 = atoi(argv[2]);
    int real2 = atoi(argv[3]);
    int imag2 = atoi(argv[4]);

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
