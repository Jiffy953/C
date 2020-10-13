#pragma once
#include<string>
#include<iostream>

using std::cout;
using std::endl;

class Car
{
    std::string make;
    std::string model;
    unsigned short maxSpeed;

public:
    std::string getMake() const {return make;};
    std::string getModel() const {return model;};
    unsigned short getMaxSpeed() const {return maxSpeed;};
    void printCarInfo() const;
};