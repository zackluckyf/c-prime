//
//  move.hpp
//  ch10-exercises
//
//  Created by Zack Fanning on 10/20/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#ifndef move_h
#define move_h

#include <stdio.h>
#include <iostream>

using namespace std;

class Move
{
private:
    double x;
    double y;
public:
    // constructor
    Move(double a = 0, double b = 0);
    // destructor
    ~Move();
    // displays move
    void showmove() const;
    /* This function adds x of m to x of invoking object to get new x,
    adds y of m to y of invoking object to get new y, creates a new
     move object initialized to new x, y values and returns it */
    Move add(Move & m);
    // resets x,y to a, b
    void reset(double a = 0, double b = 0);
};


#endif /* move_h */
