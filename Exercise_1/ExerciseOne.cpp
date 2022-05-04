#include <iostream>
#include<cmath>

using namespace std;

int main()
{ 
    double x1 = 4.0, x2 = 12.25, x3 = 0.0121;
    
    cout << "\nHere's The Square Root of The Numbers 4, 12.25 and 0.0121" <<endl;
    cout << "\nThe Square root of" << " " << x1 << " " << "is:" <<" " << sqrt(x1) <<endl;
    cout << "The Square root of" << " " << x2 << " " << "is:" <<" " << sqrt(x2) <<endl;
    cout << "The Square root of" << " " << x3 << " " << "is:" <<" " << sqrt(x3) <<endl;

    cout << "\nIf you have a number that needs to be squared, please enter it here: ";
    cin  >> x1; 
  
    cout << "\nThe Square root of" << " " << x1 << " " << "is:" << " " << sqrt(x1) <<endl;

   return 0; 
}
