#include "complex.h"
#include <iostream>
using namespace std;

void moveRectangle(Rectangle& rect, float deltaX, float deltaY) {
    rect.x += deltaX;
    rect.y += deltaY;
}

void resizeRectangle(Rectangle& rect, float newLength, float newWidth) {
    rect.length = newLength;
    rect.width = newWidth;
}

void printRectangle(const Rectangle& rect) {
    cout << "�����������: " << endl;
    cout << "�������: " << rect.length << endl;
    cout << "������: " << rect.width << endl;
    cout << "���������� ����� ��������� ����: (" << rect.x << ", " << rect.y << ")" << endl;
}
