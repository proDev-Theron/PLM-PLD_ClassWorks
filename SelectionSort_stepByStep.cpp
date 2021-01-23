#include<iostream>
/*
Created by Theron Adrianne Bueno
January 23, 2021
Subject: Programming Logic and Design (CPE 0112.1) - Pamantasan ng Lungsod ng Maynila (PLM)
Task: Demonstrate Selection Sort
*/
using namespace std;
int arr[] = {64,19,45,88,12,55,23,67,89,90,11,56};           //create an array with given number of elements
int n = sizeof(arr)/sizeof(arr[0]); //get array size
void swapping(int &a, int &b)           //swap the content of a and b
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void display(int *array, int size)
{
    for(int i = 0; i<size; i++)
        cout << array[i] << " ";
    cout << endl;
}
void selectionSort(int *array, int size)
{
    int i, j, imin;
    for(i = 0; i<size-1; i++)
    {
        imin = i;   //get index of minimum data
        for(j = i+1; j<size; j++)
            if(array[j] < array[imin])
                imin = j;
        //placing in correct position
        swap(array[i], array[imin]);
        display(arr, n);
    }
}
int main()
{
    cout << "Array before Sorting: ";
    display(arr, n);
    selectionSort(arr, n);
    cout << "Array after Sorting: ";
    display(arr, n);
}
