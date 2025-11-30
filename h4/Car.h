#ifndef CAR_H
#define CAR_H

#include <string>
#include "Engine.h"
#include "Wheel.h"

using namespace std;

class Car {
private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    string model;
    string brand;

public:
    Car();
    Car(const string &brand, const string &model);

    void setEngine();
    void setWheels();

    string getModel() const;
    string getBrand() const;

    void setModel(const string &m);
    void setBrand(const string &b);

    void printDetails() const;
};

#endif
