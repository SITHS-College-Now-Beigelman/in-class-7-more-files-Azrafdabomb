// Azraf Hossain
// Lab 7
// 11/3/24

#include <iostream>
#include <string> 
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

int main() // function so the code can run
{
    // declaring variables
    ifstream inFile;
    ofstream outFile;
    double score1;
    double score2;
    double score3;
    string name;
    string player;

    // opens these files
    inFile.open("ingame_scores.txt");
    outFile.open("outgame_scores.txt");

    for(int i=1; i<=3;i++) // for our three players
    {
        inFile >> player >> name; // reads player and name
        outFile << player << name << endl; // outputs them

        inFile >> score1 >> score2 >> score3; // reads all scores
        double average = score1*5; // computes variable average
        outFile << "Average: " << average << endl; // outputs it

        // if the average lies between these segments, output the coressponding text
        if (average >= 0 && average < 1000)
            outFile << "Beginner - Keep practicing! " << endl;
        else if (average >= 1000 &&  average < 1500)
            outFile << "Intermediate" << endl;
        else if (average >= 1500 &&  average < 1800)
            outFile << "Advanced - Good Job!" << endl;
        else if (average >= 1800 &&  average < 2000)
            outFile << "Master - Good job!" << endl;
        else if (average > 2000)
            outFile << "Congratulations! You are an Expert!" << endl;
        else 
            outFile << "Error" << endl;
    }
    
    // closes the files
    inFile.close();
    outFile.close();


    return 0; 
}

/*
Player1Azraf
Average: 500
Beginner - Keep practicing! 
Player2Amanda
Average: 1200
Intermediate
Player3Kanye
Average: 2500
Congratulations! You are an Expert!
*/