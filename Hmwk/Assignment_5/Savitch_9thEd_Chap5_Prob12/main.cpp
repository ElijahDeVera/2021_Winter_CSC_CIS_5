/* 
 * File:   main.cpp
 * Author: Elijah De Vera
 * Created on January 26, 2021
 * Purpose:  12 hour notation appoinments
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
    //Set the random number seed
    
    //Declare Variables
    int hour, 
        min,
        wTime,
        fHour,
        fMin,
        mHolder,
        hHolder; 
    
    string iampm,
           fampm,
           inp; 
        
    //Initialize or input i.e. set variable value
    //Map inputs -> outputs
    do 
    {
        cout<<"Enter hour:"<<endl<<endl;
        cin>>hour;
        fHour=hour; 
        cout<<"Enter minutes:"<<endl<<endl;
        cin>>min;
        fMin=min;
        cout<<"Enter A for AM, P for PM:"<<endl<<endl;
        cin>>iampm; 
        cout<<"Enter waiting time:"<<endl<<endl;
        cin>>wTime;
        
        if ( iampm == "A" )
        {
            iampm = "AM";
        }
        else if ( iampm == "P" )
        {
            iampm = "PM";
        }
        
        // adding minutes to the time
        if ( wTime+min > 60 )
        {
            hHolder=(wTime/60);
            fHour+=hHolder; 
            mHolder=wTime-(hHolder*60);
            if ( fMin+mHolder > 60 )
            {
                fHour++;
                fMin+=mHolder-60; 
            }
            else
            {
                fMin+=mHolder; 
            }
        }
        
        // adjusting to 12 hour notation
        if ( fHour > 12 )
        {
            fHour-=12;
            if ( iampm == "AM" )
            {
                fampm = "PM";
            }
            else if ( iampm == "PM" )
            {
                fampm = "AM";
            }
        }
        else
        {
            if ( iampm == "AM" )
            {
                fampm = "AM";
            }
            else
            {
                fampm = "PM";
            }
        }

        cout<<setfill('0')<<setw(2)<<fixed;
        cout<<"Current time = "             <<setfill('0')<<setw(2)<<hour<<":"<<setfill('0')<<setw(2)<<min<<" "<<iampm<<endl; 
        cout<<"Time after waiting period = "<<setfill('0')<<setw(2)<<fHour<<":"<<setfill('0')<<setw(2)<<fMin<< " "<<fampm<<endl<<endl; 
        cout<<"Again:"<<endl;
        cin>>inp; 
        if ( inp == "y" )
        {
            cout<<endl; 
        }
    }while ( inp == "y" );
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
