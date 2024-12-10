#include <iostream>
using namespace std;

int main() {
    int department;
    int field;

    cout << "Select a department:\n";
    cout << "1. School Computer Science\n";
    cout << "2. School of Business\n";
    cout << "3. School of engineering\n";
    cout << "Enter your choice (1-3): ";
    cin >> department;

    switch (department) {
        case 1: //Computer science depart
            cout << "\nYou selected School Computer Science.\n";
            cout << "See Departments:\n";
            cout << "1. Department of Informatics\n";
            cout << "2. Department of Machine Learning\n";
           
            cout << "Enter your choice (1-2): ";
            cin >> field;

            
        case 2: //  Department of business
            cout << "\n Department of School and Business.\n";
            cout << "Select Department :\n";
            cout << "1. Department of Commerce\n";
            cout << "2. Department of Purchasing\n";
          
            cout << "Enter your choice (1-2): ";
            cin >> field;

            switch (field) {
                case 1:
                    cout << "Role:  Department of commerce\n";
                    break;
                case 2:
                    cout << "Role:  Department Purchasing\n";
                    break;
                
                default:
                    cout << "Invalid role selected!\n";
            }
            break;

        case 3: //  Department of engineering
            cout << "\nYou selected School of engineering.\n";
            cout << "Select a role:\n";
            cout << "1.Department of mechanical engineering \n";
            cout << "2. Department of Mechatronic engineering\n";
            
            cout << "Enter your choice (1-2): ";
            cin >> field;

            switch (field) {
                case 1:
                    cout << "Role: Department mechanical engineering \n";
                    break;
                case 2:
                    cout << "Role:  Department Mechatronic engineering\n";
                    break;
                
                default:
                    cout << "Invalid role selected!\n";
            }
            break;

        default:
            cout << "Invalid department selected!\n";
    }

    return 0;
}

