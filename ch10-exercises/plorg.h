//
//  plorg.hpp
//  ch10-exercises
//
//  Created by Zack Fanning on 10/20/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#ifndef plorg_h
#define plorg_h

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class plorg
{
private:
    string n_name;
    int n_contentment;
public:
    // default consctructor
    plorg();
    // constructor
    plorg(string name);
    // destructor
    ~plorg();
    // contentment change
    void content(int contentment);
    // report details
    void report();
};

#endif /* plorg_h */
