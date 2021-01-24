/* 
 * File:   main.cpp
 * Author: Elijah De Vera
 * Created on January 21, 2021, 12:36 PM
 * Purpose:  adding sums using a loop
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
    int num; 
    int sum; 
    
    //Initialize or input i.e. set variable values
    cin>>num;
    sum=0;
    
    //Map inputs -> outputs
    for ( int i = 0; i <= num ; i++ )
    {
        sum+=i; 
    }
    
    //Display the outputs
    cout<<"Sum = "<<sum; 
    
    //Exit stage right or left!
    return 0;
}
