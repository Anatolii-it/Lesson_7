#include "complex.h"
#include <iostream>

//#include "complex.cpp"

int main() {
    // Ініціалізація прямокутника
    Rectangle myRect = { 10.0, 5.0, 0.0, 0.0 };

    // Друк початкового прямокутника
    printRectangle(myRect);

    // Переміщення прямокутника
    moveRectangle(myRect, 2.0, 3.0);
    std::cout << "\nПрямокутник після переміщення:" << std::endl;
    printRectangle(myRect);

    // Зміна розміру прямокутника
    resizeRectangle(myRect, 8.0, 6.0);
    std::cout << "\nПрямокутник після зміни розміру:" << std::endl;
    printRectangle(myRect);

    return 0;
}