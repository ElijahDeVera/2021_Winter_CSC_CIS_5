/* 
 * File:   main.cpp
 * Author: Elijah De Vera
 * Created on January 14, 2021, 12:36 PM
 * Purpose:  checks and balances
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
    
    cout << "Monthly Bank Fees" << endl; // title of project
    
    //Set the random number seed
    
    //Declare Variables
    float check1, 
          check2, 
          check3, 
          check4,
          
          charge,
          balance,
          newBal,
          checks,
          cFee,
          monFee,
          lowBal;
    
    //Initialize or input i.e. set variable values
    check1 = .10;
    check2 = .08;
    check3 = .06;
    check4 = .04;
    cout << "Input Current Bank Balance and Number of Checks" << endl; // receiving input
    cin >> balance; // declaring input
    newBal = balance;
    cin >> checks;
    cFee = 0; 
    monFee = 10;
    lowBal = 15; 
    
    //Map inputs -> outputs
    if ( balance < 400 || balance > 0 ) // conditional if balance is less than 400
    {
        newBal -= lowBal; 
    }
    
    if ( balance > 0 )
    {
        newBal -= monFee; // montly fee
        
        if ( checks < 20 && checks > 0 ) // less than 20 checks
        {
            newBal -= checks * check1;
            cFee += checks * check1;
        }
        else if ( checks >= 20 && checks < 40 ) // 20 <= checks < 40
        {
            newBal -= checks * check2; 
            cFee += checks * check2; 
        }
        else if ( checks >= 40 && checks < 60 )// 40 <= checks < 60 
        {
            newBal -= checks * check3; 
            cFee += checks * check3; 
        }
        else if ( checks >= 60 )// checks > 60 
        {
            newBal -= checks * check4;
            cFee += checks * check4; 
        }
    }
    
    //Display the outputs
    if ( balance > 0 )
    {
        cout << setprecision(2) << fixed; 
        cout << "Balance     $" << setw(9) << right << balance << endl;
        cout << "Check Fee   $" << setw(9) << right << cFee << endl;
        cout << "Monthly Fee $" << setw(9) << right << monFee << endl;
        cout << "Low Balance $" << setw(9) << right << lowBal << endl;
        cout << "New Balance $" << setw(9) << right <<newBal;  
    }
    else 
    { 
        cout << "Low Balance";
    }
    
    //Exit stage right or left!
    return 0;
}
