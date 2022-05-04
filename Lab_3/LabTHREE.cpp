/* program that will compute the area of
circle, triangle, square , rectangle  */

#include <iostream>
#include <iomanip>
#include <math.h>
#define PI 3.1416

using namespace std;

int main()
{ 
    char let;
    float rad, base, hg, lgs, lgr,wd;

    cout << "\nCHOOSE A LETTER FROM THE SELECTION BELOW. ON THE AREA, YOU WANT TO COMPUTE!" <<endl;
    cout << "\na. Area of CIRCLE" <<endl;
    cout << "b. Area of TRIANGLE" <<endl;
    cout << "c. Area of SQUARE" <<endl;
    cout << "d. Area of RECTANGLE" <<endl;
    cout <<"\nPlease enter your selection here: ";
    cin >> let;
    cout <<"-------------------------------------------------------------------------" <<endl;

    switch (let)
    {
        case 'a' : case 'A':
            cout << fixed;
            cout << setprecision(2);
            cout << "Please enter the RADIUS of the CIRCLE: ";
            cin >> rad;
            cout << "\nThe AREA of the CIRCLE is " << PI * rad * rad <<endl;
        break;

        case 'b': case 'B':
            cout << fixed;
            cout << setprecision(2);
            cout << "Please enter the BASE of the TRIANGLE: ";
            cin >> base;
            cout << "Please enter the HEIGHT of the TRIANGLE: ";
            cin >> hg;
            cout << "\nThe AREA of the TRIANGLE is " << (base * hg) / 2  <<endl;
        break;

        case 'c' : case 'C':
            cout << fixed;
            cout << setprecision(2);
            cout << "Please enter the LENGTH of the SQUARE: ";
            cin >> lgs;
            cout << "\nThe AREA of the SQUARE is " << lgs * lgs  <<endl;
        break;

        case 'd': case 'D':
            cout << fixed;
            cout << setprecision(2);
            cout << "Please enter the LENGTH of the RECTANGLE: ";
            cin >> lgr;
            cout << "Please enter the WIDTH of the RECTANGLE: ";
            cin >> wd;
            cout << "\nThe AREA of the RECTANGLE is " << lgr * wd <<endl;
            break;

        default : 
            cout << "ERROR: INVALID CHOICE!"  <<endl;
    }
return 0;
}
