//program that will convert mm to cm and meter.
#include<iostream>
#include<iomanip>
#define mcm 10 //10 mm in a cm
#define mmm 1000 // 1000 mm in a meter
using namespace std;

int main() 
{ 
    //declaration of three variables 
    float mm, cm, m;
    
    //greetings to the user 
    cout << "\n\t\t\t\t-----WELCOME TO THIS PROGRAM!-----\n";
    cout << "\t\t\tThis Program Made By Hanah Mae T. Duran - BSCS1\n"; 
    cout << "\nUsing This Program, You Can Easily Convert Millimeter (mm) to Centimeter (cm) and Meter (m) \n";
    cout << "\n\t\t\t\t\t\t*****";
    cout << "\n\t\t\t\t------Now, Let's Get Started!------\n";

    //taking the mm to convert from the user
    cout << "\nPlease Enter Millimeters that you want to convert in Centimeter and Meter : ";
    cin >> mm;
    
    //calculating the given m to cm and m from the user
    cm = mm/ mcm;
    m = mm / mmm;

    //print the conversion of the mm to cm and m
    cout << fixed;
    cout << setprecision(2) ;
    cout << "\n" << mm << " " <<"Millimeters = " <<cm << " " << "Centimeter";
    cout << "\n" << mm << " " <<"Millimeters = " <<m  << " " << "Meter\n";

    //end of the program
    cout << "\n\t\t\t\t\t\t*****";
    cout << "\n\t\t\t\t-THANK YOU FOR USING THIS PROGRAM!-\n";   

    return 0;
}

    

