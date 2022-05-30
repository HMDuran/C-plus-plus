//quote of the day program

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    unsigned oras = time(0);
    srand (oras);
    
    cout << "Your dice has been rolled! You got: ";

    int result = 1 + (rand() % 10);

    switch (result) {

        case 1:
            cout << "\n\"Money and success don't change people; they merely amplify what is already there.\" - Will Smith";
            break;

        case 2:
            cout << "\n\"Never let the fear of striking out keep you from playing the game.\" - Babe Ruth";
            break;

        case 3:
            cout << "\n\"Your time is limited, so don't waste it living someone else's life. Don't be trapped by dogma - which is living with the results of other people's thinking.\" - Steve Jobs";
            break;

        case 4:
            cout << "\n\"Not how long, but how well you have lived is the main thing.\" — Seneca";
            break;

        case 5:
            cout << "\n\"If life were predictable it would cease to be life, and be without flavor.\" - Eleanor Roosevelt";
            break;

        case 6:
            cout << "\n\"The whole secret of a successful life is to find out what is one's destiny to do, and then do it.\" - Henry Ford";
            break;

        case 7:
            cout << "\n\"In order to write about life first you must live it.\" - Ernest Hemingway";
            break;

        case 8:
            cout << "\n\"Curiosity about life in all of its aspects, I think, is still the secret of great creative people.\" - Leo Burnett";
            break;

        case 9:
            cout << "\n\"To win big, you sometimes have to take big risks.\" - Bill Gates";
            break;
            
        case 10:
            cout << "\n\"Strive not to be a success, but rather to be of value.\" - Albert Einstein";
            break;

        default:
            cout << "\nError";
            break;
    }
    return 0;
}