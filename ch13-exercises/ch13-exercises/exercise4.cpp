//
//  exercise4.cpp
//  ch13-exercises
//
//  Created by Zack Fanning on 10/27/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include "exercise4.hpp"

// Port functions
Port::Port(string brand, string style, int b)
{
    n_brand = brand;
    n_style = style;
    n_bottles = b;
}
Port::Port()
{
    n_brand = "n/a";
    n_style = "n/a";
    n_bottles = 0;
}
void Port::modify(string a, string b, int c)
{
    n_brand = a;
    n_style = b;
    n_bottles = c;
}
Port::~Port()
{
   
}

Port & Port::operator+=(int b) // adds b to bottles
{
    n_bottles += b;
    Port* p;
    p = new Port;
    Port object1(n_brand, n_style, n_bottles);
    *p = object1;
    delete p;
    return *p;
}
Port & Port::operator-=(int b) // subtracts b from bottles, if available
{
    n_bottles -= b;
    Port* p;
    p = new Port;
    Port object1(n_brand, n_style, n_bottles);
    *p = object1;
    delete p;
    return *p;
}
void Port::Show() const
{
    cout << "Brand: " << n_brand << endl;
    cout << "Kind: " << n_style << endl;
    cout << "Bottles: " << n_bottles << endl;
}
void Port::ShowBrand() const
{
    cout << "Brand: " << n_brand << endl;
}
void Port::ShowBottles() const
{
    cout << "Bottles: " << n_bottles << endl;
}
ostream & operator<<(ostream & os, const Port & p)
{
    cout << p.n_brand << ", " << p.n_style << ", " << p.n_bottles;
    return os;
}

// VintagePort functions
VintagePort::VintagePort()
{
    Port();
    n_nickname = "n/a";
    n_year = 0;
}
VintagePort::VintagePort(string brand, int b, string nickname, int y)
{
    modify(brand, "n/a", b);
    n_nickname = nickname;
    n_year = y;
}
VintagePort::~VintagePort()
{
    
}
void VintagePort::Show() const
{
    Port::ShowBrand();
    cout << "Nickname: " << n_nickname << endl;
    Port::ShowBottles();
    cout << "Year: " << n_year << endl;
}
ostream & operator<<(ostream & os, const VintagePort & vp)
{
    cout << vp.n_brand << ", ";
    cout << vp.n_nickname << ", ";
    cout << vp.n_bottles << ", ";
    cout << vp.n_year;
    return os;
}















