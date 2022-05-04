#include <iostream>
using namespace std;
int main() {
    int x, y;
        cout << "Enter your x number: " << endl;
        cin >> x;
        cout << "Enter your y number: " << endl;
        cin >> y;
        if (x == y) {
            cout << "1";
        }
        else if (x > y){
            cout << "2";
        }
        else {
            cout << "3";
        }
  return 0;
}
