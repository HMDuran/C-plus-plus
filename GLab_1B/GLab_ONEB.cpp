/* a program that will compute 
   the sum, difference, product and quotient of two numbers.
   using float data type */

#include<iostream>
#include<iomanip>

using namespace std;

int main() 
{ 
    float dcn1, dcn2;

    cout <<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout <<"\nPlease Enter TWO DECIMAL or an INTEGER NUMBER to ADD, SUBTRACT, MULTIPLY, and DIVIDE" <<endl;
    cout << "\nThe First Number is: ";
    cin >> dcn1;
    cout << "The Second Number is: ";
    cin >> dcn2;
    cout <<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;

    cout << fixed;
    cout << setprecision(2);
    cout <<"\nThe Sum of" <<" " << dcn1 <<" " <<"and" <<" " << dcn2 <<" " <<"is: " << dcn1 + dcn2 <<endl;
    cout <<"The Difference of" <<" " <<dcn1 <<" " <<"and" << " " << dcn2 <<" " <<"is: " << dcn1 - dcn2 <<endl;
    cout <<"The Product of" <<" " <<dcn1 <<" " <<"and" <<" " << dcn2 <<" " <<"is: " << dcn1 * dcn2 <<endl;
    cout <<"The Quotient of" <<" " <<dcn1 <<" " <<"and" <<" " << dcn2 <<" " <<"is: " << dcn1 / dcn2 <<endl;
    cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
    return 0;
}
