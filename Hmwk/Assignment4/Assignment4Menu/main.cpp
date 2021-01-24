/* 
 * File:   main.cpp
 * Author: Elijah De Vera
 * Created on January 23, 2021, 12:36 AM
 * Purpose: Menu for all assignments in assignment 4
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const float CVLITER = 0.264179f; // constant of liters to gallon
//Math, Science, Universal, Conversion, High Dimensioned Arrays

//Function Prototypes
float mpg ( float, float );
float infRate ( float, float ); 
float calcInf ( float, float );
float twoPar ( float, float );          // 2 parameter function
float threePar ( float, float, float ); // 3 parameter function

//Execution Begins Here
int main(int argc, char** argv) {
    string choice;
    
    cout<<"Type 1 for sum problem"<<endl;
    cout<<"Type 2 for min/max problem"<<endl;
    cout<<"Type 3 for rectangle problem"<<endl;
    cout<<"Type 4 for pattern problem"<<endl;
    cout<<"Type 5 for pay in pennies problem"<<endl; 
    cout<<"Type 6 for miles per gallon problem"<<endl;
    cout<<"Type 7 for fuel efficiency problem"<<endl;
    cout<<"Type 8 for inflation problem"<<endl; 
    cout<<"Type 9 for inflation price problem"<<endl;
    cout<<"Type 10 for finding greatest number using 2 and 3 parameters"<<endl;
    cin>>choice; 
    
    if ( choice == "1" )
    {
        //Title Program
        cout<<"Sum Program"<<endl; 
        //Declare Variables
        int num; 
        int sum; 
        //Initialize or input i.e. set variable values
        cin>>num;
        sum=0;
        //Map inputs -> outputs
        for ( int i = 0; i <= num ; i++ )
        {
            sum+=i; 
        }
        //Display the outputs
        cout<<"Sum = "<<sum; 
        //Exit stage right or left!
    }
    if ( choice == "2" )
    {
        //Project title
        cout<<"Min/Max Program"<<endl; 
        //Declare Variables
        int inp; 
        int min; 
        int max; 
        //Initialize or input i.e. set variable values
        cin>>inp;
        min = max = inp; 
        //Map inputs -> outputs
        while ( inp != -99 )
        {
            if ( inp < min )
            {
                min = inp; 
            }
            if ( inp > max )
            {
                max = inp; 
            }
            cin>>inp; 
        }
        //Display the outputs
        cout<<"Smallest number in the series is "<<min<<endl;
        cout<<"Largest  number in the series is "<<max; 
        }
    if ( choice == "3" )
    {
        //project title
        cout<<"Rectangle Program"<<endl; 
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
    }
    if ( choice == "4" )
    {
        //Project Title
        cout<<"Pattern Program"<<endl; 
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
    }
    if ( choice == "5" )
    {
        //Project Title
        cout<<"Pay in Pennies Program"<<endl; 
        //Declare Variables
        int days,
            pennies;
        //Initialize or input i.e. set variable values
        cin>>days; 
        pennies = 1; 
        //Map inputs -> outputs
        if ( days >= 1 )
        {
            for ( int i = 0; i < days; i++ )
            {
                pennies*=2; 
            }
            pennies-=1; 
        }
        //Display the outputs
        cout<<setprecision(2)<<fixed;
        cout<<"Pay = $"<<setw(0)<<pennies/100.0; 
    }
    if ( choice == "6" )
    {
        //Project Title
        cout<<"Miles per gallon program"<<endl; 
        //Declare Variables
        float liter,
              miles; 
        string answer;
        do 
        {
            cout<<"Enter number of liters of gasoline:"<<endl<<endl; 
            cout<<"Enter number of miles traveled:"<<endl<<endl;
            cin>>liter; 
            cin>>miles; 
            cout<<"miles per gallon:"<<endl; 
            cout<<setprecision(2)<<fixed<<mpg(liter,miles)<<endl; 
            cout<<"Again:"<<endl; 
            cin>>answer; 
            if (answer == "y")
            {
                cout<<endl; 
            }
        } while ( answer == "y" );
        //Exit stage right or left!
        return 0;
    }
    if ( choice == "7" ) 
    {
        //Project title
        cout<<"Fuel efficiency program"<<endl; 
        //Declare Variables
        float liter1,
              miles1,
              liter2,
              miles2; 
        string answer; 
        //Map inputs -> outputs
        do 
        {
            cout<<"Car 1"<<endl;
            cout<<"Enter number of liters of gasoline:"<<endl; 
            cout<<"Enter number of miles traveled:"<<endl;
            cin>>liter1; 
            cin>>miles1; 
            cout<<"miles per gallon: "<<setprecision(2)<<fixed<<mpg(liter1,miles1)<<endl<<endl; 
            cout<<"Car 2"<<endl;
            cout<<"Enter number of liters of gasoline:"<<endl; 
            cout<<"Enter number of miles traveled:"<<endl;
            cin>>liter2; 
            cin>>miles2; 
            cout<<"miles per gallon: "<<setprecision(2)<<fixed<<mpg(liter2,miles2)<<endl<<endl; 
            if ( mpg(liter1,miles1) > mpg(liter2,miles2) )
            {
                cout<<"Car 1 is more fuel efficient"<<endl<<endl; 
            }
            else
            {
                cout<<"Car 2 is more fuel efficient"<<endl<<endl; 
            }
            cout<<"Again:"<<endl; 
            cin>>answer; 
            if (answer=="y")
            {
                cout<<endl; 
            }
        } while ( answer == "y" );
    }
    if ( choice == "8" )
    {
        //Project title 
        cout<<"Inflation rate program"<<endl; 
        //Declare Variables
        float nPrice, // new price
              oPrice; // old price
        string answer; // input
        //Map inputs -> outputs
        do 
        {
            cout<<"Enter current price:"<<endl;
            cout<<"Enter year-ago price:"<<endl;
            cin>>nPrice;
            cin>>oPrice;
            cout<<"Inflation rate: "<<setprecision(2)<<fixed
                    <<infRate(nPrice,oPrice)*100<<"%\n\n"; 
            cout<<"Again:"<<endl;
            cin>>answer;
            if ( answer == "y" )
            {
                cout<<endl; 
            }
        }while ( answer == "y" );
    }
    if ( choice == "9" )
    {
        //project menu
        cout<<"Inflation rate prices program"<<endl;
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
    }
    if ( choice == "10" )
    {
        //project title
        cout<<"Two and Three parameter program"<<endl; 
         //Declare Variables
        float inp1,
              inp2,
              inp3; 

        //Initialize or input i.e. set variable values
        cout<<"Enter first number:"<<endl<<endl;
        cout<<"Enter Second number:"<<endl<<endl;
        cout<<"Enter third number:"<<endl<<endl;
        cin>>inp1;
        cin>>inp2;
        cin>>inp3;

        //Display the outputs
        cout<<"Largest number from two parameter function:"<<endl;
        cout<<twoPar(inp1,inp2)<<endl<<endl;

        cout<<"Largest number from three parameter function:"<<endl;
        cout<<threePar(inp1,inp2,inp3)<<endl; 
    }
    if ( choice < "1" || choice > "10" )
    {
        cout<<"Not an option"<<endl;
    }
    return 0;
}
//choice 6/7 function
float mpg ( float liter, float miles )
{
    float gallons, mpg; 
    gallons = liter * CVLITER; 
    mpg = miles/gallons; 
    return mpg; 
}
//choice 8/9 function
float infRate ( float newP, float oldP )
{
    float infl; // inflation
    infl = ((newP-oldP)/oldP); 
    return infl; 
}
//choice 9 function
float calcInf( float inf, float price )
{
    float calcP;
    calcP = (inf * price)+price; 
    return calcP; 
}
//choice 10 functions
float twoPar ( float num1, float num2 )
{
    float max; 
    max = 0; 
    if ( num1 > num2 )
    {
        max = num1; 
    }
    else 
    {
        max = num2; 
    }
    return max; 
}
float threePar ( float num1, float num2, float num3 )
{
    float max; 
    max = 0; 
    if ( num1 > num2 && num1 > num3 )
    {
        max = num1; 
    }
    else if ( num2 > num1 && num2 > num3 )
    {
        max = num2; 
    }
    else if ( num3 > num1 && num3 > num2 )
    {
        max = num3; 
    }
    return max; 
}