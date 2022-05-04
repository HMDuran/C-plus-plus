#include <iostream>
using namespace std;

int main()
{ 
    int num;

    cout << "Please Enter a Number from 0-9999: ";
    cin >> num;

    if (num <=9){
         cout << "It is a ones";
    }
    else if (num<=99){
         cout << "It is a tens";
    }
    else if (num<=999){
         cout << "It is a hundreds";
    }
    else{
         cout << "It is a thousands";
    }
    return 0;
}