#ifndef COMPLEX_H
#define COMPLEX_H

struct Complex {
    double real;
    double imag;
};

Complex sum(Complex c1, Complex c2);
Complex subtract(Complex c1, Complex c2);
Complex multiply(Complex c1, Complex c2);
Complex divide(Complex c1, Complex c2);

#endif