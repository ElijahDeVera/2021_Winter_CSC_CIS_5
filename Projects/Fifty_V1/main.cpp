/* 
 * File: main.cpp
 * Author: Elijah De Vera
 * Date: February 02, 2021
 * Purpose: Project 1 Dice Game (fifty)
 * Version: 1
 */

//System Libraries - Post Here
#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

//Execution Begins Here
int main(int argc, char** argv) {
    
    cout<<"Hello This is the Dice Game called fifty."<<endl;
    
    //Declare variables or constants here
    //7 characters or less
    char p1Dice1, // player 1 dice 1
         p1Dice2, // player 1 dice 2
         p2Dice1, // player 2 dice 1
         p2Dice2; // player 2 dice 2

    int p1score, // player 1 score 
        p2score; // player 2 score
    
    //Initialize or input data here
    p1score=0;
    p2score=0;
    
    //Uses current time as seed for random generator
    srand(time(0)); 
  
    //Process inputs  - map to outputs here 
    while ( p1score<50 && p2score<50 ){
        cout<<"Player 1 dice roll"<<endl; // rolling first player pair of dice
        p1Dice1=rand()%6+1;
        p1Dice2=rand()%6+1;
        cout<<"Die 1: "<<static_cast<int>(p1Dice1)<<endl
            <<"Die 2: "<<static_cast<int>(p1Dice2)<<endl<<endl;
        //dice rolls must equal to each other in order to score
        if ( p1Dice1==p1Dice2 ){
            if ( p1Dice1!=3 && p1Dice1!=6 ){ //doesnt roll a pair of 3 or 6
                p1score+=5;
            }
            else if ( p1Dice1==3 ){ // rolls a pair of 3s
                p2score=0;
            }
            else if ( p1Dice1==6 ){ // rolls a pair of 6s
                p1score+=25;
            }
        }
        
        cout<<"Player 2 dice roll"<<endl; // rolling first player pair of dice
        p2Dice1=rand()%6+1;
        p2Dice2=rand()%6+1;
        cout<<"Die 1: "<<static_cast<int>(p2Dice1)<<endl
            <<"Die 2: "<<static_cast<int>(p2Dice2)<<endl<<endl;
        //dice rolls must equal to each other in order to score
        if ( p2Dice1==p2Dice2 ){
            if ( p2Dice1!=3 && p2Dice1!=6 ){ //doesnt roll a pair of 3 or 6
                p2score+=5;
            }
            else if ( p2Dice1==3 ){ // rolls a pair of 3s
                p1score=0;
            }
            else if ( p2Dice1==6 ){ // rolls a pair of 6s
                p2score+=25;
            }
        }
    }

    cout<<"Player 1 points: "<<p1score<<endl;
    cout<<"Player 2 points: "<<p2score<<endl;
    
    //Exit stage left
    return 0;
}

