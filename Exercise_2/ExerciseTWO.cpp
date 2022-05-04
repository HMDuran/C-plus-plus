#include <iostream>
#include <iomanip>
using namespace std;

double footToMeter(double foot) {
    return 0.305 * foot;
}
double meterToFoot(double meter) {
    return 3.279 * meter; 
}

int main()
{ 
  
   // double footToMeter, meterToFoot;
    cout << "\n   FEET      METERS       |            METERS        FEET\n";
    cout << "-------------------------------------------------------------" <<endl;

    for(double feet = 1.0, meters = 20.0; feet <= 10.0; feet++, meters +=5){
        cout << fixed;
        cout << setw (7) << setprecision(2) << feet;
        cout << setw (7) << setprecision(2)  << " "  << footToMeter(feet) << "  ";
        cout << setw (7) << "      |     ";
        cout << setw (7) << setprecision(2)  << " "  << meters <<"  ";
        cout << setw (7) << setprecision(2)  << " "  << meterToFoot(meters) << "  " <<"\n";
    }
}
