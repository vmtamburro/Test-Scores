#include <iostream>
using namespace std;


bool selectionSort(double *doublePtr, int numScores)
{
    bool ret = true;
    double minValue;
    int minIndex;

    for (int start = 0; start < (numScores - 1); start++)
    {
        minIndex = start;
        minValue = *(doublePtr + start);
        for (int i = (start + 1); i < numScores; i++)
        {
            if (doublePtr[i] < minValue)
            {
                minIndex = i;
                minValue = *(doublePtr + i);
            }
        }
        swap(*(doublePtr + minIndex), *(doublePtr + start));
    }

    for(int index = 0; index <numScores; index++ )
    {
        cout << *(doublePtr + index) << ", ";
    }

    return ret;

}

double averageScore(double *doublePtr, int numScores)
{
    double total;
    double average;

    for (int i = 0; i < numScores; i++)
    {
        total += *(doublePtr + i);
    }

    average = total / numScores;

    return average;
}
