/** create a program that if the given number is even, 
    compute the factorial of N,
    if the given number is odd 
    compute the sum of the squared of N. **/

#include<iostream>

using namespace std;

int main() 
{ 
    int usernum, factorial, sum, i;
    char answer;

    cout << "\n\t\t\t-----WELCOME TO THIS PROGRAM!-----\n";
    cout << "\t\tThis Program Made By Hanah Mae T. Duran - BSCS1\n";
    cout << "\n\t\t\t\t\t*****" <<endl;

    do
    {
        cout <<"\nEnter a number to determine if it is an EVEN or ODD NUMBER: ";
        cin >>  usernum;

            if (usernum%2==0){
                cout <<"------------------------------------------------------------------------------" <<endl;
                cout <<"\nThe number you entered" <<" " <<usernum <<" " <<"is an EVEN NUMBER." <<endl; 

                factorial = 1;
                for(i=1; i<=usernum; i++)
                factorial = factorial * i;
                cout <<"\nThe FACTORIAL of the entered EVEN NUMBER" <<" " <<usernum <<" " << "is: " << factorial <<endl;
                cout <<"\n------------------------------------------------------------------------------" <<endl;

        }
            else {
                cout <<"------------------------------------------------------------------------------" <<endl;
                cout <<"\nThe number you entered" <<" " <<usernum <<" " <<"is an ODD NUMBER." <<endl; 

                sum = 0;
                for(i=1; i<=usernum; i++)
                sum = sum + (i*i);
                cout <<"\nThe SUM of the SQUARED of the entered ODD NUMBER" <<" " <<usernum <<" " << "is: " << sum <<endl;
                cout <<"\n------------------------------------------------------------------------------" <<endl;
        }
        cout <<"\nDO YOU WANT TO CONTINUE? (Y/N): ";
        cin >> answer;  
     
            if(answer == 'N' || answer == 'n'){
        
                cout <<"\n------------------------------------------------------------------------------" <<endl;
                cout << "THANK YOU FOR USING THE PROGRAM!";
        }
    }
    while (answer == 'Y' || answer == 'y');
    return 0;
}