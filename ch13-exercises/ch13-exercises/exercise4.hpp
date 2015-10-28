//
//  exercise4.hpp
//  ch13-exercises
//
//  Created by Zack Fanning on 10/27/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#ifndef exercise4_hpp
#define exercise4_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Port
{
protected:
    string n_brand;
    string n_style; // i.e., tawny, ruby, vintage
    int n_bottles;
public:
    Port(string brand, string style, int b);
    Port(); 
    virtual ~Port();
    Port & operator+=(int b); // adds b to bottles
    Port & operator-=(int b); // subtracts b from bottles, if available
    void modify(string a, string b, int c);
    int BottleCount() const { return n_bottles; }
    void ShowBrand() const;
    void ShowBottles() const;
    virtual void Show() const;
    friend ostream & operator<<(ostream & os, const Port & p);
};


class VintagePort : public Port // style necessarily = "vintage"
{
private:
    string n_nickname; // i.e., "The Noble" or "Old Velvet", etc.
    int n_year; // vintage year
public:
    VintagePort();
    VintagePort(string brand, int b, string nickname, int y);
    VintagePort(const VintagePort & vp);
    ~VintagePort();
    VintagePort & operator=(const VintagePort & vp);
    void Show() const;
    friend ostream & operator<<(ostream & os, const VintagePort & vp);
};


#endif /* exercise4_hpp */
