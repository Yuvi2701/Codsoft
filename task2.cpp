#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int targetNumber = rand() % 100 + 1; 
    int input;
    int count = 0;
    cout << "Welcome to the Guess the Number game!"<< endl<< "Guess the number between 1 to 100" << endl;
    while (true) {
        cout << "Enter your guess: ";
        cin >> input;
        count++;

        if (input < targetNumber) {
            cout << "The Guess is too low! Try again." << endl;
        } else if (input > targetNumber) {
            cout << "The Guess is too high! Try again." << endl;
        } else if(input == targetNumber) {
            cout << "You guessed the number " << targetNumber<< endl;
            break;
        }
    }

    return 0;
}