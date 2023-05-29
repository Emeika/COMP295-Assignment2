#include <iostream>
#include "IntComplex.h"
#include "IntComplex.cpp"
#include "FloatComplex.h"
#include "FloatComplex.cpp"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Usage: program_name real1 imag1 real2 imag2" << endl;
    // check if correct number of arguments passed
    if (argc < 9)
    {
        cout << "Insufficient command line arguments!" << endl;
        cout << "Usage: ./main intReal1 intImag1 intReal2 intImag2 fReal1 fImag1 fReal2 fImag2 " << endl;
        return 0;
    }
    // Parse command line arguments and create complex numbers as
    // input in argv[] list is in string format
    // argv[0] is the program name
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
    cout << "\nInteger Complex results: " << endl;
    cout << "Sum: ";
    sum.print();
    cout << "Difference: ";
    diff.print();
    cout << "Product: ";
    prod.print();
    cout << "Quotient: ";
    quotient.print();

    // Create FloatComplex numbers using user input
    float real3 = atof(argv[5]);
    float imag3 = atof(argv[6]);
    float real4 = atof(argv[7]);
    float imag4 = atof(argv[8]);

    // Create FloatComplex numbers objects using user input
    FloatComplex f1(real3, imag3);
    FloatComplex f2(real4, imag4);

    // Perform operations for FloatComplex numbers
    FloatComplex fSum = f1 + f2;
    FloatComplex fDiff = f1 - f2;
    FloatComplex fProd = f1 * f2;
    FloatComplex fQuotient = f1 / f2;

    // Print the results for FloatComplex numbers
    cout << "\nFloatComplex Results:" << endl;
    cout << "Sum: ";
    fSum.print();
    cout << "Difference: ";
    fDiff.print();
    cout << "Product: ";
    fProd.print();
    cout << "Quotient: ";
    fQuotient.print();

    // Deallocation and destructor
    // ask sir whether this is needed ? ////////////////
    delete &sum;
    delete &diff;
    delete &prod;
    delete &quotient;

    return 0;
}
