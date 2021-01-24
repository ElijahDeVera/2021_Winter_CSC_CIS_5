/* 
 * File:   
 * Author: Elijah De Vera
 * Created on January 21, 2021
 * Purpose:  inflation problem and calculations
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
float infRate ( float, float ); 
float calcInf ( float, float );

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float nPrice,      // new price
          oPrice,     // old price
          inflation,  // inflation
          yrPrice;    //price after 1yr
    string answer;    // input
    
    //Initialize or input i.e. set variable values
    inflation = 0; 
    yrPrice = 0; 
    
    //Map inputs -> outputs
    do 
    {
        cout<<"Enter current price:"<<endl;
        cout<<"Enter year-ago price:"<<endl;
        cin>>nPrice;
        cin>>oPrice;
        inflation = infRate(nPrice,oPrice);
        cout<<"Inflation rate: "<<setprecision(2)<<fixed<<inflation*100<<"%\n\n"; 
        
        yrPrice = calcInf(inflation,nPrice);
        cout<<"Price in one year: $"<<yrPrice<<endl; 
        cout<<"Price in two year: $"<<calcInf(inflation,yrPrice)<<endl<<endl;
        
        cout<<"Again:"<<endl;
        cin>>answer;
        if ( answer == "y" )
        {
            cout<<endl; 
        }
        
    }while ( answer == "y" );
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

//function to compute the rate of Inflation
float infRate ( float newP, float oldP ) 
{
    float infl; // inflation
    infl = ((newP-oldP)/oldP); 
}

//function to calculate inflation for the next year
float calcInf( float inf, float price )
{
    float calcP;
    calcP = (inf * price)+price; 
    return calcP; 
}
