//
//  complex0.hpp
//  ch11-exercises
//
//  Created by Zack Fanning on 10/21/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#ifndef complex0_h
#define complex0_h

#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

class complex
{
private:
    double n_real;
    double n_imaginary;
public:
    // default constructor
    complex();
    // constructor
    complex(double real, double imaginary);
    // destructor
    ~complex();
    // friend functions
    friend ostream& operator<<(ostream& os, const complex& object);
    friend istream& operator>>(istream& is, complex& object);
    friend complex operator~(complex& object);
    friend complex operator+(complex& object, complex object2);
    friend complex operator-(complex& object, complex object2);
    friend complex operator*(complex& object, complex object2);
    friend complex operator*(int num, complex& object);
};




#endif /* complex0_h */
