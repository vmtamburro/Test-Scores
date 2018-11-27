#include <iostream>
#include "prototype.h"
/*
Write a program that dynamically allocates an array large
enough to hold a user-defined number of test scores. Once all
the scores are entered, the array should be passed to a function
that sorts them in ascending order. Another function should be called
that calculates the average score. The program should display the sorted
list of scores and averages with appropriate headings. Use pointer
notation rather than array notation whenever possible.

Input validation- do not accept negative numbers for test scores.
*/

using namespace std;


int main()
{
    int numScores;
    double average;

    do
    {
    cout << "Enter the number of scores you would like to enter: ";
    cin >> numScores;

    if (numScores <0)
        cout << "Error: Negative number entered.";
    cout << endl;

    } while (numScores < 0);

    double testScores[numScores];


    cout << "Enter the scores." <<endl;

    for(int index = 0; index < numScores; index ++)
    {
        cout << "Score " << (index + 1) << ": ";
        cin >> testScores[index];
    }



    cout << "The scores you entered are: "<<endl;

    for(double val : testScores)
        cout << val << ", ";
    cout << endl;

    cout << "Those scores in ascending order are: "<<endl;
    selectionSort(testScores, numScores);
    cout << endl;

    average = averageScore(testScores, numScores);

    cout << "The average of all the scores is: " <<endl;
    cout << average;


}
