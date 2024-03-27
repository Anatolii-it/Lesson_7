
#include "Namber.h"

struct ComplexNumber {
    double real;
    double imag;

    ComplexNumber() : real(0.0), imag(0.0) {}

    ComplexNumber(double r, double i) : real(r), imag(i) {}

    ComplexNumber operator+(const ComplexNumber& other) const {
        return ComplexNumber(real + other.real, imag + other.imag);
    }

  
    ComplexNumber operator-(const ComplexNumber& other) const {
        return ComplexNumber(real - other.real, imag - other.imag);
    }

    
    ComplexNumber operator*(const ComplexNumber& other) const {
        return ComplexNumber(real * other.real - imag * other.imag,
            real * other.imag + imag * other.real);
    }

    ComplexNumber operator/(const ComplexNumber& other) const {
        double divisor = other.real * other.real + other.imag * other.imag;
        return ComplexNumber((real * other.real + imag * other.imag) / divisor,
            (imag * other.real - real * other.imag) / divisor);
    }
  
    friend ostream& operator<<(ostream& out, const ComplexNumber& c) {
        if (c.imag >= 0)
            out << c.real << " + " << c.imag << "i";
        else
            out << c.real << " - " << -c.imag << "i";
        return out;
    }
};