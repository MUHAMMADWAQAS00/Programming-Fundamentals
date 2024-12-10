#include <iostream>
using namespace std;

int main() {
    int previousReading, currentReading, unitsConsumed;
    double costPerUnit, grossBill, finalBill;

    // Input previous and current readings
    cout << "Enter previous reading: ";
    cin >> previousReading;
    cout << "Enter current reading: ";
    cin >> currentReading;

    // Calculate units consumed
    unitsConsumed = currentReading - previousReading;

    if (unitsConsumed <= 0) {
        cout << "Invalid readings. Please check your input." << endl;
        return 1;
    }

    // Calculate the cost per unit and gross bill based on units consumed
    if (unitsConsumed <= 300) {
        costPerUnit = 4.0;
        grossBill = unitsConsumed * costPerUnit;
        finalBill = grossBill - (0.03 * grossBill); // Apply 3% subsidy
    } else if (unitsConsumed <= 400) {
        costPerUnit = 6.0;
        grossBill = unitsConsumed * costPerUnit;
        finalBill = grossBill; // No subsidy or surcharge
    } else {
        costPerUnit = 7.0;
        grossBill = unitsConsumed * costPerUnit;
        finalBill = grossBill + (0.04 * grossBill); // Add 4% surcharge
    }

    // Output the results
    cout << "\nElectricity Bill Details:" << endl;
    cout << "Units Consumed: " << unitsConsumed << endl;
    cout << "Cost per Unit: Rs. " << costPerUnit << endl;
    cout << "Gross Bill: Rs. " << grossBill << endl;
    cout << "Final Bill (After adjustments): Rs. " << finalBill << endl;

    return 0;
}

