/* 
 * File:   main.cpp
 * Author: Elijah De Vera
 * Created on January 14, 2021, 12:36 PM
 * Purpose:  Converting to Roman Numerals
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
    
    cout << "Arabic to Roman numeral conversion." << endl;
    //Declare Variables
    int year,
        n1,
        n10,
        n100,
        n1000;
    string rYear; 
    
    //Initialize or input i.e. set variable values
    cout << "Input the integer to convert." << endl; // requesting input
    cin >> year; // declaring input
    rYear = "";
    n1 = (year) % 10;
    n10 = (year/10) % 10;
    n100 = (year/100) % 10;
    n1000 = (year/1000) % 10; 
    
    
    //Map inputs -> outputs 
    
    // for the thousands place
    if ( n1000 == 1 )
    {
        rYear += "M";
    }
    else if ( n1000 == 2 )
    {
        rYear += "MM";
    }
    else if ( n1000 == 3 )
    {
        rYear += "MMMM";
    }
    
    // for the 100s point
    if ( n100 < 4 )
    {
        for ( int i = 0; i < n100; i++ )
        {
            rYear += "C"; 
        }
    }
    else if ( n100 == 4) 
    {
        rYear += "CD"; 
    }
    else if ( n100 >= 5 && n100 < 9 )
    {
        rYear += "D";
        for ( int i = 0; i < n100 - 5; i++ )
        {
            rYear += "C";
        }
    }
    else if ( n100 == 9 )
    {
        rYear += "CM"; 
    }
    
    // for the 10s point
    if ( n10 < 4 )
    {
        for ( int i = 0; i < n10; i++ )
        {
            rYear += "X";
        }
    }
    else if ( n10 == 4 )
    {
        rYear += "XL";
    }
    else if ( n10 >= 5 && n10 < 9 )
    {
        rYear += "L";
        for ( int i = 0; i < n10 - 5; i++ )
        {
            rYear += "X"; 
        }
    }
    else if ( n10 == 9 )
    {
        rYear += "XC";
    }
    
    // for the ones point
    if ( n1 < 4 ) 
    {
        for ( int i = 0; i < n1; i++ )
        {
            rYear += "I";
        }
    }
    else if ( n1 == 4 )
    {
        rYear += "IV";
    }
    else if ( n1 >= 5 && n1 < 9 )
    {
        rYear += "V";
        for ( int i = 0; i < n1-5; i++ )
        {
            rYear += "I";
        }
    }
    else if ( n1 == 9 )
    {
        rYear += "IX";
    }
    
    //Display the outputs
    if ( year < 1000 || year > 3000 )
    {
        cout << year << " is Out of Range!";
    }
    else 
    {
        cout << year << " is equal to " << rYear;

    }
    //Exit stage right or left!
    return 0;
}
