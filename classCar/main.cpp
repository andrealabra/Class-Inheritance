#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    string brand, model;
    int year;
    bool isConvertible, isFourWheelDrive;

    cout << "Enter car information:" << endl;
    cout << "Brand: ";
    cin >> brand;

    cout << "Model: ";
    cin >> model;

    cout << "Year Make: ";
    cin >> year;

    Car car(brand, model, year); //class Car

    cout << "Is it a SUV (1 for Yes, 0 for No): ";
    cin >> isConvertible;

    if (isConvertible) {
        cout << "Is it Four-Wheel Drive (1 for Yes, 0 for No): ";
        cin >> isFourWheelDrive;
        SUV suv(brand, model, year, isFourWheelDrive); //Class suv
        suv.displayInfo();
    } else {
        cout << "Is it a Convertible (1 for Yes, 0 for No): ";
        cin >> isConvertible;
        SportCar sportCar(brand, model, year, isConvertible); //Class Sport Car
        sportCar.displayInfo();
    }


    return 0;
}

/*
 * Inheritance and classes are fundamental concepts in object-oriented programming
 * (OOP) that help organize and structure code in a more manageable and reusable way.
 *
 * Classes: Classes are like blueprints or templates for creating objects (instances).
 * They define the properties (data) and behaviors (functions/methods) that objects of that class will have.
 * In simpler terms,a class is like a recipe for creating objects with specific characteristics and actions.
 *
 * Inheritance: Inheritance is a mechanism in OOP that allows you to create a new class based on an existing class.
 * The new class inherits the properties and behaviors of the existing class, and you can also add new properties
 * or behaviors or override existing ones in the new class.
 * Inheritance is like building upon an existing blueprint or extending it.
 *
 * Classes provide a way to define the structure of objects, and inheritance allows you to reuse and extend
 * that structure to create new classes with shared characteristics and specialized features.
 *
 */
