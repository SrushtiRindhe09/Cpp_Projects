#include <iostream>

using namespace std;

int main() {
    // Game loop
    char choice;
    do {
        
        double num1, num2, result;
        char operation;

        // take input from user 
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        // operation choice
        cout << "Choose an operation (+, -, *, /): ";
        cin >> operation;

        switch (operation) {
            case '+':
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;
            case '-':
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;
            case '*':
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            case '/':
                // Check the condition the second number is zero or not
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error! Cannot divide by zero." << endl;
                }
                break;
            default:
                cout << "Invalid operation. Please choose +, -, *, or /." << endl;
                break;
        }

        // Ask the user if they want to continue
        cout << "Do you want to continue? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}