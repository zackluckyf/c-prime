//
//  brass.hpp
//  ch13-exercises
//
//  Created by Zack Fanning on 10/22/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#ifndef brass_hpp
#define brass_hpp
#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

class Brass
{
private:
    std::string fullName;
    long acctNum;
protected:
    double balance;
public:
    Brass(const std::string & s = "Nullbody", long an = -1, double bal = 0.0);
    virtual void Withdraw(double amt);
    double Balance() const;
    virtual void ViewAcct() const;
    virtual ~Brass() {};
    void Deposit(double amt);
};

//Brass Plus Account Class
class BrassPlus : public Brass
{
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const std::string & s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.11125);
    BrassPlus(const Brass & ba, double ml = 500, double r = 0.11125);
    virtual void ViewAcct()const;
    virtual void Withdraw(double amt);
    void ResetMax(double m) { maxLoan = m; }
    void ResetRate(double r) { rate = r; };
    void ResetOwes() { owesBank = 0; }
};

#endif /* brass_hpp */
