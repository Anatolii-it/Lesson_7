
//#ifndef COMPLEX.H
//#define COMPLEX.H
struct Rectangle {
    float length;
    float width;
    float x;
    float y;
};

void moveRectangle(Rectangle& rect, float deltaX, float deltaY);
void resizeRectangle(Rectangle& rect, float newLength, float newWidth);
void printRectangle(const Rectangle& rect);
//#endif