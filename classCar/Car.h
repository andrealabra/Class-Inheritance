//
// Created by Andrea Labra Orozco on 10/4/23.
//

#ifndef CLASSCAR_CAR_H
#define CLASSCAR_CAR_H

#include <string>

using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    Car(const string& brand, const string& model, int year);
    void displayInfo();
};

class SUV : public Car {
private:
    bool isFourWheelDrive;

public:
    SUV(const string& brand, const string& model, int year, bool fourWheelDrive);
    void displayInfo();
};

class SportCar : public Car {
private:
    bool isConvertible;

public:
    SportCar(const string& brand, const string& model, int year, bool convertible);
    void displayInfo();
};


#endif //CLASSCAR_CAR_H
