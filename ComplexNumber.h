#pragma once

struct ComplexNumber {
    double real;
    double imag;

    ComplexNumber();
    ComplexNumber(double r, double i);

    // Оголошення арифметичних операцій
    ComplexNumber operator+(const ComplexNumber& other) const;
    ComplexNumber operator-(const ComplexNumber& other) const;
    ComplexNumber operator*(const ComplexNumber& other) const;
    ComplexNumber operator/(const ComplexNumber& other) const;
};

// Оголошення функції для виводу комплексного числа
std::ostream& operator<<(std::ostream& out, const ComplexNumber& c);

