#include <iostream>
/*
Created by Theron Adrianne Bueno
January 23, 2021
Subject: Programming Logic and Design (CPE 0112.1) - Pamantasan ng Lungsod ng Maynila (PLM)
Task: Demonstrate Insertion Sort
*/
using namespace std;

//fuction declaration
template <class elemType>
void insertionSort(elemType list[], int length);
template <class elemType>
void print(elemType list[], int length);

//initialize array
int intList[] = {64, 19, 45, 88, 12,55, 23, 67, 89, 90, 11, 56};
int sukat = sizeof(intList)/sizeof(intList[0]); //get array size

int main()
{
    cout << "Before sorting, intList: ";
    print(intList, sukat);
    cout << endl;
    insertionSort(intList, sukat);
    return 0;
}

template <class elemType>
void insertionSort(elemType list[], int length)
{
    for (int firstOutOfOrder = 1; firstOutOfOrder < length;
            firstOutOfOrder++)
        if (list[firstOutOfOrder] < list[firstOutOfOrder - 1])
        {
            elemType temp = list[firstOutOfOrder];
            int location = firstOutOfOrder;

            do
            {
                list[location] = list[location - 1];
                location--;
            }
            while (location > 0 && list[location - 1] > temp);
            list[location] = temp;
            ;
            print(intList, sukat);//print line by line process of swapping elements
        }
    cout << endl;

} //end insertionSort

template <class elemType>
void print(elemType list[], int length)
{
    for (int i = 0; i < length; i++)
        cout << list[i] << " ";
    cout << endl;
}
