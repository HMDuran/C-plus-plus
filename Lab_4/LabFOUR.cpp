/**program that will computes the tuition fee of the students 
 based on the given mode of payment**/

#include<iostream>
#include<iomanip>
using namespace std;

int main() 
{ 
    float tfee, dc, in;
    char choice;

    cout << "\n\t\t\t-----WELCOME TO THIS PROGRAM!-----\n";
    cout << "\t\tThis Program Made By Hanah Mae T. Duran - BSCS1\n";
    cout << "\n\t\t\t\t\t*****" <<endl;

    cout << "\nPlease enter the TUITION FEE: ";
    cin >> tfee;
    cout <<"\n------------------------------------------------------------------------------" <<endl;

    cout << "\nCHOOSE A LETTER FROM THE SELECTION BELOW. ON WHAT MODE OF PAYMENT YOU WANT!" <<endl;
    cout << "\n--------------------------------MODE OF PAYMENT-------------------------------" <<endl;
    cout << "\n\t\ta. Cash..........................10% Discount" <<endl;
    cout << "\t\tb. Two-installment................5% Discount" <<endl;
    cout << "\t\tc. Three-installment.............10% Interest" <<endl;
    cout << "\t\td. Four-installment..............12% Interest" <<endl;
    cout <<"\nPlease enter your MODE OF PAYMENT here: ";
    cin >> choice;
    cout <<"------------------------------------------------------------------------------" <<endl;

    switch (choice)
    {
        case 'a' : case 'A':
            cout <<fixed;
            cout << setprecision(2);
            dc = tfee * 0.10;
            cout <<"The Total Tuition Fee: " <<tfee - dc <<endl;
            cout <<"------------------------------------------------------------------------------" <<endl;
            cout <<"THANK YOU FOR USING MY PROGRAM";
        break;

        case 'b': case 'B':
            cout <<fixed;
            cout << setprecision(2);
            dc = tfee * 0.05;
            cout <<"The Total Tuition Fee: " << tfee - dc <<endl;
            cout <<"\nThe Amount Payable is: " << (tfee - dc) / 2 <<endl;
            cout <<"------------------------------------------------------------------------------" <<endl;
            cout <<"THANK YOU FOR USING MY PROGRAM";
        break;

        case 'c' : case 'C':
            cout <<fixed;
            cout << setprecision(2);
            in = tfee * 0.10;
            cout <<"The Total Tuition Fee: " << tfee + in <<endl;
            cout <<"\nThe Amount Payable is: " << (tfee + in) / 3  <<endl;
            cout <<"------------------------------------------------------------------------------" <<endl;
            cout <<"THANK YOU FOR USING MY PROGRAM";
        break;

        case 'd' : case 'D':
            cout <<fixed;
            cout << setprecision(2);
            in = tfee * 0.12;
            cout <<"The Total Tuition Fee: " <<tfee + in <<endl;
            cout <<"\nThe Amount Payable is: " << (tfee + in) / 4 <<endl;
            cout <<"------------------------------------------------------------------------------" <<endl;
            cout <<"THANK YOU FOR USING MY PROGRAM";
        break;

        default : 
            cout << "ERROR: INVALID CHOICE!"  <<endl;
    }
    return 0;
}