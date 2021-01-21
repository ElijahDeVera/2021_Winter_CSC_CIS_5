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
    float total, 
            salesTax,
            countryTax,
            price;
    
    //Initialize Variables
    salesTax = 0.04E0;
    countryTax = 0.02E0;
    price = 9.5E1;
    
    //Map Inputs to Outputs -> Process
    total = ( salesTax * price ) + (countryTax * price) + price;
    
    //Display Inputs/Outputs
    cout<<total<<endl;
    
    // Exit the Program - Cleanup
    return 0;
}

