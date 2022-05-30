/** Using gotoxy function, display your full name and course 
at the center of the screen with data and time included.**/

#include <iostream>
#include <conio.h>
#include <windows.h> 

using namespace std;
 
void gotoxy(short a, short b) {

    COORD axis; 
    axis.X = a; 
    axis.Y = b; 
 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), axis);
}
 
int main() {
    char answer;
    
    gotoxy(32,10);   
        cout << "!!WELCOME TO MY PROGRAM!!" <<endl;

    gotoxy(10,11);  
        cout << "I'M HANAH MAE T. DURAN TAKING BACHELOR OF SCIENCE IN COMPUTER SCIENCE" <<endl;
    
    gotoxy(10,13);
        cout << "---------------------------------------------------------------------" <<endl;

    gotoxy(24,15);   
        cout << "You want today's date and time? (Y/N) ";
        cin >> answer;

    gotoxy(10,17);
        cout << "---------------------------------------------------------------------" <<endl;
    
    if(answer == 'Y' || answer == 'y'){

        gotoxy(28,19);
            cout << "The DATE Today is: " << __DATE__ <<endl;

        gotoxy(33,20);
            cout << "The TIME is: " << __TIME__ <<endl;
    }  

    else if(answer == 'N' || answer == 'n'){

        gotoxy(27,19);
            cout << "THANK YOU FOR USING THE PROGRAM!";
    }
    return 0;
}

