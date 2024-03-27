#include <iostream>
#include <string>
#include "complex.h"
#include <Windows.h>
#include <conio.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int numCars = 4;
    Car cars[numCars];
    string color;

    setCarValues(cars[0], 4.5, 15.0, 2.0, 150, 18.0, "������", "�������");
    setCarValues(cars[1], 4.2, 12.5, 1.6, 120, 17.0, "ѳ���", "�������");
    setCarValues(cars[2], 4.8, 14.0, 2.5, 200, 19.0, "��������", "�������");
    setCarValues(cars[3], 4.2, 17.0, 1.5, 200, 13.0, "�����", "�������(2106)");

    displayCarValues(cars[2]);
    cout << "-----------------" << endl;
    cout << "������ ���� ��� ������ ��������� (������ ѳ��� �������� �����)" <<endl;
    cin >> color;
    cout << endl;
    searchCarByColor(cars, numCars, color);

    _getch();
    return 0;
}
