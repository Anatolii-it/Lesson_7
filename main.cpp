#include <iostream>
#include "complex.h"
#include <conio.h>

using namespace std;

int main() {
    
    Complex num1 = { 3.0, 2.0 };
    Complex num2 = { 1.0, 4.0 };

    Complex result_sum = sum(num1, num2);
    Complex result_sub = subtract(num1, num2);
    Complex result_mul = multiply(num1, num2);
    Complex result_div = divide(num1, num2);

    cout << "     сума: " << result_sum.real << " + " << result_sum.imag << "i" << endl;
    cout << "  різниця: " << result_sub.real << " + " << result_sub.imag << "i" << endl;
    cout << " множення: " << result_mul.real << " + " << result_mul.imag << "i" << endl;
    cout << "  ділення: " << result_div.real << " + " << result_div.imag << "i" << endl;
    _getch();
    return 0;
}