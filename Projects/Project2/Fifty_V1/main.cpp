/* 
 * File: main.cpp
 * Author: Elijah De Vera
 * Date: February 13, 2021
 * Purpose: Project 2 Dice Game (fifty)
 * Version: 1
 */

//Version 1 with functions

//System Libraries - Post Here
#include <iostream> //input output library
#include <iomanip>  //formatting
#include <cstdlib>  //random srand to set the seed
#include <ctime>    //time for rand
#include <cmath>    //math functions
#include <fstream>  //file I/O
using namespace std;

//Global Constants
const float PERCENT=100.0f; //conversion to percent;

//Function Prototypes
void pRules(char); //print rules
bool input(char);
void play(int,float&,float&,float&,float&,int&);
int peff(int,float);
int pwr(float,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Heading
    cout<<"Hello, This is the Dice Game called Fifty."<<endl;
    
    //Declare variables or constants here
    //7 characters or less
    char help,
         inp;
    int rounds,
        turns;
    float p1w,
          p2w,
          p1Doub,
          p2Doub,
          p1eff,
          p2eff,
          p1wr,
          p2wr;
    
    //Initializing variables
    p1Doub=p2Doub=turns=0;

    //Asking user if they need instructions on how to play
    cout<<"Would you like me to explain the rules? (y/n)"<<endl;
    cin>>help;
    pRules(help);
    
    //Process inputs  - map to outputs here 
    cout<<endl<<"Would you like to play? (y/n)"<<endl;
    cin>>inp;//receiving input
    while(input(inp)){
        //Requesting for rounds
        cout<<endl<<"How many rounds would you like to play?"<<endl;
        cin>>rounds;
        p1w=p2w=0;//resets every game
        play(rounds,p1w,p2w,p1Doub,p2Doub,turns);
        p1eff=peff(p1Doub,turns);
        p2eff=peff(p2Doub,turns);
        p1wr=pwr(p1w,rounds);
        p2wr=pwr(p2w,rounds);
        
        //outputs for all statistics calculated
        cout<<"****************************************"<<endl;
        cout<<"***********RESULTS/STATISTICS***********"<<endl;
        cout<<"****************************************"<<endl;
        cout<<setprecision(2)<<fixed;   //formatting for percentages
        cout<<"____________EFFICIENCY ROLLS____________"<<endl;
        cout<<"(The rate of doubles rolled in all games)"<<endl;
        cout<<"Player 1: "<<p1eff<<"%"<<endl;
        cout<<"Player 2: "<<p2eff<<"%"<<endl;
        cout<<"________________________________________"<<endl;
        cout<<"****************************************"<<endl;
        cout<<"****************************************"<<endl;
        cout<<"****************************************"<<endl;
        cout<<"_________________WIN RATE_______________"<<endl;
        cout<<"Total Games: "<<noshowpoint<<rounds<<endl;
        cout<<"Player 1 total wins: "<<noshowpoint<<static_cast<int>(p1w)<<endl;
        cout<<"Player 2 total wins: "<<noshowpoint<<static_cast<int>(p2w)<<endl;
        cout<<"Player 1 win rate: "<<p1wr<<"%"<<endl;
        cout<<"Player 2 win rate: "<<p2wr<<"%"<<endl;
        cout<<"________________________________________"<<endl;
        cout<<"****************************************"<<endl;
        cout<<"****************************************"<<endl;
        cout<<"****************************************"<<endl<<endl;
        
        //Play Again feature
        cout<<"Would you like to play again? (y/n)"<<endl;
        cin>>inp;
        input(inp);
    }
    
    //Closing Statement
    cout<<"GoodBye"<<endl;
    return 0;
}

int pwr(float pw, int rounds){
    int pwr;
    pwr=pw/rounds*PERCENT;
    return pwr;
}

int peff(int wins, float turns){
    int peff;
    peff=wins/turns*PERCENT;
    return peff;
}

void play(int rounds, float& p1w, float& p2w, 
            float& p1Doub, float& p2Doub, int& turns){
    //Declaring Variables
    int p1score, 
        p2score;
    char p1Dice1, 
         p1Dice2,
         p2Dice1, 
         p2Dice2;
    //Processing Outputs
    for ( int i=1; i<=rounds; i++ ){     //will play amount of games user has input
        cout<<"-----------Round "<<i<<"----------"<<endl<<endl;
        //resets score each round
        p1score=0;
        p2score=0;
        do{
            cout<<"Player 1 dice roll"<<endl; // rolling first player pair of dice
            p1Dice1=rand()%6+1;
            p1Dice2=rand()%6+1;
            cout<<"Die 1: "<<static_cast<int>(p1Dice1)<<endl
                <<"Die 2: "<<static_cast<int>(p1Dice2)<<endl; //outputs die values
            //dice rolls must equal to each other in order to score
            if ( p1Dice1==p1Dice2 ){
                p1Doub++;
                if ( p1Dice1!=3 && p1Dice1!=6 ){ //doesn't roll a pair of 3 or 6
                    p1score+=5;
                }
                else if ( p1Dice1==3 ){ // rolls a pair of 3s
                    p2score=0;
                    cout<<"Oh no player 2 score is reset to 0!!!"<<endl;
                }
                else if ( p1Dice1==6 ){ // rolls a pair of 6s
                    p1score+=25;
                }
            }

            cout<<"Player 2 dice roll"<<endl; // rolling first player pair of dice
            p2Dice1=rand()%6+1;
            p2Dice2=rand()%6+1;
            cout<<"Die 1: "<<static_cast<int>(p2Dice1)<<endl
                <<"Die 2: "<<static_cast<int>(p2Dice2)<<endl; //outputs die values
            //dice rolls must equal to each other in order to score
            if ( p2Dice1==p2Dice2 ){
                p2Doub++;
                if ( p2Dice1!=3 && p2Dice1!=6 ){ //doesnt roll a pair of 3 or 6
                    p2score+=5;
                }
                else if ( p2Dice1==3 ){ // rolls a pair of 3s
                    p1score=0;
                    cout<<"Oh no player 1 score is reset to 0!!!"<<endl;
                }
                else if ( p2Dice1==6 ){ // rolls a pair of 6s
                    p2score+=25;
                }
            }
            //displays score every turn
            cout<<endl;
            cout<<"Player 1 points: "<<p1score<<endl;
            cout<<"Player 2 points: "<<p2score<<endl<<endl;
            turns++;
        }while ((p1score<50 && p2score<50) && i<=rounds);
        //displays the winner
        if ( p1score>p2score ){
            cout<<"********"
                  "Congratulations! Player 1 is the winner!"
                  "********"<<endl<<endl;   //displays winner of that game
            p1w++;
        }
        else{
            cout<<"********"
                  "Congratulations! Player 2 is the winner!"
                  "********"<<endl<<endl;   //displays winner of that game
            p2w++;
        }
    }
}

bool input(char inp){
    if(inp=='y'){
        return true;
    }else{
        return false;
    }
}

void pRules(char inp){
    bool read;
    string rules=
            "This program will simulate the dice game Fifty which requires "
            "2 players with each player taking turns to roll 2 die. \n"
            "The goal of Fifty is to be the first player to reach 50 points. "
            "You get points by rolling doubles. \n"
            "All doubles except 3s and 6s score 5 points. Double 6s are worth"
            "25 points and double 3s wipe out the players entire score \n"
            "and the player must start again at 0. Non-double rolls are 0 "
            "points.";
    if(inp=='y'){  //independent if
        read=true;  //setting char input into a boolean 
    }else{
        read=false;
    }
    switch(read){   //switch case for rules output
        case 1:     //reading if boolean is equal to true
            cout<<rules<<endl<<endl;//outputs rules if true
            break;
    }
}
