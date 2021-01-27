/* 
 * File:   main.cpp
 * Author: Elijah De Vera
 * Created on January 26, 2021, 12:36 AM
 * Purpose: Menu for all assignments in assignment 5
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>
#include <math.h>
using namespace std;
//Function Prototypes
void minmax(int, int, int, int&, int& );//Function to find the min and max
int fctrl(int);//Function to write for this problem
bool isPrime(int);//Determine if the input number is prime.
int collatz(int);//3n+1 sequence
int collatz1(int);//3n+1 sequence
void getTime( int&, char, int&, bool& ); // input for time
void convert( int&, int&, char&); // converting time
void output( int&, int&, int&, char); // outputting time
float psntVal( float, float, int ); // receiving present value for the price
void getScre(int &,int &,int &,int &,int &); // receiving score
float calcAvg(int,int,int,int,int); //calculating averages of score
int fndLwst(int,int,int,int,int); // finding the lowest score

int main(int argc, char** argv) {
    string choice;
    cout<<"Type 1 for min max program"<<endl;
    cout<<"Type 2 for factorial program"<<endl;
    cout<<"Type 3 for prime program"<<endl; 
    cout<<"Type 4 for collatz sequence"<<endl;
    cout<<"Type 5 for collatz sequence with output"<<endl; 
    cout<<"Type 6 for the 12 hour notation program"<<endl;
    cout<<"Type 7 for the time converter program"<<end; 
    cout<<"Type 8 for the present value calculator program"<<endl;
    cout<<"Type 9 for the average program"<<end; 
    cin>>choice;
    
    if ( choice == "1" )
    {
       //Declare Variables
        int inp1,
            inp2,
            inp3,
            min,
            max; 
        //Initialize Variables
        cout<<"Input 3 numbers"<<endl; 
        cin>>inp1;
        cin>>inp2;
        cin>>inp3; 
        min = max = inp1; 
        //Output data
        minmax( inp1, inp2, inp3, min, max);  
    }
    if ( choice == "2" )
    {
        //Program TItle
        cout<<"This program calculates the factorial using a function prototype "
                "found in the template for this problem."<<endl;
        //Declare Variables
        int inp;
        //Initialize Variables
        cout<<"Input the number for the function."<<endl; 
        cin>>inp;
        //Output data
        cout<<inp<<"! = "<<fctrl(inp);  
    }
    if ( choice == "3" )
    {
        //Declare Variables
        int inp; 
        //Initialize Variables
        cout<<"Input a number to test if Prime."<<endl; 
        cin>>inp;
        //Output data
        cout<<inp;
        if ( isPrime(inp) == true )
        {
            cout<<" is prime.";
        }
        else 
        {
            cout<<" is not prime.";
        }
    }
    if ( choice == "4" )
    {
        //Declare Variables
        int n;
        //Initialize Variables
        cout<<"Collatz Conjecture Test"<<endl;
        cout<<"Input a sequence start"<<endl;
        cin>>n;
        //Process/Map inputs to outputs
        cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
                collatz(n)<<" steps";
    }
    if ( choice == "5" )
    {
        //Declare Variables
        int n,ns;
        //Initialize Variables
        cout<<"Collatz Conjecture Test"<<endl;
        cout<<"Input a sequence start"<<endl;
        cin>>n;
        //Process/Map inputs to outputs
        ns=collatz1(n);
        //Output data
        cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
                ns<<" steps";
    }
    if ( choice == "6" ) 
    {
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
    }
    if ( choice == "7" )
    {
        //Declare Variables
        int mTime,
            sTime,
            min;
        char c=':',
             inp,
             day;
        bool valid;
        //Project title
        cout<<"Military Time Converter to Standard Time"<<endl;
        cout<<"Input Military Time hh:mm"<<endl;
        //Process/Map inputs to outputs
        do 
        {
            getTime(mTime,c,min,valid);
            if ( valid == true )
            {
                convert(mTime,sTime,day);
                output(mTime,min,sTime,day);
            }
            cout<<"Would you like to convert another time (y/n)"<<endl;
            cin>>inp;
        }while ( inp == 'y' || inp == 'Y' );
    }
    if ( choice == "8" )
    {
        //Declare Variables
    float ftrVal,
          intRate;
    int years; 
    //Project title
    cout<<"This is a Present Value Computation"<<endl; 
    //Initialize Variables
    cout<<"Input the Future Value in Dollars"<<endl; 
    cin>>ftrVal; 
    cout<<"Input the Number of Years"<<endl; 
    cin>>years; 
    cout<<"Input the Interest Rate %/yr"<<endl; 
    cin>>intRate; 
    //Output data
    cout<<setprecision(2)<<fixed<<"The Present Value = $"
            <<psntVal(ftrVal,intRate,years);  
    }
    if ( choice == "9" )
    {
        //Declare Variables
        int s1,
            s2,
            s3,
            s4,
            s5; 
        //Project title
        cout<<setprecision(1)<<fixed;
        cout<<"Find the Average of Test Scores"<<endl; 
        cout<<"by removing the lowest value."<<endl;
        //Initialize Variables
        getScre(s1,s2,s3,s4,s5);
        cout<<"The average test score = "<<calcAvg(s1,s2,s3,s4,s5);
    }
    return 0;
}
void minmax( int inp1, int inp2, int inp3, int& min, int& max)
{
    if ( inp1 > inp2 && inp1 > inp3 )
    {
        max = inp1; 
        if ( inp2 > inp3 )
        {
            min = inp3; 
        }
        else
        {
            min = inp2; 
        }
    }
    if ( inp2 > inp1 && inp2 > inp3 )
    {
        max = inp2; 
        if ( inp1 > inp3 )
        {
            min = inp3; 
        }
        else
        {
            min = inp1; 
        }
    }
    if ( inp3 > inp1 && inp3 > inp2 )
    {
        max = inp3; 
        if ( inp1 > inp2 )
        {
            min = inp2; 
        }
        else
        {
            min = inp1; 
        }
    }
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<<max;
}
int fctrl( int inp )
{
    int sltn = 1; 
    for ( int i = 1; i <= inp; i++ )
    {
        sltn*=i; 
    }
    return sltn; 
}
bool isPrime( int inp )
{
    int counter = 0; 
    
    for ( int i  = 2; i < inp; i++ )
    {
        if ( inp % i == 0 )
        {
            counter++; 
        }
    }
    if ( counter > 0 ) 
    {
        return false; 
    }
    else
    {
        return true; 
    }
}
int collatz( int n )
{
    int steps = 1; 
    while ( n != 1 )
    {
        if ( n % 2 == 0 )
        {
            n /= 2; 
            steps++; 
        }
        else
        {
            n = ( n * 3 + 1 );
            steps++; 
        }
    }
    return steps; 
}
int collatz1( int n )
{
    int steps = 1; 
    while ( n != 1 )
    {
        if ( n % 2 == 0 )
        {
            cout<<n<<", ";
            n /= 2; 
            steps++; 
        }
        else
        {
            cout<<n<<", "; 
            n = ( n * 3 + 1 );
            steps++; 
        }
    }
    cout<<n<<endl; 
    return steps; 
}
float psntVal( float ftrVal, float intRate, int years )
{
    float pValue; 
    pValue = ftrVal/(pow(1+(intRate/100),years));
    return pValue; 
}
//get score Function
void getScre(int & s1,int &s2,int &s3,int &s4,int &s5)
{
    cout<<"Input the 5 test scores."<<endl;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    cin>>s4;
    cin>>s5;
    if ( s2 > 100 || s2 < 0 ){ cout<<"INVALID";
    }
    if ( s1 > 100 || s1 < 0 ){ cout<<"INVALID";
    }
    if ( s3 > 100 || s3 < 0 ){ cout<<"INVALID";
    }
    if ( s4 > 100 || s4 < 0 ){ cout<<"INVALID";
    }
    if ( s5 > 100 || s5 < 0 ){ cout<<"INVALID";
    }
}
//average function
float calcAvg(int test1, int test2, int test3, int test4, int test5)
{
    int average=0;
    average = ((test1+test2+test3+test4+test5)-fndLwst(test1, test2, test3, test4, test5))/4.0;
    return average; 
}
//finding lowest number function
int fndLwst(int score1, int score2, int score3, int score4, int score5)
{
    if(score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5)
        return score1;
    else if(score2 < score1 && score2 < score3 && score2 < score4 && score2 < score5)
        return score2;
    else if(score3 < score1 && score3 < score2 && score3 < score4 && score3 < score5)
        return score3;
    else if(score4 < score1 && score4 < score2 && score4 < score3 && score4 < score5)
        return score4;
    else if(score5 < score1 && score5 < score2 && score5 < score3 && score5 < score4)
        return score5;
}
