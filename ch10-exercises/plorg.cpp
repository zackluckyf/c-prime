//
//  plorg.cpp
//  ch10-exercises
//
//  Created by Zack Fanning on 10/20/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include "plorg.h"

// default consctructor
plorg::plorg()
{
    n_name = "Plorga";
    n_contentment = 50;
}
// constructor
plorg::plorg(string name)
{
    n_name = name;
    n_contentment = 50;
}
// destructor
plorg::~plorg()
{
    
}
// contentment change
void plorg::content(int contentment)
{
    n_contentment = contentment;
}
// report details
void plorg::report()
{
    cout << "Blorg: " << n_name << endl << "Contentment: " << n_contentment << endl;
}