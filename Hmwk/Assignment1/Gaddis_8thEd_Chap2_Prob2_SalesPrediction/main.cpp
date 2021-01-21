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
    double initialSales;
    float rate;
    double total;
    
    //Initialize Variables
    initialSales = 8.6E9;
            rate = 0.58;
      
    //Map Inputs to Outputs -> Process
    total = initialSales * rate;
    
    //Display Inputs/Outputs
    cout<<total<<endl;
            
    // Exit the Program - Cleanup
    return 0;
}

