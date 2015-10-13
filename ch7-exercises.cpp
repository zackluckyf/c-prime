//
//  main.cpp
//  ch7-exercises
//
//  Created by Zack Fanning on 10/13/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// calculates the harmonic mean of a set of numbers
double harmonicMean();

// outputs golf scores and avg score
void golf();

// determines lottery odds with a powerball
void powerball();

// factorial recursive function
long factorial(int x);



int main(int argc, const char * argv[])
{
    double mean(1.0);
    while (mean != 0)
    {
        mean = harmonicMean();
        cout << mean << " is the harmonic mean" << endl;
    }
    golf();
    powerball();
    int x;
    long factorialNum;
    cout << "Enter a number to get its factorial: ";
    cin >> x;
    factorialNum = factorial(x);
    cout << "The sum is " << factorialNum << endl;
    
    
    
    return 0;
}

double harmonicMean()
{
    double x, y, mean;
    cout << "Enter an x and y value: ";
    cin >> x >> y;
    mean = 2 * x * y / (x + y);
    return mean;
}

void golf()
{
    double total(0.0), average(0.0);
    vector<int> scores(10);
    int tempScore(1), i(0);
    cout << "Enter up to 10 golf scores, enter 0 to end early: ";
    cin >> tempScore;
    while (tempScore != 0)
    {
        scores[i] = tempScore;
        cin >> tempScore;
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        cout << scores[j] << " ";
    }
    for (int j = 0; j < i; j++)
    {
        total += scores[j];
    }
    average = total / i;
    cout << endl << "The average is " << average << endl;
}

void powerball()
{
    long choice1, choice2;
    double odds1(1.0), odds2, odds3, totOdds;
    // assume 5 numbers picked standard lotto
    cout << "How many choices do you have for normal numbers: ";
    cin >> choice1;
    cout << "How many choices do you have the powerball numbers: ";
    cin >> choice2;
    odds2 = 1.0 / choice2;
    for (int i = 0; i < 5; i++)
    {
        odds3 = 1.0 / (choice1 - i);
        odds1 *= odds3;
    }
    odds1 *= 120;
    totOdds = odds2 * odds1;
    cout << "Your odds are 1 in " << 1 / totOdds << endl;
}

long factorial(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x*factorial(x-1);
    }
}














