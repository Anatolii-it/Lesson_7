#pragma once
#include <iostream>
#include "struct_namber.cpp"

using namespace std;

int main() {
    ComplexNumber c1(3, 2);
    ComplexNumber c2(1, -1);

    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;

    ComplexNumber sum = c1 + c2;
    cout << "Сума: " << sum << endl;

    ComplexNumber diff = c1 - c2;
    cout << "Різниця: " << diff << endl;

    ComplexNumber mul = c1 * c2;
    cout << "Множення: " << mul << endl;

    ComplexNumber div = c1 / c2;
    cout << "Ділення: " << div << endl;

    return 0;
}
