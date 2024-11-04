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

    inFile.open("ingame_scores.txt");
    outFile.open("outgame_scores.txt");

    for(int i=1; i<+3;i++)
    {
        inFile >> player >> name;
        outFile << player << name << endl;

        inFile >> score1 >> score2 >> score3;
        double average = score1*5;
        outFile << "Average: " << average << endl;

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
    
    inFile.close();
    outFile.close();


    return 0;
}