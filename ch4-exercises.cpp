//
//  main.cpp
//  ch4-exercises
//
//  Created by Zack Fanning on 10/8/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::getline;

//  user inputs first, last name and the grade they think they deserve
void grade();

//  user inputs first and last name which is then concatenated to one string
void name();

//  Candy bar facts are outputted using structures
void candy();

// pizza analysis
void pizza();

// dynamic pizza analysis
void dpizza();

//  Candy bar facts are outputted using structures dynamically
void dcandy();


int main(int argc, const char * argv[])
{
    grade();
    name();
    candy();
    pizza();
    dpizza();
    dcandy();

    return 0;
}

void grade()
{
    string firstName, lastName, age, nerd, grade1;
    char grade;
    cout << "What is your first name? ";
    getline(cin, firstName);
    cout << "What is your last name? ";
    getline(cin, lastName);
    cout << "What letter grade do you deserve? ";
    // Assume the user says a, b, c, A, B, or C
    getline(cin, grade1);
    grade = grade1[0];
    cout << "What is your age? ";
    getline(cin, age);
    grade = grade + 1;
    cout << "Name: " << lastName << ", " << firstName << endl
    << "Grade: " << grade << endl << "Age: " << age << endl;
}

void name()
{
    string name1, name2;
    cout << "Enter your first name: ";
    getline(cin,name1);
    cout << "Enter your last name: ";
    getline(cin,name2);
    name1 = name2 + ", " + name1;
    cout << "Here's the information in a single string " << name1 << endl;
}

void candy()
{
    struct candyBar
    {
        string name;
        double weight;
        int calories;
    };
    candyBar snack = {"Mocha Munch", 2.3, 350};
    cout << "This snack is called: " << snack.name << endl << "It weighs: " << snack.weight
    << endl << "It contains " << snack.calories << " calories";
    
    candyBar array[3];
    array[0] = {"Mocha Munch", 2.3, 350};
    array[1] = {"Snickers", 1.3, 230};
    array[2] = {"Milky Way", 3.5, 150};
    
    cout << endl << "This snack is called: " << array[0].name << endl << "It weighs: "
    << array[0].weight << endl << "It contains " << array[0].calories << " calories";
 
    cout << endl <<"This snack is called: " << array[1].name << endl << "It weighs: "
    << array[1].weight << endl << "It contains " << array[1].calories << " calories";
    
    cout << endl <<"This snack is called: " << array[2].name << endl << "It weighs: "
    << array[2].weight << endl << "It contains " << array[2].calories << " calories" << endl;
}

void pizza()
{
    struct pie
    {
        string pizza;
        double diameter;
        double weight;
    };
    pie newPizza;
    cout << "What is the name of the pizza place: ";
    getline(cin, newPizza.pizza);
    cout << "What is the diameter of the pizza: ";
    cin >> newPizza.diameter;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "What is the weight of the pizza: ";
    cin >> newPizza.weight;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    cout << endl << newPizza.pizza << " made a pizza that is " << newPizza.diameter
    << " inches in diameter and " << newPizza.weight << " lbs. in weight" << endl;
}

void dpizza()
{
    struct pie
    {
        string pizza;
        double diameter;
        double weight;
    };
    pie* pizza1 = new pie;
    cout << "What is the name of the pizza place: ";
    getline(cin, pizza1 -> pizza);
    cout << "What is the diameter of the pizza: ";
    cin >> pizza1 -> diameter;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "What is the weight of the pizza: ";
    cin >> pizza1 -> weight;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
    cout << endl << pizza1 -> pizza << " made a pizza that is " << pizza1 -> diameter
    << " inches in diameter and " << pizza1 -> weight << " lbs. in weight" << endl;
    delete pizza1;
}

void dcandy()
{
    struct candyBar
    {
        string name;
        double weight;
        int calories;
    };

    candyBar* bars = new candyBar[3];
    bars->name = "Mango tart";
    bars->weight =  2.3;
    bars->calories =  100;
    
    cout << endl << "This snack is called: " << bars -> name << endl << "It weighs: "
    << bars -> weight << endl << "It contains " << bars -> calories << " calories";
    
    bars += 1;
    bars->name = "Yo Yo";
    bars->weight =  3.2;
    bars->calories =  130;
    
    cout << endl <<"This snack is called: " << bars -> name << endl << "It weighs: "
    << bars -> weight << endl << "It contains " << bars -> calories << " calories";
    
    bars += 1;
    bars->name =  "Orange Ball";
    bars->weight =  1.7;
    bars->calories =  98;
    
    cout << endl <<"This snack is called: " << bars -> name << endl << "It weighs: "
    << bars -> weight << endl << "It contains " << bars -> calories << " calories" << endl;

}





















