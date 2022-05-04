/* a program that will compute 
   the sum, difference, product and quotient of two numbers.
   using integer data type */

#include<iostream>

using namespace std;

int main() 
{ 
    int whn1, whn2;

    cout <<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout <<"\nPlease Enter TWO INTEGER'S to ADD, SUBTRACT, MULTIPLY, and DIVIDE" <<endl;
    cout << "\nThe First Number is: ";
    cin >> whn1;
    cout << "The Second Number is: ";
    cin >> whn2;
    cout <<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;

    cout <<"\nThe Sum of" <<" " << whn1 <<" " <<"and" <<" " << whn2 <<" " <<"is: " << whn1 + whn2 <<endl;
    cout <<"The Difference of" <<" " <<whn1 <<" " <<"and" << " " << whn2 <<" " <<"is: " << whn1 - whn2 <<endl;
    cout <<"The Product of" <<" " <<whn1 <<" " <<"and" <<" " << whn2 <<" " <<"is: " << whn1 * whn2 <<endl;
    cout <<"The Quotient of" <<" " <<whn1 <<" " <<"and" <<" " << whn2 <<" " <<"is: " << whn1 / whn2 <<endl;
    cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
    return 0;
}
