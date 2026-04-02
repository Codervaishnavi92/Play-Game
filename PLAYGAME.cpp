#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess;
    int chances = 10;   

    // random number
    srand(time(0));
    number = rand() % 100 + 1;

    cout << "Easy Level Game (10 chances)\n";

    while (chances > 0) {
        cout << "\nEnter the number: ";
        cin >> guess;

        if (guess == number) {
            cout << "\nYou guessed the right number! ";
            break;
        }
        else {
            cout << "Nope, " << guess << " is not the right number\n";

            if (guess < number)
                cout << "The secret number is greater than the number you have chosen\n";
            else
                cout << "The secret number is smaller than the number you have chosen\n";

            chances--;
            cout << chances << " choices left.\n";
        }
    }

    if (chances == 0) {
        cout << "\nGame Over! The number was " << number;
    }

    return 0;
}