#include <iostream>
using namespace std;

int main() {
    double income;
    
    cout << "Enter your annual income: $";
    cin >> income;

    // Determine tax bracket based on income
    if (income <= 10000) {
        cout << "Tax Bracket: 0%" << endl;
    } 
    else if (income <= 40000) {
        cout << "Tax Bracket: 10%" << endl;
    } 
    else if (income <= 85000) {
        cout << "Tax Bracket: 20%" << endl;
    } 
    else if (income <= 160000) {
        cout << "Tax Bracket: 30%" << endl;
    } 
    else {
        cout << "Tax Bracket: 35%" << endl;
    }

    return 0;
}

