//
// Created by Andrea Labra Orozco on 10/4/23.
//

#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(const string& brand, const string& model, int year) //contructor
: brand(brand), model(model), year(year) {}

void Car::displayInfo() {
    cout << "Brand: " << brand << std::endl;
    cout << "Model: " << model << std::endl;
    cout << "Year: " << year << std::endl;
}


SUV::SUV(const string& brand, const string& model, int year, bool fourWheelDrive)
: Car(brand, model, year), isFourWheelDrive(fourWheelDrive) {} //constructor

void SUV::displayInfo() {
    Car::displayInfo();
    cout << "Four-Wheel Drive: " << (isFourWheelDrive ? "Yes" : "No") << endl;
}


//getter and setter for sport car
SportCar::SportCar(const std::string& brand, const string& model, int year, bool convertible)
: Car(brand, model, year), isConvertible(convertible) {} //constructor

void SportCar::displayInfo() {
    Car::displayInfo();
    cout << "Convertible: " << (isConvertible ? "Yes" : "No") << endl;
}
