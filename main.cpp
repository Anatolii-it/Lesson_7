#include <iostream>
#include "complex.h"
#include <Windows.h>
#include <conio.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Complex num1 = { 3.0, 2.0 };
    Complex num2 = { 1.0, 4.0 };

    Complex result_sum = sum(num1, num2);
    Complex result_sub = subtract(num1, num2);
    Complex result_mul = multiply(num1, num2);
    Complex result_div = divide(num1, num2);

    cout << "     ����: " << result_sum.real << " + " << result_sum.imag << "i" << endl;
    cout << "  г�����: " << result_sub.real << " + " << result_sub.imag << "i" << endl;
    cout << " ��������: " << result_mul.real << " + " << result_mul.imag << "i" << endl;
    cout << "  ĳ�����: " << result_div.real << " + " << result_div.imag << "i" << endl;
    _getch();
    return 0;
}