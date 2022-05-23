/**
  program that will display the square root 
  of a given integer using sqrt() function.
 **/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    double user_number;
    
    cout << "\n\t\t\t-----WELCOME TO THIS PROGRAM!-----\n";
    cout << "\t\tThis Program Made By Hanah Mae T. Duran - BSCS1";
    cout << "\n\t\t\t\t\t*****" << endl; 

    cout << "\nType an integer you want to square: ";
    cin >> user_number;

    cout << "===============================================================================";
    cout << "\nThe SQUARED ROOT of" <<" "  <<user_number <<" "  << "is: " << sqrt(user_number);

    return 0;
}
