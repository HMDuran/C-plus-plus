//program that display your name and your course
#include<iostream>
using namespace std;

int main() { 
    int a;
    char answer;
    do
    {
    cout << "\nWELCOME TO MY PROGRRAM!";
    cout << "\nPlease Press 1 To Know Me: ";
    cin >> a ;
    
        if  (a == 1) {
            cout << "\nGreetings! My name is Hanah Mae T. Duran, an EARIST Cavite Freshman. \nA Bachelor of Science in Computer Science is the degree I am obtaining.\n";
    }
        else {
            cout << "\nINVALID INPUT!\n";
    }

    cout << "\nDo you want to continue or end the program? (Y/N):";
    cin >> answer;

     if (answer == 'N' || answer == 'n'){
         cout<<"\nTHANK YOU FOR USING MY PROGRAM!\n";
    }
    }
    while (answer == 'Y' || answer == 'y');
    return 0;
}