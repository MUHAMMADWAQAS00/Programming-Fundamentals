#include <iostream>
using namespace std;

int main() {
    int hour;

    cout << "Enter the hour (0 to 24): ";
    cin >> hour;

    switch (hour) {
        case 1 ... 8:
            cout << "Good Morning !" << endl;
            break;
        case 9 ...12:
            cout << "Good Afternoon!" << endl;
            break;
        case 13 ... 18:
            cout << "Good Evening!" << endl;
            break;
        case 19 ...24 :
            cout << "Good Night!" << endl;
            break;
        default:
            cout << "Error: Invalid hour. Please enter a number between 0 and 24." << endl;
    }

    return 0;
}

