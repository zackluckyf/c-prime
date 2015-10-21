//
//  list.cpp
//  ch10-exercises
//
//  Created by Zack Fanning on 10/21/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include "list.h"

// default constructor
list::list()
{
    n_top = 0;
    n_items[n_top] = 0;
}
// destructor
list::~list()
{
    
}
// add to list
void list::add(int num)
{
    n_items[n_top] = num;
    n_top++;
}
// empty check
void list::empty()
{
    if (n_top == 0)
    {
        cout << "The stack is empty" << endl;
    }
    else
    {
        cout << "The stack is not empty" << endl;
    }
}
// full check
void list::full()
{
    if (n_top == 10)
    {
        cout << "The stack is full" << endl;
    }
    else
    {
        cout << "The stack is not full" << endl;
    }

}
// add 5 to a member variable
void list::addition(int num)
{
    n_items[num] = n_items[num] + 5;
}




