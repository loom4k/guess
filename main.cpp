#include <iostream>
#include <stdlib.h> // srand
#include <ctime>

using namespace std;

int main() {
    srand (time(NULL));
    int number = rand() % 100 + 1;
    int guess = 0;

    // Uncomment the following if you want to debug
    // cout << number << endl;

    do {
        cout << "Guess a number between 1 and 100:";
        cin >> guess;

        if(guess > number) {
            cout << "Too high!\n" << endl;
        } else if (guess < number) {   
            cout << "That's too low...\n" << endl;
        } else {
            cout << "That's right!\n" << endl;
            exit(0);
        }
    } while (number != guess);

    return 0;
}