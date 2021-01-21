/* 
 * File:   main.cpp
 * Author: Elijah De Vera
 * Created on January 5, 2021, 12:36 AM
 * Purpose: Sales Prediction
 */

//System Libraries
#include <iostream> //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversion, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    double item1, 
            item2, 
            item3, 
            item4, 
            item5, 
            subTotal,
            salesTax,
            totalTax,
            total;
    
    //Initialize Variables
    item1 = 15.95;
    item2 = 24.95;
    item3 = 6.95;
    item4 = 12.95;
    item5 = 3.95;
    salesTax = 0.07;
    
    //Map Inputs to Outputs -> Process
    subTotal = item1 + item2 + item3 + item4 + item5;
    totalTax = salesTax * subTotal;
    total = subTotal + totalTax;
    
    //Display Inputs/Outputs
    cout<< item1 << "\n" << item2 << "\n" << item3 << "\n" << item4 << "\n" << item5 << "\n" << endl;
    cout<< "subtotal: " << subTotal << endl;
    cout<< "sales tax: " << totalTax << endl;
    cout<< "total: "<< total << endl;
    
    // Exit the Program - Cleanup
    return 0;
}

