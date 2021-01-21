/* 
 * File:   main.cpp
 * Author: Elijah De Vera
 * Created on January 14, 2021, 12:36 PM
 * Purpose: Conditionals and if statements
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
    
    cout << "Book Worm Points" << endl;
    
    //Set the random number seed
    
    //Declare Variables
    int books, 
        points;
    
    //Initialize or input i.e. set variable values
    cout << "Input the number of books purchased this month." << endl; // getting input from User
    cin >> books;
    
    //Map inputs -> outputs
    if ( books == 0 )
    {
        points = 0;
    }
    else if ( books == 1 )
    {
        points = 1;
    }
    else if ( books == 2 )
    {
        points = 15;
    }
    else if ( books == 3 )
    {
        points = 30;
    }
    else if ( books > 4 )
    {
        points = 60;
    }
    
    //Display the outputs
    cout << "Books purchased = " << setw(2) << right << books << endl;
    cout << "Points earned   = " << setw(2) << right << points;
    
    //Exit stage right or left!
    return 0;
}
