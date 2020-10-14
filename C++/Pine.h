#pragma once
#include<string>
#include<iostream>

using std::cout;
using std::endl;

class Pine
{
private:
    int age;
    double height;
public:
    int setAge(int a)
    {
        age = a;
    }
    double setHeight(double h)
    {
        height = h;
    }
    int getAge()
    {
        return age;
    }
    double getHeight()
    {
        return height;
    }
    double toPrint()
    {
        cout << age << height;
    }
     void produceCone()
    {
        cout << "This rare tree only grows in regions with high levels of toxic waste";
    }
};


