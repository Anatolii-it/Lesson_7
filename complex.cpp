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
    cout << "�������������� ���������:" << endl;
    cout << "�������: " << car.length << " �" << endl;
    cout << "������: " << car.clearance << " ��" << endl;
    cout << "��'�� �������: " << car.engineVolume << " �" << endl;
    cout << "��������� �������: " << car.enginePower << " �.�." << endl;
    cout << "ĳ����� ����: " << car.wheelDiameter << " �����" << endl;
    cout << "����: " << car.color << endl;
    cout << "��� ������� �������: " << car.transmissionType << endl;
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
        cout << "��������� � ������ '" << targetColor << "' �� ��������." << endl;
    }
}
