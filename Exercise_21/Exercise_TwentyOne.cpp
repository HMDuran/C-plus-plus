/* Write a simple Quote of the day program. 
The program should contains a list of Quotes, and when the user runs the program, 
a randomly selected Quote should be printed.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    unsigned oras = time(0);
    srand (oras);
    
    cout << "Your dice has been rolled! \n\nYou got: ";

    int result = 1 + (rand() % 10);

    switch (result) {

        case 1:
            cout << "\n\n\"Money and success don't change people; they merely amplify what is already there.\" - Will Smith";
            break;

        case 2:
            cout << "\n\n\"Never let the fear of striking out keep you from playing the game.\" - Babe Ruth";
            break;

        case 3:
            cout << "\n\n\"Your time is limited, so don't waste it living someone else's life. Don't be trapped by dogma - which is living with the results of other people's thinking.\" - Steve Jobs";
            break;

        case 4:
            cout << "\n\n\"Not how long, but how well you have lived is the main thing.\" - Seneca";
            break;

        case 5:
            cout << "\n\n\"If life were predictable it would cease to be life, and be without flavor.\" - Eleanor Roosevelt";
            break;

        case 6:
            cout << "\n\n\"The whole secret of a successful life is to find out what is one's destiny to do, and then do it.\" - Henry Ford";
            break;

        case 7:
            cout << "\n\n\"In order to write about life first you must live it.\" - Ernest Hemingway";
            break;

        case 8:
            cout << "\n\n\"Curiosity about life in all of its aspects, I think, is still the secret of great creative people.\" - Leo Burnett";
            break;

        case 9:
            cout << "\n\n\"To win big, you sometimes have to take big risks.\" - Bill Gates";
            break;
            
        case 10:
            cout << "\n\n\"Strive not to be a success, but rather to be of value.\" - Albert Einstein";
            break;

        default:
            cout << "\n\Error";
            break;
    }
    return 0;
}

