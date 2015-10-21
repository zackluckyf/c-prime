//
//  main.cpp
//  ch10-exercises
//
//  Created by Zack Fanning on 10/20/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include "account.h"
#include "stack.h"
#include "move.h"
#include "plorg.h"
#include "list.h"

int main(int argc, const char * argv[])
{
    // account stuff
    account Bob("Bob", "123456789", 1000);
    Bob.display();
    Bob.deposit(350);
    Bob.display();
    Bob.withdraw(500);
    Bob.display();
    // stack stuff
    stack Bobby("Bobby Jones", 100);
    stack Rodney("Rodney Harrison", 200);
    stack Jimmy("Jimmy Johnson", 300);
    Bobby.remove();
    Rodney.remove();
    Jimmy.remove();
    // move stuff
    Move coordinates(1.5, 2.5);
    Move nerd(2, 3);
    coordinates.showmove();
    coordinates.add(nerd);
    coordinates.showmove();
    nerd.showmove();
    nerd.reset();
    coordinates.reset();
    nerd.showmove();
    coordinates.showmove();
    // plorg stuff
    plorg Default;
    plorg Harry("Harry Potter");
    Harry.report();
    Harry.content(60);
    Harry.report();
    Default.report();
    Default.content(80);
    Default.report();
    // list stuff
    list numbers;
    numbers.empty();
    numbers.add(3);
    numbers.add(5);
    numbers.add(7);
    numbers.empty();
    numbers.add(3);
    numbers.add(3);
    numbers.full();
    numbers.add(3);
    numbers.add(3);
    numbers.add(3);
    numbers.add(3);
    numbers.add(3);
    numbers.full();
    numbers.addition(5);
    numbers.addition(7);
    
    return 0;
}







