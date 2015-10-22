//
//  brass.cpp
//  ch13-exercises
//
//  Created by Zack Fanning on 10/22/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include "brass.hpp"


typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f, precis p);

// Brass Functions
Brass::Brass(const std::string & s, long an, double bal)
{
    fullName = s;
    acctNum = an;
    balance = bal;
}
void Brass::Deposit(double amt)
{
    
    balance += amt;
}
void Brass::Withdraw(double amt)
{
    if (amt < 0.01)
    {
        cout << "Error withdrawl must be positive" << endl;
    }
    else if (amt < balance)
    {
        balance -= amt;
    }
    else
        cout << "Error amount withdrawn is greater than available funds" << endl;
}
double Brass::Balance() const
{
    return balance;
}
void Brass::ViewAcct() const
{
    format initialState = setFormat();
    precis prec = cout.precision(2);
    cout << "Client: " << fullName << endl;
    cout << "Account Number: " << acctNum << endl;
    cout << "Balance: $" << balance << endl;
    restore(initialState, prec);
}

// Brass Plus Functions
BrassPlus::BrassPlus(const std::string & s, long an, double bal, double ml, double r)
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
    
}
BrassPlus::BrassPlus(const Brass & ba, double ml, double r) : Brass(ba)
{
    
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}
void BrassPlus::ViewAcct() const
{
    format initialState = setFormat();
    precis prec = cout.precision(2);
    cout << "Client: " << fullName << endl;
    cout << "Account Number: " << acctNum << endl;
    cout << "Balance: $" << balance << endl;
    cout << "Maximum loan: $" << maxLoan << endl;
    cout << "Owed to bank: $" << owesBank << endl;
    cout.precision(3);
    cout << "Loan rate: " << 100 * rate << "%" << endl;
    restore(initialState, prec);
}
void BrassPlus::Withdraw(double amt)
{
    format initialState = setFormat();
    precis prec = cout.precision(2);
    double bal = Balance();
    if (amt <= bal)
    {
        Brass::Withdraw(amt);
    }
    else if (amt <= bal + maxLoan -owesBank)
    {
        double tempMoney = amt - bal;
        owesBank += tempMoney * (1.0 + rate);
        double tempMoney2 = tempMoney * rate;
        cout << "Bank advance: $" << tempMoney << endl;
        cout << "Service Charge: $" << tempMoney2 << endl;
    }
    else
        cout << "Credit limit exceeded. Transaction Cancelled." << endl;
    restore(initialState, prec);
}


format setFormat()
{
    // set up ###.## format
    return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}

void restore(format f, precis p)
{
    cout.setf(f, std::ios_base::floatfield);
    cout.precision(p);
}




