#include <iostream>
#include "IntComplex.h"
#include <cmath>
using namespace std;

IntComplex::IntComplex() : real(0), imag(0)
{
}

IntComplex::IntComplex(const int &real, const int &imag) : real(real), imag(imag) {}
// const makes sure that the arguments remain constant
// pass by reference

IntComplex::IntComplex(const IntComplex &c) : real(c.real), imag(c.imag) {}

IntComplex::~IntComplex() {}

// Add operations
IntComplex &IntComplex::operator+(const IntComplex &c) // define const objects - operator wont modify the objects
{
    IntComplex *result = new IntComplex; // Create a new dynamically allocated IntComplex object to store the result
    result->real = real + c.real;        // Add the real parts of the complex numbers
    result->imag = imag + c.imag;        // Add the imaginary parts
    return *result;                      // Return the result by dereferencing the pointer
}

IntComplex &IntComplex::operator-(const IntComplex &c)
{
    IntComplex *result = new IntComplex;
    result->real = real - c.real; // Subtract the real parts
    result->imag = imag - c.imag; // Subtract the imaginary parts
    return *result;
}

IntComplex &IntComplex::operator*(const IntComplex &c)
{
    IntComplex *result = new IntComplex;
    result->real = (real * c.real) - (imag * c.imag); // Multiply and subtract the cross-products of complex numbers
    result->imag = (real * c.imag) + (imag * c.real); // Multiply and add the product of real and imaginary parts
    return *result;
}

IntComplex &IntComplex::operator/(const IntComplex &c)
{
    if (c.real == 0 && c.imag == 0)
    {
        cout << "Division by zero is not possible." << endl; // Handle for division by zero
        return *this;
    }

    IntComplex *result = new IntComplex;

    result->real = (real * c.real + imag * c.imag) / (c.real * c.real + c.imag * c.imag);
    result->imag = (imag * c.real - real * c.imag) / (c.real * c.real + c.imag * c.imag);
    return *result; // Return the result by dereferencing the pointer
}

void IntComplex::print()
{
    if (imag < 0)
    {
        cout << real << " - " << abs(imag) << "i" << endl;
    }
    else
    {
        cout << real << " + " << imag << "i" << endl;
    }
}
