#ifndef FloatComplex_H
#define FloatComplex_H
#include "IntComplex.h"

class FloatComplex : public IntComplex
{
private:
    float real, imag;

public:
    // Constructors
    FloatComplex();

    FloatComplex(const float &, const float &);

    FloatComplex(const FloatComplex &);

    ~FloatComplex();

    // Operator overload functions
    FloatComplex &operator+(const FloatComplex &);

    FloatComplex &operator-(const FloatComplex &);

    FloatComplex &operator*(const FloatComplex &);

    FloatComplex &operator/(const FloatComplex &);

    // Inherit the print function from the base class
    // using IntComplex::print;
    void print();
};

#endif
