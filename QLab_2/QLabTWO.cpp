/**program that converts days to years, months and remaining days 
Program that converts seconds to hours , minutes and remaining seconds **/

#include<iostream>
#include<windows.h>
using namespace std;

int main() 
{ 
    int days, years, months, remdays, seconds, hours, minutes, remsecs;
    char let;

    HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(h,5);
    cout << "\n\t\t\t\t-----WELCOME TO THIS PROGRAM!-----\n";
    cout << "\t\t\tThis Program Made By Hanah Mae T. Duran - BSCS1\n";
    cout << "\n\t\t\t\t\t\t*****";
    
    SetConsoleTextAttribute(h,15);
    cout << "\nCHOOSE A LETTER FROM THE SELECTION BELOW. ON WHAT DO YOU WANT TO CONVERT!" <<endl;
    cout << "\na. Converts DAYS to YEARS, MONTHS and REMAINING DAYS" <<endl;
    cout << "b. Converts SECONDS to HOURS, MINUTES and REMAINING SECONDS" <<endl;
    cout <<"\nPlease enter your selection here: ";
    cin >> let;
    SetConsoleTextAttribute(h,6);
    cout <<"---------------------------------------------------------------------------------------------" <<endl;

    switch (let)
    {
        case 'a' : case 'A':
            SetConsoleTextAttribute(h,6);
            cout << "Please enter the no. of DAYS you want to convert into YEARS, MONTHS, and REMAINING DAYS: ";
            cin >> days;
            years = days / 365;
            months = (days % 365) / 30;;
            remdays = (days - years * 365 - months * 30); 
            cout <<"\n" << days << " " << "Days : " << years << " " <<"Year(s)" << " " << months << " " <<"Month(s)" << " " << remdays << " " <<"Remaining Day(s)" <<endl;
            cout <<"---------------------------------------------------------------------------------------------" <<endl;
            SetConsoleTextAttribute(h,4);
            cout <<"THANK YOU FOR USING MY PROGRAM";
        break;

        case 'b': case 'B':
            SetConsoleTextAttribute(h,6);
            cout << "Please enter the SECONDS you want to convert into HOURS, MINUTES, and REMAINING SECONDS: ";
            cin >> seconds;
            hours = seconds / 3600; 
            minutes = (seconds - hours * 3600) / 60;
            remsecs = seconds - hours * 3600 - minutes * 60;
            cout <<"\n" << seconds << " " << "Seconds : " << minutes << " " <<"Minute(s)" << " " << hours << " " <<"Hour(s)" << " " << remsecs << " " <<"Remaining Second(s)" <<endl;
            cout <<"---------------------------------------------------------------------------------------------" <<endl;
            SetConsoleTextAttribute(h,4);
            cout <<"THANK YOU FOR USING MY PROGRAM";
        break;

        default : 
            SetConsoleTextAttribute(h,4);
            cout << "ERROR: INVALID CHOICE!"  <<endl;
    }
    return 0;
}