/* 
 * File:   main.cpp
 * Author: Elijah De Vera
 * Created on January 21, 2021, 12:36 PM
 * Purpose: rectangle problem
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
    int size; 
    char choice; 
    
    //Initialize or input i.e. set variable values
    cin>>size; 
    cin>>choice; 
    
    //Map inputs -> outputs
    for ( int i = 0; i < size-1; i++ )
    {
        for ( int j = 0; j < size-1; j++ )
        {
            cout<<choice;
        }
        cout<<choice<<endl; 
    }
    for ( int k = 0; k < size; k++ )
    {
        cout<<choice; 
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

