#pragma once

struct ComplexNumber {
    double real;
    double imag;

    ComplexNumber();
    ComplexNumber(double r, double i);

    // ���������� ������������ ��������
    ComplexNumber operator+(const ComplexNumber& other) const;
    ComplexNumber operator-(const ComplexNumber& other) const;
    ComplexNumber operator*(const ComplexNumber& other) const;
    ComplexNumber operator/(const ComplexNumber& other) const;
};

// ���������� ������� ��� ������ ������������ �����
std::ostream& operator<<(std::ostream& out, const ComplexNumber& c);

