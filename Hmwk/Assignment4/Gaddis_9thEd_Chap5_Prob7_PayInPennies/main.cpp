/* 
 * File:   main.cpp
 * Author: Elijah De Vera
 * Created on January 14, 2021, 12:36 PM
 * Purpose:  Pay in pennies problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int days,
        pennies;
    
    //Initialize or input i.e. set variable values
    cin>>days; 
    pennies = 1; 
    
    //Map inputs -> outputs
    if ( days >= 1 )
    {
        for ( int i = 0; i < days; i++ )
        {
            pennies*=2; 
        }
        pennies-=1; 
    }

    
    //Display the outputs
    cout<<setprecision(2)<<fixed;
    cout<<"Pay = $"<<setw(0)<<pennies/100.0; 

    //Exit stage right or left!
    return 0;
}
