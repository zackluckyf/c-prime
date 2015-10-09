//
//  main.cpp
//  ch5-exercises
//
//  Created by Zack Fanning on 10/9/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

// sums values
void sum();

// sums and prints values
void cumulative();

// interest comparison
void interest();

// displays rows of asterisks and periods
void row();

int main(int argc, const char * argv[])
{
    sum();
    cumulative();
    interest();
    row();
    
    
    return 0;
}

void sum()
{
    int num1, num2, total(0);
    // user enters two digits the first of which is to be the smaller
    cout << "What is the first number: ";
    cin >> num1;
    cout << "What is the second number: ";
    cin >> num2;
    for (num1; num1 < (num2 + 1); num1++)
    {
        total = total + num1;
    }
    cout << "The sum of the number between and including those two numbers is: "
    << total << endl;
}

void cumulative()
{
    int num(1), total(0);
    cout << "Enter a num: ";
    cin >> num;
    while (num != 0)
    {
        total = total + num;
        cout << "Your current total is: " << total << endl;
        cout << "Enter another number or 0 to finish: ";
        cin >> num;
        
    }
}

void interest()
{
    double total1(100.0), total2(100.0), rate(1.05);
    int years(0);
    while (total2 <= total1)
    {
        total1 = total1 + 10;
        total2 = total2 * rate;
        years++;
    }
    cout << "After " << years << " years total 2 exceeds total 1 and total 1 = " << total1
    << " and total 2 = " << total2 << endl;
}

void row()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (int i = rows; i > 0; i--)
    {
        for (int j = 0; j < i-1; j++)
        {
            cout << '.';
        }
        for (int k = 0; k < rows - (i - 1); k++)
        {
            cout << '*';
        }
        cout << endl;
    }
}



















