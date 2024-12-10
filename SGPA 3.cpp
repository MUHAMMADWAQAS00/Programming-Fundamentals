#include <iostream>
using namespace std;// Example value // Example value

int main() {
    const int NUM_COURSES = 5;
    float creditHours[NUM_COURSES];
    float gradePoints[NUM_COURSES];
    float totalWeightedGP = 0.0, totalCreditHours = 0.0;

    cout << "Enter the credit hours and grade points (GP) for " << NUM_COURSES << " courses:\n";

    for (int i = 0; i < NUM_COURSES; i++) {
        cout << "Course " << i + 1 << ":\n";
        cout << "  Credit Hours: ";
        cin >> creditHours[i];
        cout << "  Grade Points (GP): ";
        cin >> gradePoints[i];

        totalWeightedGP += creditHours[i] * gradePoints[i];
        totalCreditHours += creditHours[i];
    }

    float SGPA = totalWeightedGP / totalCreditHours;

    cout << "\nYour SGPA for the semester is: " << SGPA << endl;

    return 0;
}

