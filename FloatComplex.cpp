#include <iostream>
#include "FloatComplex.h"

using namespace std;

// Constructors
// const makes sure that the arguments remain constant
// pass by reference
//  parameter is a reference to an object rather than a copy of the object

FloatComplex::FloatComplex() : real(0.0f), imag(0.0f) {}

FloatComplex::FloatComplex(const float &real, const float &imag) : real(real), imag(imag) {}

FloatComplex::FloatComplex(const FloatComplex &c) : real(c.real), imag(c.imag) {}

FloatComplex::~FloatComplex() {}

// Operations

// overloaded operator returns a reference to an object.
// define const objects - operator wont modify the objects
FloatComplex &FloatComplex::operator+(const FloatComplex &c)
{
    FloatComplex *result = new FloatComplex; // dynamically creates a new object of type FloatComplex and returns a pointer to the allocated memory.
    result->real = real + c.real;            // result pointer points to the newly allocated object.
    result->imag = imag + c.imag;            // Add the imaginary parts
    return *result;                          // returning a reference to the dynamically allocated object.
}

FloatComplex &FloatComplex::operator-(const FloatComplex &c)
{
    FloatComplex *result = new FloatComplex;
    result->real = real - c.real; // Subtract the real parts
    result->imag = imag - c.imag; // Subtract the imaginary parts
    return *result;
}

FloatComplex &FloatComplex::operator*(const FloatComplex &c)
{
    FloatComplex *result = new FloatComplex;
    result->real = (real * c.real) - (imag * c.imag); // Multiply and subtract the cross-products of complex numbers
    result->imag = (real * c.imag) + (imag * c.real); // Multiply and add the product of real and imaginary parts
    return *result;
}

FloatComplex &FloatComplex::operator/(const FloatComplex &c)
{
    if (c.real == 0 && c.imag == 0)
    {
        cout << "Division by zero is not possible." << endl; // Handle for division by zero
        return *this;
    }

    FloatComplex *result = new FloatComplex;

    result->real = (real * c.real + imag * c.imag) / (c.real * c.real + c.imag * c.imag);
    result->imag = (imag * c.real - real * c.imag) / (c.real * c.real + c.imag * c.imag);
    return *result; // Return the result by dereferencing the pointer
}
