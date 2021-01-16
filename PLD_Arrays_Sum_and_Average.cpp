#include <iostream>
/*
Created by Theron Adrianne Bueno
January 16, 2021
Subject: Programming Logic and Design (CPE 0112.1) - Pamantasan ng Lungsod ng Maynila (PLM)
Task: Find the sum and average of all elements in an array.
*/
using namespace std;

int main()
{
    int arrSize = 0; // initial value to avoid random values
    double sum, average = 0.0; //datatype is double, to account decimal values
    cout << "Find the sum and average of all elements in an array." << endl << endl;
    cout << "=====================================================================" << endl;
    cout << "Input the number of elements to be stored in the array: ";
    cin >> arrSize; //store user input as array size of 'array1'
    int array1[arrSize];
    for (int i=0; i<arrSize; i++)
    {
        cout << "Input value for element "<< i << ": ";
        cin >> array1[i];
        sum = sum + array1[i];//sum is equal to last value of 'sum' + the new user input which is also stored in array index
    }
    average = sum / arrSize;
    cout << "\nThe sum of all elements stored in the array is: " << sum << endl;
    cout << "The average of all elements stored in the array is: " << average << endl;
    return 0;
}
