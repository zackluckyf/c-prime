//
//  main.cpp
//  ch3-exercises
//
//  Created by Zack Fanning on 10/7/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

//  Chapter 3 Programming exercises

#include <cmath>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


//  function converts inches to feet and inches and prints
void height(int& feet, int& inches);

//  BMI function
void bmi(double& height, double& weight);

//  function tells the user their exact latitude
void latitude();

//  function converts seconds into days, hours, minutes, seconds
void secondsConverter();

//  function calculates the percent of world population belonging to a country
void popPercent();

//  function calculates mpg
void mpg();

int main(int argc, const char * argv[]) {
    
    //  variables for first function
    int feet(0), inches(0);
    height(feet, inches);
    //  variables for second function
    double temp1(0.0), temp2(0.0);
    bmi(temp1, temp2);
    latitude();
    secondsConverter();
    popPercent();
    mpg();
     
    
    return 0;
}

void height(int& feet, int& inches)
{
    cout << "Enter the height in inches: ";
    cin >> inches;
    int const HEIGHT_CONVERTER(12);
    feet = inches / 12;
    inches = inches % HEIGHT_CONVERTER;
    cout << "The height is " << feet << "'" << inches << "\"" << endl;
}

void bmi(double& height, double& weight)
{
    cout << "Enter the height in inches: ";
    cin >> height;
    cout << "Enter the weight in pounds: ";
    cin >> weight;
    height = .0254 * height;
    weight = weight / 2.2;
    double bodyMass = weight / pow(height, 2.0);
    cout << "Your body mass is: " << bodyMass << endl;
}

void latitude()
{
    double degrees, minutes, seconds;
    cout << "Enter a latitude in degrees, minutes, and seconds: ";
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = ";
    minutes = minutes / 60;
    seconds = seconds / 3600;
    double total = degrees + minutes + seconds;
    cout << total << endl;
}

void secondsConverter()
{
    long long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    long long temp = seconds;
    long days = seconds / 86400;
    seconds = seconds - days * 86400;
    short hours = seconds / 3600;
    seconds = seconds - hours * 3600;
    short minutes = seconds / 60;
    seconds = seconds - minutes * 60;
    cout << temp << " seconds = " << days << " days, " << hours << " hours, "
    << minutes << " minutes," << seconds << " seconds." << endl;
}

void popPercent()
{
    long long totalPop, countryPop;
    cout << "Enter the world's population: ";
    cin >> totalPop;
    cout << "Enter the population of a country: ";
    cin >> countryPop;
    cout << "The population of that country is " << (float)countryPop/(float)totalPop * 100 << " % of the world population." << endl;
}

void mpg()
{
    double miles, gallons;
    cout << "How many miles have you driven: ";
    cin >> miles;
    cout << "How many gallons have you used: ";
    cin >> gallons;
    cout << "Your MPG is: " << miles/gallons << endl;
}














