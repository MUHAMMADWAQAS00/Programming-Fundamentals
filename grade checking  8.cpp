#include <iostream>
using namespace std;

int main() {
	
    float physics, math, english, urdu, islamiat;
    
    cout<< "Enter your Name: ";

    cout << "Enter your Physics marks: ";
    cin >> physics;

    cout << "Enter your Math marks: ";
    cin >> math;

    cout << "Enter your English marks: ";
    cin >> english;

    cout << "Enter your Urdu marks: ";
    cin >> urdu;

    cout << "Enter your Islamiat marks: ";
    cin >> islamiat;

    // Calculate total marks and percentage
    float total = physics + math + english + urdu + islamiat;
    cout << "Total Marks: " << total << endl;

    float percentage = total * 100 / 500;  // Assuming each subject is out of 100, so total is 500
    cout << "Percentage: " << percentage << "%" << endl;

    // Optional: Display grade based on percentage
    if (percentage >= 90) {
        cout << "Grade: A" << endl;
    } else if (percentage >= 80) {
        cout << "Grade: B" << endl;
    } else if (percentage >= 70) {
        cout << "Grade: C" << endl;
    } else if (percentage >= 50) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}

