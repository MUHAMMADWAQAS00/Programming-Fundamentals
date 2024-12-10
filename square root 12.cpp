#include <iostream>
#include <math.h> // For sqrt function
using namespace std;

int main() {
    int choice, number;

    // Display menu
    cout << "Choose an option from the menu below:\n";
    cout << "1. Calculate the square root of a number\n";
    cout << "2. Calculate the cube of a number\n";
    cout << "3. Print the number 50 times\n";
    cout << "4. Print the multiplication table of the number\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice >= 1 && choice <= 4) {
        cout << "Enter a number: ";
        cin >> number;
    }

    // Process the choice using switch-case
    switch (choice) {
        case 1: // Calculate square root
            if (number < 0) {
                cout << "Square root is not defined for negative numbers.\n";
            } else {
                cout << "The square root of " << number << " is " << sqrt(number) << endl;
            }
            break;
        case 2: // Calculate cube
            cout << "The cube of " << number << " is " << number * number * number << endl;
            break;
        case 3: // Print the number 50 times
            cout << "Printing the number 50 times:\n";
            for (int i = 1; i <= 50; i++) {
                cout << number << " ";
            }
            cout << endl;
            break;
        case 4: // Print multiplication table
            cout << "Multiplication table of " << number << ":\n";
            for (int i = 1; i <= 10; i++) {
                cout << number << " x " << i << " = " << number * i << endl;
            }
            break;
        default:
            cout << "Invalid choice. Please select a number between 1 and 4.\n";
            break;
    }

    return 0;
}

