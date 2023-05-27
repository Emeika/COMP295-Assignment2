#ifndef IntComplex_H
#define IntComplex_H

class IntComplex
{
private:
    int real, imag;

public:
    // Default Constructor
    IntComplex();

    // Parameterized constructor
    IntComplex(const int &, const int &);

    // Copy constructor
    IntComplex(const IntComplex &);

    // Destructor
    ~IntComplex();

    // Add operator
    IntComplex &operator+(const IntComplex &);

    // Subtract operator
    IntComplex &operator-(const IntComplex &);

    // Multiplication operator
    IntComplex &operator*(const IntComplex &);

    // Divide operator
    IntComplex &operator/(const IntComplex &);

    // Print the result
    void print();
};

#endif