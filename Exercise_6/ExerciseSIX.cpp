#include <iostream>
using namespace std;

int main()
{ 
    string itm ="";
    int quanti;
    float prc;
    float amount;
    float pay;
    float change;

        cout << "Please Enter The Product Item : ";
        cin >> itm;

        cout << "Please Enter The Quantity : ";
        cin >> quanti;

        cout << "Please Enter The Price : P ";
        cin >> prc;

        amount = quanti * prc;

        cout <<endl << "The Total Amount : P " << amount;

        cout <<endl <<"The Cash Payment : P ";
        cin >> pay;

        change = pay - amount;
        cout << "The Change : P "<<change;
    return 0;   
}
