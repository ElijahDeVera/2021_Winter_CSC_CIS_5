/* 
 * Author: Elijah De Vera
 * Created on January 23,2021
 * Purpose: average
 */

//System Libraries
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void getScre(int &,int &,int &,int &,int &);
float calcAvg(int,int,int,int,int);
int fndLwst(int,int,int,int,int);
//Execution Begins Here
int main(int argc, char** argv) {
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
    //Exit stage right!
    return 0;
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
