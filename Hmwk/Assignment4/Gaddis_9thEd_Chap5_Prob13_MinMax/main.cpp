/* 
 * File:   main.cpp
 * Author: Elijah De Vera
 * Created on January 21, 2021, 12:36 PM
 * Purpose:  minmax
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int inp; 
    int min; 
    int max; 
    
    //Initialize or input i.e. set variable values
    cin>>inp;
    min = max = inp; 
     
    
    //Map inputs -> outputs
    while ( inp != -99 )
    {
        if ( inp < min )
        {
            min = inp; 
        }
        if ( inp > max )
        {
            max = inp; 
        }
        cin>>inp; 
    }
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<min<<endl;
    cout<<"Largest  number in the series is "<<max; 

    //Exit stage right or left!
    return 0;
}

