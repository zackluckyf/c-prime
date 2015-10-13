//
//  main.cpp
//  ch6-exercises
//
//  Created by Zack Fanning on 10/12/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// changes upper to lower and lower to upper and then prints it while ignoring numbers
void characterConversion();

/* “Write a program that reads up to 10 donation values into an array of double. (Or, if you prefer, use an array template object.) The program should terminate input on non-numeric input. It should report the average of the numbers and also report how many numbers in the array are larger than the average.” */
void donations();

// Simple menu driven function
void simpleMenu();

/* “When you join the Benevolent Order of Programmers, you can be known at BOP meetings by your real
    name, your job title, or your secret BOP name. Write a program that can list members by real 
    name, by job title, by secret name, or by a member’s preference. Base the program on the 
    following structure:” */
void BOP();

// tax function
void taxes();

// donation tracker function
void foundation();

// opens and reads a text file and reads it character by character and counts the characters
void numChars();

int main(int argc, const char * argv[])
{
   
    characterConversion();
    donations();
    simpleMenu();
    BOP();
    taxes();
    foundation();
    numChars();
    
    return 0;
}

void characterConversion()
{
    string word;
    char letter;
    cout << "Enter characters to be converted! Enter @ when done: ";
    cin >> letter;
    while (letter != '@')
    {
        if (isupper(letter) == true)
        {
            letter = tolower(letter);
            word += letter;
        }
        else if (islower(letter) == true)
        {
            letter = toupper(letter);
            word += letter;
        }
        cin >> letter;
    }
    cout << endl << word << endl;
    cin.sync();
}

void donations()
{
    int count(0), larger(0);
    double total(0.0), average;
    double array[10] = {0};
    cout << "Enter the donation values: ";
    for (int i = 0 ; i < 10; i++)
    {
        cin >> array[i];
        if (array[i] > 0)
        {
            count++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        total += array[i];
    }
    average = total / count;
    for (int i = 0; i < count; i++)
    {
        if (array[i] > average)
        {
            larger++;
        }
    }
    cout << "The average is: " << average << ", there are " << larger
    << " values larger than the average" << endl;
    cin.sync();
}

void simpleMenu()
{
    bool good = false;
    char choice;
    cout << "Please enter one of the following choices: " << endl <<
    "a) bird             b) dog" << endl <<
    "c) fish             d) snake" << endl;
    cout << "Please enter an a, b, c, or d: ";
    cin >> choice;
    while (good == false)
    {
    switch(choice)
    {
        case 'a'  :
            cout << "Birds can fly!" << endl;
            good = true;
            break;
        case 'b'  :
            cout << "Dogs are man's best friend!" << endl;
            good = true;
            break;
        case 'c'  :
            cout << "Fish can breathe underwater!" << endl;
            good = true;
            break;
        case 'd'  :
            cout << "Snakes are venomous!" << endl;
            good = true;
            break;
            
        default :
        {
            cout << "Please enter an a, b, c, or d: ";
            cin >> choice;
        }
    }
    }
    cin.sync();
}

void BOP()
{
    bool good = false;
    int num;
    struct bop
    {
        string fullName;
        string title;
        string bopName;
        int preference; // 0 = fullname 1 = title 2 = bopname
    };
    cout << "How many members are there: ";
    cin >> num;
    cin.ignore(1,'\n');
    vector<bop> names(num);
    for (int i = 0; i < num; i++)
    {
   
        cout << "Enter the full name of member " << i + 1 << endl;
        getline(cin, names[i].fullName);
        cout << "Enter the title of member " << i + 1 << endl;
        getline(cin, names[i].title);
        cout << "Enter the secret BOP name of member " << i + 1 << endl;
        getline(cin, names[i].bopName);
        cout << "Enter the preference of member " << i + 1
        << " 0 for full name, 1 for title, and 2 for secret BOP name" << endl;
        cin >> names[i].preference;
        cin.ignore(1,'\n');
    }
    
    char choice;
    cout << "Please enter one of the following choices: " << endl <<
    "a) display by name      b) display by title" << endl <<
    "c) display by bop name  d) display by preference" << endl
    << "e) quit" << endl;
    cout << "Please enter an a, b, c, d, or e: ";
    cin >> choice;
    cin.sync();
    
    while (good == false)
    {
        switch(choice)
        {
            case 'a'  :
                for (int i = 0; i < num; i++)
                {
                cout << names[i].fullName << endl;
                }
                cout << "Next choice: ";
                cin >> choice;
                break;
            case 'b'  :
                for (int i = 0; i < num; i++)
                {
                    cout << names[i].title << endl;
                }
                cout << "Next choice: ";
                cin >> choice;
                break;
            case 'c'  :
                for (int i = 0; i < num; i++)
                {
                    cout << names[i].bopName << endl;
                }
                cout << "Next choice: ";
                cin >> choice;
                break;
            case 'd'  :
                for (int i = 0; i < num; i++)
                {
                    if (names[i].preference == 0)
                    {
                        cout << names[i].fullName << endl;
                    }
                    else if (names[i].preference == 1)
                    {
                        cout << names[i].title << endl;
                    }
                    else if (names[i].preference == 2)
                    {
                        cout << names[i].bopName << endl;
                    }
                }
                cout << "Next choice: ";
                cin >> choice;                break;
            case 'e'  :
                cout << "Bye!" << endl;
                good = true;
                break;
                    
            default :
            {
                cout << "Please enter an a, b, c, d, or e: ";
                cin >> choice;
            }
        }
    }
    cin.sync();
}

void taxes()
{
    double income(0.0), tax(0.0), x(0.0);
    cout << "What is your income: ";
    cin >> income;
    while (income > 0.0)
    {
        if (income > 35000)
        {
            x = income - 35000;
            x *= .2;
            tax = x;
            income = 35000;
        }
        if (income > 15000)
        {
            x = income - 15000;
            x *= .15;
            tax += x;
            income = 15000;
        }
        if (income > 5000)
        {
            x = income - 5000;
            x *= .1;
            tax += x;
        }
        cout << "Your tax burden is: " << tax << endl;
        cout << "What is another income: ";
        cin >> income;
    }
    cin.sync();
}

void foundation()
{
    bool good = false, okay = false;
    int num;
    struct corp
    {
        string name;
        double donation;
    };
    cout << "How many members are there: ";
    cin >> num;
    cin.ignore(1,'\n');
    vector<corp> names(num);
    for (int i = 0; i < num; i++)
    {
        cout << "Enter a contributors name: " << endl;
        getline(cin, names[i].name);
        cout << "Enter their donation: " << endl;
        cin >> names[i].donation;
        cin.ignore(1,'\n');
    }
    cout << "Grand Patrons" << endl;
    for (int i = 0; i < num; i++)
    {
        if (names[i].donation > 10000)
        {
            good = true;
            cout << names[i].name << " " << names[i].donation << endl;
        }
    }
    if (good == false)
    {
        cout << "None" << endl;
    }
    cout << "Patrons" << endl;
    for (int i = 0; i < num; i++)
    {
        if (names[i].donation < 10000)
        {
            okay = true;
            cout << names[i].name << " " << names[i].donation << endl;
        }
    }
    if (okay == false)
    {
        cout << "None" << endl;
    }
}

void numChars()
{
    int sum = 0;
    ifstream inFile;
    inFile.open("/Users/zackfanning/Documents/xcode/ch6-exercises/ch6-exercises/hello.txt");
    if (!inFile.is_open())
    {
        cout << "Failure to open";
        exit(EXIT_FAILURE);
    }
    char value;
    inFile >> value;
    
    while (inFile.good())
    {
        sum++;
        inFile >> value;
    }
    cout << "The number of characters in the text file is: " << sum << endl;
    
    inFile.close();
}











