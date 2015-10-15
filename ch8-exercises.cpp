//
//  main.cpp
//  ch8-exercises
//
//  Created by Zack Fanning on 10/13/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

template <class myType>
myType GetMax (myType a[5])
{
    myType max = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return (max);
}

struct candybar
{
    string name;
    double weight;
    int calories;
};

void candyfill(candybar& newBar);

void display(const candybar& newBar);

void upper(string& word);


int main(int argc, const char * argv[])
{
    int a[5] = {0,1,2,3,4};
    double b[5] = {1.1,2.1,3.1,1.4,2.5};
    int max1;
    double max2;
    string word;
    candybar newBar;
    candyfill(newBar);
    cout << "Enter a string (q to quit): ";
    cin >> word;
    upper(word);
    max1 = GetMax(a);
    max2 = GetMax(b);
    cout << "Integer max is: " << max1 << endl << "Decimal max is: " << max2 << endl;
    return 0;
}

void candyfill(candybar& newBar)
{
    cout << "Enter the name: ";
    getline(cin, newBar.name);
    cout << "Enter the weight: ";
    cin >> newBar.weight;
    cout << "Enter the calories: ";
    cin >> newBar.calories;
    display(newBar);
}

void display(const candybar& newBar)
{
    cout << endl << "The name is: " << newBar.name << endl;
    cout << "The weight is: " << newBar.weight << endl;
    cout << "The number of calories is: " << newBar.calories << endl;
}

void upper(string & word)
{
    while (word != "q")
    {
        int length = word.length();
        for (int i = 0; i < length; i++)
        {
            word[i] = toupper(word[i]);
        }
        cout << word << endl;
        cout << "Enter a string (q to quit): ";
        cin >> word;
    }
    cout << "Bye!" << endl;
}
















