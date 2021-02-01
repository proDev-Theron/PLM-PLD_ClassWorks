#include<iostream>
using namespace std;
/*
Created by Theron Adrianne Bueno
January 31, 2021
Subject: Programming Logic and Design (CPE 0112.1) - Pamantasan ng Lungsod ng Maynila (PLM)
Task: Demonstrate Bubble Sort
*/

int arr[] = {33, 42, 35, 50, 20, 16, 45, 26, 5, 72, 18}; //create an array with given number of elements
int n = sizeof(arr)/sizeof(arr[0]); //get array size
int stepsTaken = 0; // Variable to store the number of iterations to complete the sort

//Function for printing the elements of array nicely
void display(int *array, int size)
{
    for(int i = 0; i<size; i++)
        cout << array[i] << " ";
    cout << endl;
}

void bubbleSort(int* array, int size)
{
    bool isSorted = false;
    int lastUnsorted = n-1; //Because bubble sort pushes the element with the highest value to the last index, it would be faster if the
                            //program won't sort anymore the sorted values
    while(!isSorted)
    {
        isSorted = true;

        for (int i = 0; i < lastUnsorted; i++)
        {
            if (arr[i] > arr[i+1])
            {
                swap(arr[i],arr[i+1]);
                isSorted = false;
                stepsTaken++; //Count the number of iterations
                display(arr, n); //Print each iteration
            }
        }
        lastUnsorted--;
    }
}

int main()
{
    cout << "Array before Sorting: ";
    display(arr, n);
    bubbleSort(arr, n);
    cout << "\nArray after Sorting:     ";
    display(arr, n);
    cout << "\n\nNumber of steps taken: " << stepsTaken << " \n\n";
}
