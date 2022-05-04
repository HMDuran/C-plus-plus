#include <iostream>
using namespace std;
int main() {
    
    int month;
    
    cout << "Please ENTER a number from (1-12) to find out the month: ";
    cin >> month;

    switch (month){
        case 1: 
            cout << "The Month is JANUARY";
            break;
        case 2: 
            cout << "The Month is FEBRUARY";
            break;
        case 3: 
            cout << "The Month is MARCH";
            break;
        case 4: 
            cout << "The Month is APRIL";
            break;
        case 5: 
            cout << "The Month is MAY";
            break;
        case 6: 
            cout << "The Month is JUNE";
            break;
        case 7: 
            cout << "The Month is JULY";
            break;
        case 8: 
            cout << "The Month is AUGUST";
            break;
        case 9: 
            cout << "The Month is SEPTEMBER";
            break;
        case 10: 
            cout << "The Month is OCTOBER";
            break;
        case 11: 
            cout << "The Month is NOVEMBER";
            break;
        case 12: 
            cout << "The Month is DECEMBER";
            break;
        default: 
            cout << "ERROR! There is no corresponding month for the number you entered!";
            break;
    }
return 0; 
}
