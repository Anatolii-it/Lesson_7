#include "complex.h"
#include <iostream>

// ������� ��� ���������� ������������
void moveRectangle(Rectangle& rect, double dx, double dy) {
    rect.x += dx;
    rect.y += dy;
}

// ������� ��� ���� ������ ������������
void resizeRectangle(Rectangle& rect, double newWidth, double newHeight) {
    rect.width = newWidth;
    rect.height = newHeight;
}

// ������� ��� ����� ������������
void printRectangle(Rectangle rect) {
    std::cout << "�����������:" << std::endl;
    std::cout << "������: " << rect.width << std::endl;
    std::cout << "������: " << rect.height << std::endl;
    std::cout << "������� (x, y): (" << rect.x << ", " << rect.y << ")" << std::endl;
}