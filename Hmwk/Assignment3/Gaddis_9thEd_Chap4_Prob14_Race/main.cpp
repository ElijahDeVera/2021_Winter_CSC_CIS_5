/* 
 * File:   main.cpp
 * Author: Elijah De Vera
 * Created on January 14, 2021, 12:36 PM
 * Purpose:  comparing race times
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
    
    cout << "Race Ranking Program" << endl; // project title    
    
    //Set the random number seed
    
    //Declare Variables
    string name1, 
           name2,
           name3;
           
    int time1,
        time2,
        time3;
    
    //Initialize or input i.e. set variable values
    cout << "Input 3 Runners" << endl;
    cout << "Their names, then their times" << endl;
    cin >> name1;
    cin >> time1; 
    cin >> name2; 
    cin >> time2; 
    cin >> name3; 
    cin >> time3; 

    //Map inputs -> outputs
    if ( time1 < time2 && time1 < time3 )
    {
        cout << name1 << "\t" << setw(3) << time1 << endl;
        if ( time2 < time3 )
        {
            cout << name2 << "\t" << setw(3) << time2 << endl;
            cout << name3 << "\t" << setw(3) << time3; 
        }
        else
        {
            cout << name3 << "\t" << setw(3) << time3 << endl;
            cout << name2 << "\t" << setw(3) << time2; 
        }
    }
    
    if ( time2 < time1 && time2 < time3 )
    {
        cout << name2 << "\t" << setw(3) << time2 << endl;
        if ( time1 < time3 )
        {
            cout << name1 << "\t" << setw(3) << time1 << endl;
            cout << name3 << "\t" << setw(3) << time3; 
        }
        else
        {
            cout << name3 << "\t" << setw(3) << time3 << endl;
            cout << name1 << "\t" << setw(3) << time1; 
        }
    }
    
    if ( time3 < time1 && time3 < time2 )
    {
        cout << name3 << "\t" << setw(3) << time3 << endl;
        if ( time1 < time2 )
        {
            cout << name1 << "\t" << setw(3) << time1 << endl;
            cout << name2 << "\t" << setw(3) << time2; 
        }
        else
        {
            cout << name2 << "\t" << setw(3) << time2 << endl;
            cout << name1 << "\t" << setw(3) << time1; 
        }
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
