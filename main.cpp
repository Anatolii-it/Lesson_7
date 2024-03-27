#include "complex.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main() {
    Rectangle rect = {10.0, 5.0, 0.0, 0.0};
    printRectangle(rect);
    cout << "-----------------" << endl;
    moveRectangle(rect, 2.0, 3.0);
    printRectangle(rect);
    cout << "-----------------" << endl;
    resizeRectangle(rect, 7.0, 4.0);
    printRectangle(rect);
    cout << "-----------------" << endl;

    return 0;
}
