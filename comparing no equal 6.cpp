#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Input three integer numbers
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    // Compare the numbers using nested if statements
    if (num1 == num2) {
        if (num2 == num3) {
            cout << "All values are equal" << endl;
        } else {
            cout << "They all are not equal" << endl;
        }
    } else {
        cout << "They all are not equal" << endl;
    }

    return 0;
}

