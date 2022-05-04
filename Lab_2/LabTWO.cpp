//program that add two integers then display the result
#include<iostream>
#include<conio.h>
using namespace std;

int main() 
{ 
    //declaration of three variables 
    int one1, two2, sum; 
    
    //greetings to the user 
    cout << "\n\t\t-----WELCOME TO THIS PROGRAM!-----\n";
    cout << "\tThis Program Made By Hanah Mae T. Duran - BSCS1\n"; 
    cout << "\nUsing This Program, You Can Easily Calculate The Sum Of Two Numbers. \n";
    cout << "\n\t\t\t\t*****";
    cout << "\n\t\t------Now, Let's Get Started!------\n";

    //taking the first number from the user
    cout << "\nPlease Enter Your First Number : ";
    cin >> one1;

    //taking the second number from the user
    cout << "Please Enter Your Second Number : ";
    cin >> two2 ;

    //calculating the sum of two numbers given by the user
    sum = one1 + two2;

    //print the sum of the two numbers
    cout << "\nYou Have Entered Two Different Numbers," << " " << one1 << " " << "and" << " " << two2 << "," << " " << "and Their Sum is" << " " << sum << "." << "\n";
    
    //end of the program
    cout << "\n\t\t\t\t*****";
    cout << "\n\t\t-THANK YOU FOR USING THIS PROGRAM!-\n";   

    return 0;
}