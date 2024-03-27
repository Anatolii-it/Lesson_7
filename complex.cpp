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
    cout << "Прямокутник: " << endl;
    cout << "Довжина: " << rect.length << endl;
    cout << "Ширина: " << rect.width << endl;
    cout << "Координати лівого верхнього кута: (" << rect.x << ", " << rect.y << ")" << endl;
}
