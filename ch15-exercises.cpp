//
//  main.cpp
//  ch.15-exercises
//
//  Created by Zack Fanning on 11/3/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <valarray>
#include "stdlib.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

// user input for harmonic calculations
void userInput();

// harmonic calculator
double hmean(double a, double b);

int main(int argc, const char * argv[])
{
    userInput();
    return 0;
}

// user input for harmonic calculations
void userInput()
{
    double a, b, z;
    string s;
    cout << "Enter a pair of numbers: ";
    while (cin >> a >> b)
    {
        try
        {
            z = hmean(a, b);
        }
        catch (string s)
        {
            cout << s << "\n";
            cout << "Enter a new pair of numbers: ";
            continue;
        }
        cout << "Harmonic mean of " << a << " and " << b << " is " << z << endl;
        cout << "Enter a new pair of numbers <q to quit>: ";
    }
}

// harmonic calculator
double hmean(double a, double b)
{
    if (a == -b)
    {
        throw "bad hmean() arguments: a = -b is not allowed";
    }
    return 2.0 * a * b / (a + b);
}