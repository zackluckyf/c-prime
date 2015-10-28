//
//  exercise1.cpp
//  ch13-exercises
//
//  Created by Zack Fanning on 10/27/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include "exercise1.hpp"

// Cd functions
Cd::Cd(string s1, string s2, int n, double x)
{
    performers = s1;
    label = s2;
    selections = n;
    playtime = x;
}
Cd::Cd()
{
    performers = "n/a";
    label = "n/a";
    selections = 0;
    playtime = 0.0;
}
void Cd::modify(string s1, string s2, int n, double x)
{
    performers = s1;
    label = s2;
    selections = n;
    playtime = x;
}
Cd::~Cd()
{
    
}
void Cd::Report() const
{
    cout << "Performers: " << performers << endl;
    cout << "Label: " << label << endl;
    cout << "Selections: " << selections << endl;
    cout << "Playtime: " << playtime << endl;
}


// Classic functions
Classic::Classic(string s2, string s3, int n, double x, string s1)
{
    Cd::modify(s2, s3, n, x);
    primaryWork = s1;
}
void Classic::Report() const
{
    cout << "Primary work: " << primaryWork << endl;
    Cd::Report();
}
Classic::~Classic()
{
    
}