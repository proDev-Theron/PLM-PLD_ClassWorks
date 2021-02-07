#include <iostream>
/*
Created by Theron Adrianne Bueno
February 7, 2021
Subject: Programming Logic and Design (CPE 0112.1) - Pamantasan ng Lungsod ng Maynila (PLM)
Task: Final Project: (Airplane Seating Assignment) Write a program that can be used to
assign seats for a commercial airplane. The airplane has 13 rows, with six
seats in each row. Rows 1 and 2 are first class, rows 3 through 7 are business
class, and rows 8 through 13 are economy class. program must prompt the user to enter the following information:
a. Ticket type (first class, business class, or economy class)
b. Desired seat
*/
using namespace std;

const int rows = 13; //Rows 1 to 13 in the Table
const int columns = 6;// Columns A to F in the Table
char classType; // Ticket type (first class, business class, or economy class)
int rowNumber, Pcolumn;
char column, choice;
char seats[rows][columns];

//function prototypes
void showstatus();
void seatAllocate();

int main()
{
    cout << "\n\n\tProgram: Airplane Seating Assignment\n\n";

    //initialize seats

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            seats[i][j] = '*';
        }
    }
    do
    {
        showstatus();
        cout << "\n";
        cout << "\nChoose the ticket type you want to reserve a seat?\n" << endl;
        cout << "Enter (F/f) for First Class" << endl;
        cout << "Enter (B/b) for Business Class" << endl;
        cout << "Enter (E/e) for Economy Class\n" << endl;

        cout << "Choose Ticket Type: ";
        cin >> classType;

        switch (classType)
        {
        case 'F':
        case 'f':
        {
            cout << "Choose row (1 or 2): ";
            cin >> rowNumber;

            if (rowNumber == 1 || rowNumber == 2)
            {
                cout << "Choose which Column(A-F): ";
                cin >> column;
                column = tolower(column);

                seatAllocate();
                showstatus();
            }
            else
            {
                cout << "Invalid row number for First class seat";
            }
            break;
        }

//Business Class
        case 'B':
        case 'b':
        {
            cout << "\nChoose row (3 to 7): ";
            cin >> rowNumber;
            if (rowNumber == 3 || rowNumber == 4 || rowNumber == 5 || rowNumber == 6 || rowNumber == 7)
            {
                cout <<"\nChoose which Column(A-F)";
                cin >> column;
                column = tolower(column);

                seatAllocate();
                showstatus();
            }
            else
            {
                cout << "Invalid row number for business class seat";
            }
        }
        break;

//Economy class:

        case 'E':
        case 'e':
        {
            cout << "\nChoose row (8 to 13): ";
            cin >> rowNumber;
            if (rowNumber == 8 || rowNumber == 9 || rowNumber == 10 || rowNumber == 11 || rowNumber == 12 || rowNumber == 13)
            {
                cout << "\nChoose which Column(A-F)";
                cin >> column;
                column = tolower(column);
                seatAllocate();
                showstatus();
            }
            else
            {
                cout << "\n Invalid row number for Economy class";
            }
            break;
        }
        default:
        {
            cout << "\nInvalid class type" << endl;
            exit(0);
        }
        }
        cout << "\n\n Do you want to reserve more seats? (Y/N): ";
        cin >> choice;
            if (choice != 'n')
            {
                system("cls");
                cout << "\n\n\tProgram: Airplane Seating Assignment\n\n";
            }
    }
    while (tolower(choice) != 'n');

    return 0;

}
//function to show the current status of the seats, which is * or X
void showstatus()
{
    cout << "\n\t\tA\tB\tC\tD\tE\tF";
    for (int i = 0; i < rows; i++)
    {
        cout << "\n\tRow " << (i + 1);
        for (int j = 0; j < columns; j++)
            cout << "\t" << seats[i][j];
    }
}

void seatAllocate()
{
    Pcolumn = static_cast<int>(tolower(column) - 97); //To make sure value is between 0 and 5 which is equal to columns A to F

    if (Pcolumn<0 || Pcolumn>columns)
    {
        cout << "Invalid Column" << endl;
        exit(0);
    }
    else
    {
        if (seats[rowNumber-1][Pcolumn] == 'X')
        {
            cout << "\n\n\tAlready reserved. Please select other seats.";
        }
        else
        {
            cout << "\n\tSeat reserved succesfully!\n\n";
        }

        for (int i = 0; i < rowNumber; i++)
        {
            for (int j = 0; j <= Pcolumn; j++)
            {
                seats[rowNumber-1][Pcolumn] = 'X';
            }
        }
    }
}
