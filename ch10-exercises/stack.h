//
//  stack.hpp
//  ch10-exercises
//
//  Created by Zack Fanning on 10/20/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#ifndef stack_h
#define stack_h

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
static double totalDollars(0.0);

typedef string customer;
class stack
{
private:
    string n_name;
    double n_payment;
    void total(double payment)
    {totalDollars += payment;}
public:
    // constructor
    stack(string name, double payment);
    // destructor
    ~stack();
    // member functions
    void remove();
};

#endif /* stack_h */
