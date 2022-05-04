#include <iostream>
    using namespace std;

    int main()
    {
        struct student {
            int no;
            char name [20];
        };
        struct student s;
        s.no=8;
        cout<< s.no;
    }