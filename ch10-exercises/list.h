//
//  list.hpp
//  ch10-exercises
//
//  Created by Zack Fanning on 10/21/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#ifndef list_h
#define list_h

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

static int i = 0;

class list
{
private:
    enum {size = 10};
    int n_items[size];
    int n_top = 0;
public:
    // default constructor
    list();
    // destructor
    ~list();
    // add to list
    void add(int num);
    // empty check
    void empty();
    // full check
    void full();
    // add 5 to a member variable
    void addition(int num);
    // display the object
    void display(int num);
};

#endif /* list_h */
