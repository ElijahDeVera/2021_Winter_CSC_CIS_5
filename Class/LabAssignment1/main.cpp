/* 
 * File:   main.cpp
 * Author: Elijah De Vera
 * Created on January 11, 2021, 12:36 AM
 * Purpose: Lab Assignment
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
    float milBdgt, fedBdgt, mlPrcnt;
    
    //Initialize Variables
    milBdgt = 7.0e11f; //Military Budget = 700 Billion
    fedBdgt = 4.1e12f; //Federal Budget = 4.1 trillion
    
    //Map Inputs to Outputs -> Process
    mlPrcnt = (milBdgt/fedBdgt) * 100; //calculating the percentage of military budget from federal budget
    
    //Display Inputs/Outputs
    cout<< "The military budget is "<< mlPrcnt << "% of the federal budget"<< endl;
            
    // Exit the Program - Cleanup
    return 0;
}

