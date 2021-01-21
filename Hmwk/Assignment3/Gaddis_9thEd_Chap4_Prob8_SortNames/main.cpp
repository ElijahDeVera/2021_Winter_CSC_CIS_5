/* 
 * File:   main.cpp
 * Author: Elijah De Vera
 * Created on January 14, 2021, 12:36 PM
 * Purpose:  Sorting names
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string> // includes string 
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    cout << "Sorting Names" << endl; // Project title
    
    //Set the random number seed
    
    //Declare Variables
    string name1, name2, name3;
    
    //Initialize or input i.e. set variable values
    cout << "Input 3 names" << endl;
    cin >> name1;
    cin >> name2;
    cin >> name3;
    int num = 0;
    
    //Map inputs -> outputs
   if ( name1[0] < name2[0] && name1[0] < name3[0] )
    {
        cout << name1 << endl;
        if ( name2[0] < name3[0] )
        {
            cout << name2 << endl << name3;
        }
        else 
        {
            cout << name3 << endl << name2; 
        }
    }
   if ( name2[0] < name1[0] && name2[0] < name3[0] )
    {
        cout << name2 << endl;
        if ( name1[0] < name3[0] )
        {
            cout << name1 << endl << name3;
        }
        else 
        {
            cout << name3 << endl << name1; 
        }
    }
    if ( name3[0] < name1[0] && name3[0] < name2[0] )
    {
        cout << name3 << endl;
        if ( name1[0] < name2[0] )
        {
            cout << name1 << endl << name2;
        }
        else 
        {
            cout << name2 << endl << name1; 
        }
    }

    //Display the outputs

    //Exit stage right or left!
    return 0;
}
