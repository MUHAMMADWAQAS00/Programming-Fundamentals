#include <iostream>
#include <cmath> // For sqrt function

using namespace std;

int main() {
    // Declare variables
    float a, b;
    int c;
    float x1, x2;
    
    // Assign float values to a and b
    a = 1.5; 
    b = -3.2; 

    // Take integer input for c at runtime
    cout << "Enter an integer value for c: ";
    cin >> c;

    // Calculate the discriminant
    float discriminant = (b * b) - (4 * a * c);

    // Check if the discriminant is non-negative
    if (discriminant >= 0) {
        // Calculate the two solutions
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);

        // Display the results
        cout << "The solutions of the quadratic equation are:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else {
        // If discriminant is negative, display a message
        cout << "The equation has no real roots." << endl;
    }

    return 0;
}

