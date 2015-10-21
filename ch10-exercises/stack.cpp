//
//  stack.cpp
//  ch10-exercises
//
//  Created by Zack Fanning on 10/20/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include "stack.h"
// constructor
stack::stack(string name, double payment)
{
    n_name = name;
    n_payment = payment;
}
// destructor
stack::~stack()
{
    
}
// member functions
void stack::remove()
{
    total(n_payment);
    std::cout << "The total payment is: " << totalDollars << endl;
    stack::~stack();
}