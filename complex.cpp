#include "complex.h"
#include <iostream>

// Функція для переміщення прямокутника
void moveRectangle(Rectangle& rect, double dx, double dy) {
    rect.x += dx;
    rect.y += dy;
}

// Функція для зміни розміру прямокутника
void resizeRectangle(Rectangle& rect, double newWidth, double newHeight) {
    rect.width = newWidth;
    rect.height = newHeight;
}

// Функція для друку прямокутника
void printRectangle(Rectangle rect) {
    std::cout << "Прямокутник:" << std::endl;
    std::cout << "Ширина: " << rect.width << std::endl;
    std::cout << "Висота: " << rect.height << std::endl;
    std::cout << "Позиція (x, y): (" << rect.x << ", " << rect.y << ")" << std::endl;
}