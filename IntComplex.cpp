#include <iostream>
#include "IntComplex.h"
using namespace std;

IntComplex::IntComplex() : real(0), imag(0) {}

IntComplex::IntComplex(const int &real, const int &imag) : real(real), imag(imag) {}

IntComplex::IntComplex(const IntComplex &c) : real(c.real), imag(c.imag) {}

IntComplex::~IntComplex() {}

// Add operations
IntComplex &IntComplex ::operator+(const IntComplex &c)
{
    IntComplex result;
    result.real = real + c.real;
    result.imag = real + c.imag;
    return result;
}

IntComplex &IntComplex ::operator-(const IntComplex &c)
{
    IntComplex result;
    result.real = real - c.real;
    result.imag = real - c.imag;
    return result;
}

IntComplex &IntComplex ::operator*(const IntComplex &c)
{
    IntComplex result;
    result.real = (real * c.real) - (imag * c.imag);
    result.imag = (real * c.imag) + (imag * c.real);
    return result;
}