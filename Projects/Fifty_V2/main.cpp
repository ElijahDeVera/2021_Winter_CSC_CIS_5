/* 
 * File: main.cpp
 * Author: Elijah De Vera
 * Date: February 02, 2021
 * Purpose: Project 1 Dice Game (fifty)
 * Version: 2 
 */

//Version 2 now implements instructions, play again feature, amount of games

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
#include <cstdlib> 
#include <ctime>
using namespace std;

//Execution Begins Here
int main(int argc, char** argv) {
    
    cout<<"Hello, This is the Dice Game called fifty."<<endl;
    
    //Declare variables or constants here
    //7 characters or less
    char p1Dice1, // player 1 dice 1
         p1Dice2, // player 1 dice 2
         p2Dice1, // player 2 dice 1
         p2Dice2, // player 2 dice 2
         help,    // player instructions
         inp;     // play again feature

    int p1score, // player 1 score 
        p2score, // player 2 score
        games;
    
    string rules;// string for rules
    
    float p1win, // player 1 win rate
          p2win; // player 2 win rate

    //Uses current time as seed for random generator
    srand(time(0)); 
  
    //Initializing variables
    rules = "This program will simulate the dice game Fifty which requires "
            "2 players with each player taking turns to roll 2 die. \n"
            "The goal of Fifty is to be the first player to reach 50 points. "
            "You get points by rolling doubles. \n"
            "All doubles except 3s and 6s score 5 points. Double 6s are worth"
            "25 points and double 3s wipe out the players entire score \n"
            "and the player must start again at 0. Non-double rolls are 0 "
            "points.";
    
    //Asking user if they need instructions on how to play
    cout<<"Would you like me to explain the rules? (y/n)"<<endl;
    cin>>help;
    switch(help){
        case 'y':
            cout<<endl;
            cout<<rules<<endl<<endl;
            break;
    }
    
    //Process inputs  - map to outputs here 
    cout<<"Would you like to play? (y/n)"<<endl;
    cin>>inp;
    while( inp == 'y' ){
        cout<<"How many games would you like to play?"<<endl;
        cin>>games;
        for ( int i=1; i<=games; i++ ){
            cout<<"-----------Round "<<i<<"----------"<<endl<<endl;

            //resets score each round
            p1score=0;
            p2score=0;

            do{
                cout<<"Player 1 dice roll"<<endl; // rolling first player pair of dice
                p1Dice1=rand()%6+1;
                p1Dice2=rand()%6+1;
                cout<<"Die 1: "<<static_cast<int>(p1Dice1)<<endl
                    <<"Die 2: "<<static_cast<int>(p1Dice2)<<endl;
                //dice rolls must equal to each other in order to score
                if ( p1Dice1==p1Dice2 ){
                    if ( p1Dice1!=3 && p1Dice1!=6 ){ //doesnt roll a pair of 3 or 6
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
                    <<"Die 2: "<<static_cast<int>(p2Dice2)<<endl;
                //dice rolls must equal to each other in order to score
                if ( p2Dice1==p2Dice2 ){
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

                cout<<endl;
                cout<<"Player 1 points: "<<p1score<<endl;
                cout<<"Player 2 points: "<<p2score<<endl<<endl;

            }while ((p1score<50 && p2score<50) && i<=games);

            if ( p1score>p2score ){
                cout<<"Congratulations! Player 1 is the winner!"<<endl<<endl;
            }
            else{
                cout<<"Congratulations! Player 2 is the winner!"<<endl<<endl;
            }
        }
            //play again feature
            cout<<"Would you like to play again? (y/n)"<<endl<<endl;
            cin>>inp;
    }
    //message for the end of the game
    cout<<endl<<"Goodbye";
    //Exit stage left
    return 0;
}

