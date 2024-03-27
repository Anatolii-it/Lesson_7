#include "complex.h"
#include <iostream>
using namespace std;

void setCarValues(Car& car, double len, double clr, double vol, int power, double wheelDia, string col, string trans) {
    car.length = len;
    car.clearance = clr;
    car.engineVolume = vol;
    car.enginePower = power;
    car.wheelDiameter = wheelDia;
    car.color = col;
    car.transmissionType = trans;
}

void displayCarValues(Car car) {
    cout << "Характеристики автомобіля:" << endl;
    cout << "Довжина: " << car.length << " м" << endl;
    cout << "Кліренс: " << car.clearance << " см" << endl;
    cout << "Об'єм двигуна: " << car.engineVolume << " л" << endl;
    cout << "Потужність двигуна: " << car.enginePower << " к.с." << endl;
    cout << "Діаметр коліс: " << car.wheelDiameter << " дюймів" << endl;
    cout << "Колір: " << car.color << endl;
    cout << "Тип коробки передач: " << car.transmissionType << endl;
}

void searchCarByColor(Car carArray[], int size, string targetColor) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (carArray[i].color == targetColor) {
            displayCarValues(carArray[i]);
            found = true;
        }
    }
    if (!found) {
        cout << "Автомобіль з коліром '" << targetColor << "' не знайдено." << endl;
    }
}
