// Copyright © 2021 Billy Terimpundu All rights reserved

// Created by:  Billy Terimpundu
// Created on: January 2022
// This program  that asks the user for two numbers
// then calculates and displays the Lowest Common Multiple of the two numbers
// Python Program to Find the LCM using if..else statement and while Loop
#include <iostream>
using namespace std;

int main()
{
    //declaring the variables
    int num1, num2, max;
    
    //getting input from the user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
     
    // maximum value between num1 and num2 is stored in max
    max = (num1 > num2) ? num1 : num2;

    do
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            cout << "The L.C.M is = " << max;
            break;
        }
        else
            ++max;
    } while (true);
    
    return 0;
}