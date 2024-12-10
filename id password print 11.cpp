//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    // Predefined IDs and passwords
//    string userId, password;
//    string validId1 = "user123", validPass1 = "pass123", userName1 = "Alice";
//    string validId2 = "admin456", validPass2 = "admin456", userName2 = "Bob";
//
//    // Ask user to enter ID
//    cout << "Enter your ID: ";
//    cin >> userId;
//
//    // Outer switch for ID
//    switch (userId == validId1 || userId == validId2) {
//        case true: {
//            // Nested switch to determine the user
//            switch (userId == validId1) {
//                case true:
//                    cout << "Enter your password: ";
//                    cin >> password;
//                    // Check password for validId1
//                    switch (password == validPass1) {
//                        case true:
//                            cout << "Welcome, " << userName1 << "!\n";
//                            break;
//                        case false:
//                            cout << "Incorrect Password.\n";
//                            break;
//                    }
//                    break;
//
//                case false:
//                    cout << "Enter your password: ";
//                    cin >> password;
//                    // Check password for validId2
//                    switch (password == validPass2) {
//                        case true:
//                            cout << "Welcome, " << userName2 << "!\n";
//                            break;
//                        case false:
//                            cout << "Incorrect Password.\n";
//                            break;
//                    }
//                    break;
//            }
//            break;
//        }
//        case false:
//            cout << "Incorrect ID.\n";
//            break;
//    }
//
//    return 0;
//}


#include <iostream>
using namespace std;

int main() {
    string enteredID, enteredPassword;
    string validID = "user123";       // Predefined valid ID
    string validPassword = "pass456"; // Predefined valid Password
    string userName = "John Doe";     // User name associated with the valid ID

    cout << "Enter your ID: ";
    cin >> enteredID;

    switch (enteredID == validID) { // Check if the ID matches the valid ID
        case true:
            cout << "Enter your password: ";
            cin >> enteredPassword;

            switch (enteredPassword == validPassword) { // Check if the password matches
                case true:
                    cout << "Welcome, " << userName << "!" << endl;
                    break;

                case false:
                    cout << "Incorrect Password." << endl;
                    break;
            }
            break;

        case false:
            cout << "Incorrect ID." << endl;
            break;
    }

    return 0;
}

