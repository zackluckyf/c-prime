//
//  account.cpp
//  ch10-exercises
//
//  Created by Zack Fanning on 10/20/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include <stdio.h>
#include "account.h"

// constructor
account::account(string name, string accountNum, double balance)
{
    n_name = name;
    n_accountNum = accountNum;
    n_balance = balance;
}
// destructor
account::~account()
{
    
}
// member functions
void account::display() const
{
    cout << "Name: " << n_name << endl;
    cout << "Account Number: " << n_accountNum << endl;
    cout << "Balance: " << n_balance << endl;
}
void account::deposit(double cash)
{
    n_balance += cash;
}
void account::withdraw(double cash)
{
    n_balance -= cash;
}