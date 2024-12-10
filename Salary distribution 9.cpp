#include <iostream>
using namespace std;

int main() {
    // Declare variables
    char gender, city;
    int age, salary, netSalary;

    // Input gender
    cout << "Enter gender (F for Female, M for Male): ";
    cin >> gender;

    // Input age
    cout << "Enter age: ";
    cin >> age;

    // Input city
    cout << "Enter city (K for Karachi, H for Hyderabad, S for Sukker, G for Ghotki): ";
    cin >> city;

    // Input salary
    cout << "Enter present salary: ";
    cin >> salary;

    // Initialize net salary
    netSalary = salary;

    // Logic to calculate net salary
    if (gender == 'F'|| gender == 'f' && age >= 25 && age <= 35 && (city == 'K'||city == 'k' || city == 'H'||city == 'h')) {
        netSalary += 2000; // Add 2000 for females 
    } else if (gender == 'M'|| gender == 'm' && age >= 25 && age <= 40 && (city == 'S' || city == 'G')) {
        netSalary += 2500; // Add 2500 for males 
    }

    // Output the net salary
    cout << "Net Salary: " << netSalary << endl;

    return 0;
}

