//
//  account.h
//  ch10-exercises
//
//  Created by Zack Fanning on 10/20/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#ifndef account_h
#define account_h
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class account
{
private:
    string n_name;
    string n_accountNum;
    double n_balance;
public:
    account(string name, string accountNum, double balance);
    ~account();
    void display() const;
    void deposit(double cash);
    void withdraw(double cash);
};


#endif /* account_h */
