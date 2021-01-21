/* 
 * File:   main.cpp
 * Author: Elijah De Vera
 * Created on January 14, 2021 12:36 PM
 * Purpose:  Calculating ISP Bill 
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
    
    cout << "ISP Bill" << endl;
    
    //Set the random number seed
    
    //Declare Variables
    char package;
    int hours,
        aHours,
        bHours; 
    float bill,
          aBill,
          bBill,
          cBill;
    
    //Initialize or input i.e. set variable values
    cout << "Input Package and Hours" << endl; // requesting input
    cin >> package; // declaringinput
    cin >> hours; 
    aHours = 10; 
    bHours = 20;
    bill = 0; 
    aBill = 9.95;
    bBill = 14.95; 
    cBill = 19.95; 
    
    //Map inputs -> outputs
    switch ( package )
    {
        case 'A': 
            bill += aBill;
            if ( hours > aHours )
            {
                bill += ( hours - aHours ) * 2; 
            }
            break;
        case 'B':
            bill += bBill;
            if ( hours > bHours )
            {
                bill += ( hours - bHours ) * 1; 
            }
            break;
        case 'C': 
            bill += cBill;
            break;
    }
    
    //Display the outputs
    cout << "Bill = $ " << bill; 

    //Exit stage right or left!
    return 0;
}
