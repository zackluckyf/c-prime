//
//  move.cpp
//  ch10-exercises
//
//  Created by Zack Fanning on 10/20/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include "move.h"

// constructor
Move::Move(double a, double b)
{
    x = a;
    y = b;
}
// destructor
Move::~Move()
{
    
}
// displays move
void Move::showmove() const
{
    cout << "x = " << x << endl << "y = " << y << endl;
}
/*  This function adds x of m to x of invoking object to get new x,
    adds y of m to y of invoking object to get new y, creates a new
    move object initialized to new x, y values and returns it */
Move Move::add(Move & m)
{
    Move noob(x += m.x, y += m.y);
    return noob;
}
// resets x,y to a, b
void Move::reset(double a, double b)
{
    x = a;
    y = b;
}
