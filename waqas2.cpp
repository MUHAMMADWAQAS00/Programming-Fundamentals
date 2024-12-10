//#include<iostream>
//using namespace std;
//int main(){
//	int menu,name,choice;
//	int account_Balance;
//	account_Balance = 100;
//	cout<<"Enter your name\n";
//	cin>> menu;
//	cout<<" your Atm is open:\n";
//	
////	cout<<"Press 1 to see yours Account Menu:\n";
//   	
//	cout<<"Account Menu:\n";
//	cout<<"Press 1 : For Check Balance:\n";
//	cout<<"Press 2 : For WithDrwal Money:\n";
//	cout<<"Press 3 : Deposit Money:\n";
//	cout<<"Press 4 : For Exit:\n";
//	cin>>menu;
//	switch(menu){
//	case 1:
//		cout<<"Your Account Balance is $100\n";
//	
//		cout<<""<<account_Balance;
//	break;
//	case 2:
//	 	cout<<"Your New balance is: \n"<<account_Balance;
//	 	account_Balance -= 100;
//	break;
//	 
//	 default: 
//	 cout<<"Invalid selection";
//	 
//	 
//    }  
//	return 0;
//}
#include <iostream>
using namespace std;

int main() {
    int pin = 1234, enteredPin, choice;
    double balance = 1000.0, amount;

    // Pin verification
    cout << "Welcome to the ATM!\n";
    cout << "Enter your PIN: ";
    cin >> enteredPin;

    if (enteredPin != pin) {
        cout << "Incorrect PIN. Access denied.\n";
        return 0; // Exit the program
    }

    do {
        // Menu options
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Check balance
                cout << "Your current balance is: $" << balance << endl;
                break;

            case 2: // Deposit money
                cout << "Enter the amount to deposit: $";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Amount deposited successfully! New balance: $" << balance << endl;
                } else {
                    cout << "Invalid amount entered.\n";
                }
                break;

            case 3: // Withdraw money
                cout << "Enter the amount to withdraw: $";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Amount withdrawn successfully! New balance: $" << balance << endl;
                } else if (amount > balance) {
                    cout << "Insufficient balance.\n";
                } else {
                    cout << "Invalid amount entered.\n";
                }
                break;

            case 4: // Exit
                cout << "Thank you for using the ATM. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

