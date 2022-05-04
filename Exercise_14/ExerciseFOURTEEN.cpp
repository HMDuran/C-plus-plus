#include <iostream>
using namespace std;

int main()
{ 
    string name;
    int year, sub;
    
        cout <<endl <<"Please Enter Your Name: " ;
        cin >> name;
        cout <<"Please Enter Your Year of Birth: " ;
        cin >> year;

        sub = 2022 - year;
        
        cout <<endl <<"Hello" <<" " <<name << " "<<"Your age is" << " " <<sub ;

    return 0;
}
