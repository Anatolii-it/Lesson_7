#ifndef COMPLEX_H
#define COMPLEX_H

#include <string>
using namespace std;

struct Car {
    double length;
    double clearance;
    double engineVolume;
    int enginePower;
    double wheelDiameter;
    string color;
    string transmissionType;
};
void setCarValues(Car& car, double len, double clr, double vol, int power, double wheelDia, string col, string trans);
void displayCarValues(Car car);
void searchCarByColor(Car carArray[], int size, string targetColor);
#endif
