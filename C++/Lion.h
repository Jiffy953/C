#pragma once
#include<string>
#include<iostream>

using std::cout;
using std::endl;

class Lion
{
private:
    double weight;
    double height;
public:
    double setWeight(double w)
    {
        weight = w;
    }
    double setHeight(double h)
    {
        height = h;
    }
    double getWeight()
    {
        return weight;
    }
     double getHeight()
    {
        return height;
    }
    double toPrint()
    {
        cout << weight << height << endl;
    }
     void eat()
    {
        cout << "This type of lion only eats on Tuesdays, although it is unsure what that is";
    }
};


