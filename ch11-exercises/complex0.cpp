//
//  complex0.cpp
//  ch11-exercises
//
//  Created by Zack Fanning on 10/21/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include "complex0.h"

// default constructor
complex::complex()
{
    n_real = 0.0;
    n_imaginary = 0.0;
}
// constructor
complex::complex(double real, double imaginary)
{
    n_real = real;
    n_imaginary = imaginary;
}
// destructor
complex::~complex()
{
    
}
// friend functions
ostream& operator<<(ostream& os, const complex& object)
{
    os << "(" << object.n_real << "," << object.n_imaginary << "i)";
    return os;
}
istream& operator>>(istream& is, complex& object)
{
    cout << "real: ";
    is >> object.n_real;
    cout << "imaginary: ";
    is >> object.n_imaginary;
    return is;
}
complex operator~(complex& object)
{
    complex object2(object.n_real, object.n_imaginary * -1);
    return object2;
}
complex operator+(complex& object, complex object2)
{
    complex object3(object.n_real + object2.n_real, object.n_imaginary + object2.n_imaginary);
    return object3;
}
complex operator-(complex& object, complex object2)
{
    complex object3(object.n_real - object2.n_real, object.n_imaginary - object2.n_imaginary);
    return object3;
}
complex operator*(complex& object, complex object2)
{
    complex object3(object.n_real * object2.n_real - object.n_imaginary * object2.n_imaginary,
    object.n_real * object2.n_imaginary + object.n_imaginary * object2.n_real);
    return object3;
}
complex operator*(int num, complex& object)
{
    complex object3(object.n_real * num, object.n_imaginary * num);
    return object3;
}













