#include "complex.h"
#include <iostream>

//#include "complex.cpp"

int main() {
    // ����������� ������������
    Rectangle myRect = { 10.0, 5.0, 0.0, 0.0 };

    // ���� ����������� ������������
    printRectangle(myRect);

    // ���������� ������������
    moveRectangle(myRect, 2.0, 3.0);
    std::cout << "\n����������� ���� ����������:" << std::endl;
    printRectangle(myRect);

    // ���� ������ ������������
    resizeRectangle(myRect, 8.0, 6.0);
    std::cout << "\n����������� ���� ���� ������:" << std::endl;
    printRectangle(myRect);

    return 0;
}