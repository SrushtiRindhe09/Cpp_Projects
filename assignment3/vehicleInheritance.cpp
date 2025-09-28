/*Create a class Book to manage book records in a library. The class should have the following private data members: bookID (int). title (string). price(float)
Implement the following
a) Default constructor to initialize default values.
b) Parameterized constructor to initialize with user-provided values.
c) Destructor to display a message when the object is destroyed.
*/


#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    string model;
    int year;
public:
    
    Vehicle(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
        cout << "Vehicle constructor is called" << endl;
    }

    virtual void displayInfo() {
        cout << "\nBrand Name: " << brand;
        cout << "\nModel Name: " << model;
        cout << "\nYear: " << year;
    }
    
    virtual ~Vehicle() {
        cout << "Vehicle destructor is called" << endl;
    }
};


class Car : public Vehicle {
protected:
    string fuelType;
public:
    
    Car(string b, string m, int y, string f) : Vehicle(b, m, y) { 
        fuelType = f;
        cout << "Car constructor is called" << endl;
    }

    void displayInfo() override {
        Vehicle::displayInfo(); 
        cout << "\nFuel Type: " << fuelType << endl;
    }

    ~Car() {
        cout << "Car destructor is called" << endl;
    }
};


class Bike : public Vehicle {
private:
    string engineCapacity;
public:
   
    Bike(string b, string m, int y, string ec) : Vehicle(b, m, y) { 
        engineCapacity = ec;
        cout << "Bike constructor is called" << endl;
    }

    void displayInfo() override {
        Vehicle::displayInfo();
        cout << "\nEngine Capacity: " << engineCapacity << endl;
    }

    ~Bike() {
        cout << "Bike destructor is called" << endl;
    }
};


class ElectricCar : public Car {
private:
    string batteryLife;
public:
   
    ElectricCar(string b, string m, int y, string f, string bl) : Car(b, m, y, f) 
    {
        batteryLife = bl;
        cout << "ElectricCar constructor is called" << endl;
    }

    void displayInfo() override {
        Car::displayInfo(); 
        cout << "Battery Life: " << batteryLife << " hours" << endl;
    }

    ~ElectricCar() {
        cout << "ElectricCar destructor is called" << endl;
    }
};


int main() {
    cout << "\n.....Car Info.....\n";
    Car c1("Toyota", "Fortuner", 2022, "Diesel");
    c1.displayInfo();

    cout << "\n.....Bike Info.....\n";
    Bike b1("Yamaha", "R15", 2023, "155cc");
    b1.displayInfo();

    cout << "\n.....Electric Car Info.....\n";
    ElectricCar e1("Tesla", "Model S", 2024, "Electric", "20");
    e1.displayInfo();

    return 0;
}

/*
-----output-----

.....Car Info.....
Vehicle constructor is called
Car constructor is called

Brand Name: Toyota
Model Name: Fortuner
Year: 2022
Fuel Type: Diesel

.....Bike Info.....
Vehicle constructor is called
Bike constructor is called

Brand Name: Yamaha
Model Name: R15
Year: 2023
Engine Capacity: 155cc

.....Electric Car Info.....
Vehicle constructor is called
Car constructor is called
ElectricCar constructor is called

Brand Name: Tesla
Model Name: Model S
Year: 2024
Fuel Type: Electric
Battery Life: 20 hours
ElectricCar destructor is called
Car destructor is called
Vehicle destructor is called
Bike destructor is called
Vehicle destructor is called
Car destructor is called
Vehicle destructor is called
*/