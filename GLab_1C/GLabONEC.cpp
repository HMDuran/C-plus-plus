/* Using Conditional Statement
    create a program that will compute 
    the sum, difference, product and quotient of two numbers.  */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{ 
    char sign;
    int whn1,whn2 ;
    float dcn1, dcn2;

    cout <<"\n----------------------------------------------------------------";
    cout << "\nSELECT A SYMBOL FOR THE ARITHMETIC OPERATOR YOU WANT!" <<endl;
    cout << "\n + (Plus Sign) if you want ADDITION" <<endl;
    cout << " - (Minus Sign) if you want SUBTRACTION" <<endl;
    cout << " * (Multiplication Sign) if you want MULTIPLICATION" <<endl;
    cout << " / (Division Sign) if you want DIVISION" <<endl;
    cout <<"\nPlease enter your selection here: ";
    cin >> sign;
    cout <<"----------------------------------------------------------------" <<endl;

    switch (sign)
    {
        case '+':
            cout << "Please enter the TWO VALUES you'd like to ADD" <<endl; 
            cout << "\nThe First Number is: ";
            cin >> whn1;
            cout << "The Second Number is: ";
            cin >> whn2;
            cout << "\nThe SUM of" <<" " << whn1 <<" " <<"and" <<" " << whn2 <<" " << "is: " << whn1 + whn2  <<endl;
            cout <<"----------------------------------------------------------------" <<endl;
        break;

        case '-':
            cout << "Please enter the TWO VALUES you'd like to SUBTRACT" <<endl;
            cout << "\nThe First Number is: ";
            cin >> whn1;
            cout << "The Second Number is: ";
            cin >> whn2;
            cout << "\nThe DIFFERENCE of" <<" " << whn1 <<" " <<"and" <<" " << whn2 <<" " << "is: " << whn1 - whn2  <<endl;
            cout <<"----------------------------------------------------------------" <<endl;
        break;

        case '*':
            cout << "Please enter the TWO VALUES you'd like to MULTIPLY" <<endl;
            cout << "\nThe First Number is: ";
            cin >> whn1;
            cout << "The Second Number is: ";
            cin >> whn2;
            cout << "\nThe PRODUCT of" <<" " << whn1 <<" " <<"and" <<" " << whn2 <<" " << "is: " << whn1 * whn2  <<endl;
            cout <<"----------------------------------------------------------------" <<endl;
        break;

        case '/':
            cout << "Please enter the TWO VALUES you'd like to DIVIDE" <<endl;
            cout << "\nThe First Number is: ";
            cin >> dcn1;
            cout << "The Second Number is: ";
            cin >> dcn2;

                if (dcn2 != 0){
                    cout << fixed;
                    cout << setprecision (3);
                    cout << "\nThe QOUTIENT of" <<" " << dcn1 <<" " <<"and" <<" " << dcn2 <<" " << "is: " << dcn1 / dcn2  <<endl;
                    cout <<"----------------------------------------------------------------" <<endl;
                 }
                else {
                    cout << "\nSorry But It Cannot Be Divide By 0"  <<endl;
                    cout <<"----------------------------------------------------------------" <<endl;
                }
            break;

        default : 
            cout << "ERROR: INVALID OPERATOR!"  <<endl;
            cout <<"----------------------------------------------------------------" <<endl;
    }
return 0;
}
