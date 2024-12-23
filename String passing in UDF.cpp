#include <iostream>
#include <string>
using namespace std;

// Function to calculate the length of the string
int calculateLength(string str) {
    return str.length();
}

// Function to convert a string to uppercase
string convertToUppercase(string str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }
    return str;
}

int main() {
    string input = "Waqas";
    
    // Call the function to calculate the length
    int length = calculateLength(input);
    cout << "Length of the string: " << length << endl;

    // Call the function to convert to uppercase
    string upperCaseString = convertToUppercase(input);
    cout << "Uppercase string: " << upperCaseString << endl;

    return 0;
}

