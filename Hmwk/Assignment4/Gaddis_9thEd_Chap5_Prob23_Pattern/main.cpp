/* 
 * File:   main.cpp
 * Author: Elijah De Vera
 * Created on January 21, 2021, 12:36 PM
 * Purpose:  Pattern problem
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
    string plus; 
    
    //Initialize or input i.e. set variable values
    cin>>num; 
    plus="+"; 

    //Map inputs -> outputs
    for ( int i = 0; i < num; i++ )
    {
        for ( int j = 0; j < i; j++ )
        {
            cout<<plus; 
        }
        cout<<plus<<endl<<endl; 
    }
    for ( int k = num-1; k > 0; k-- )
    {
        for ( int l = 0; l < k; l++ )
        {
            cout<<plus; 
        }
        cout<<plus<<endl<<endl; 
    }
    cout<<plus; 
    //Exit stage right or left!
    return 0;
}
