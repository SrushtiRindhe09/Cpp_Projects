#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    // generate random number
    srand(static_cast<unsigned int>(time(0)));
    // generate random number and store in i variable 
    int i = rand() % 100 + 1;

    // Initialize the user's guess in j variable
    int j;

    // Start the game loop
    do {
        
        cout << "Guess the number (between 1 and 100): ";
        cin >> j;

        // Provide feedback
        if (j < i) {
            cout << "Too low! Try again." << endl;
        } else if (j > i) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number, " << i << "!" << endl;
        }

    } while (j != i);

    return 0;
}