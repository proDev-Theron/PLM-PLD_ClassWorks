#include <iostream>
/*
Created by Theron Adrianne Bueno
January 16, 2021
Subject: Programming Logic and Design (CPE 0112.1) - Pamantasan ng Lungsod ng Maynila (PLM)
Task: Write a program to find the largest element in the array.
*/
using namespace std;

int main()
{
    int arrSize = 0; // initial value to avoid random values
    int highest = 0; // variable to store the current largest value

    cout << "Find the largest element in the array" << endl << endl;
    cout << "=====================================================================" << endl;
    cout << "Input the number of elements to be stored in the array";
    cin >> arrSize; //store user input as array size of 'array1'
    int array1[arrSize];
    cout << "\nInput " << arrSize << " elements in the array: \n" << endl;
    for (int i=0; i<arrSize; i++)
    {
        cout << "Input value for element "<< i << ": ";
        cin >> array1[i];
    }
    highest = array1[0]; //Let the first input be the highest number. Let this be a reference point.
    for(int i=1; i<arrSize; i++) //start with 1 because index 0 is the current value of 'highest'
    {
        //Loops through each element of the array and do the comparison.
        if(array1[i] >= highest) //If this is true, the value of 'array1[i]' will be the new value of highest
        {
            highest = array1[i];
        }
    }
    cout << "\nThe largest element in the array is: " << highest ;
}
