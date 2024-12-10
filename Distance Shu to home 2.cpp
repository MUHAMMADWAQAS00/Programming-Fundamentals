#include <iostream>
using namespace std;

int main() {
    // Define constants for conversion
    const double MILES_TO_KM = 1.60934;
    const int KM_TO_METERS = 1000;
    const int METERS_TO_CM = 100;
    const int CM_TO_MM = 10;
    const int MM_TO_MICROMETERS = 1000;

    // Input the distance in miles
    double miles;
    cout << "Enter the distance from Salim Habib Uni to your home in miles: ";
    cin >> miles;

    // Convert miles to other units
    double kilometers = miles * MILES_TO_KM;
    double meters = kilometers * KM_TO_METERS;
    double centimeters = meters * METERS_TO_CM;
    double millimeters = centimeters * CM_TO_MM;
    double micrometers = millimeters * MM_TO_MICROMETERS;

    // Print the converted values
    cout << "\nThe distance in various units from Salim Habib Uni to Your home is:" << endl;
    cout << "Kilometers: " << kilometers << " km" << endl;
    cout << "Meters: " << meters << " m" << endl;
    cout << "Centimeters: " << centimeters << " cm" << endl;
    cout << "Millimeters: " << millimeters << " mm" << endl;
    cout << "Micrometers: " << micrometers << " µm" << endl;

    return 0;
}

