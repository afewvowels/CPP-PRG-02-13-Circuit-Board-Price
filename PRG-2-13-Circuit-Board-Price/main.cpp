//
//  main.cpp
//  PRG-2-13-Circuit-Board-Price
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  An electronics company sells circuit boards at a 35 percent profit. Write a program that
//  will calculate the selling price of a circuit board that costs $14.95. Display the result
//  on the screen.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    // Define constants
    const float FLT_PROFIT_MARGIN = 0.35f;
    const float FLT_ITEM_COST = 14.95f;
    
    // Define variable
    float fltProfit;
    
    // Calculate profit
    fltProfit = FLT_ITEM_COST + (FLT_ITEM_COST * FLT_PROFIT_MARGIN);
    
    // Configure output decimal for dollar amount
    cout << setprecision(2) << fixed << showpoint;
    
    // Output result to console
    cout << "The total profit will be $" << fltProfit << endl;
    
    return 0;
}
