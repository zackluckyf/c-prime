//
//  exercise1.hpp
//  ch13-exercises
//
//  Created by Zack Fanning on 10/27/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#ifndef exercise1_hpp
#define exercise1_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

// base class
// represents a CD
class Cd
{
private:
    string performers;
    string label;
    int selections; // number of selections
    double playtime; // playing time in minutes
public:
    Cd(string s1, string s2, int n, double x);
    Cd();
    ~Cd();
    void modify(string s1, string s2, int n, double x);
    virtual void Report() const; // reports all CD data
};

/*
 Derive a Classic class that adds an array of char members that will hold a string identifying the 
 primary work on the CD. If the base class requires that any functions be virtual, modify the base-
 class declaration to make it so. If a declared method is not needed, remove it from the definition.
 Test your product with the following program:
 */

class Classic : public Cd
{
private:
    string primaryWork;
public:
    Classic(string s2, string s3, int n, double x, string s1);
    virtual void Report() const; // reports all CD data
    ~Classic();
};
















#endif /* exercise1_hpp */
