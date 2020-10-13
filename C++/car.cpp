#include "car.h"

void Car::printCarInfo() const
{
    cout << "Car make is: " << Car::getMake() << endl;
    cout << "Car model is: " << Car::getModel() << endl;
    cout << "Car max speed is: " << Car::getMaxSpeed() << endl;
}

int main()
{
    Car car;
    car.printCarInfo();
    return 0;
}