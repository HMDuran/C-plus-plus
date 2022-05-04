#include <iostream>
using namespace std;

int main()
{ 
    int num;

    cout << "Please Enter Your Year Level (1-4): ";
    cin >> num;

    switch (num){
    case 1: 
        cout <<"You are a Freshmen";
    break;
    case 2: 
        cout <<"You are a Sophomore";
    break;
    case 3: 
        cout <<"You are a Junior";
    break;
    case 4: 
        cout <<"You are a Senior";
    break;
    default:
        cout <<"You Entered Invalid Number!";
    }
    return 0;
}
