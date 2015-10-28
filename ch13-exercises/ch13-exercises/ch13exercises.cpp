//
//  main.cpp
//  ch13-exercises
//
//  Created by Zack Fanning on 10/22/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include "brass.hpp"
#include "exercise1.hpp"
#include "exercise4.hpp"

using namespace std;

// a different way to print the cd information
void bravo(const Cd & disk);

int main(int argc, const char * argv[])
{

    // Brass and Brass Plus banking
    Brass Harvey("Harvery Oswald", 123456789, 4183.45);
    Brass Helga("Helga Horatio", 987654321, 2592.00);
    BrassPlus Helga2(Helga, 500, .125);
    Harvey.Deposit(100);
    Harvey.ViewAcct();
    Harvey.Withdraw(3000);
    Harvey.Withdraw(1500);
    Harvey.ViewAcct();
    Helga2.Brass::Deposit(500);
    Helga2.ViewAcct();
    Helga2.BrassPlus::Withdraw(2500);
    Helga2.ViewAcct();
    Helga2.BrassPlus::Withdraw(1000);
    Helga2.ViewAcct();
    
    // Cd and Classic
    Cd relativity ("Albert Einstein", "Rocafella Records", 10, 28.5);
    Classic gravity("Newton", "Vatican Productions", 5, 9.8, "Mass don't matter, Like a virgin");
    relativity.Report();
    gravity.Report();
    
    // using the function here to call the class function
    bravo(relativity);
    // when calling gravity it should be called as a Cd and not a Classic object :)
    bravo(gravity);

    // port and vintage port
    Port TawnyGallo("Gallo", "Tawny", 20);
    VintagePort OldYeller("Roma", 30, "Old Yeller", 1950);
    TawnyGallo.operator+=(5);
    TawnyGallo.Show();
    TawnyGallo.operator-=(5);
    TawnyGallo.Show();
    OldYeller.operator+=(5);
    OldYeller.Show();
    OldYeller.operator-=(5);
    OldYeller.Show();
    cout << TawnyGallo << endl << OldYeller << endl;
    
    // unfortunately I'm still as yet unsure if I did the work with pointers right
    
    return 0;
}

void bravo(const Cd & disk)
{
    disk.Report();
}











