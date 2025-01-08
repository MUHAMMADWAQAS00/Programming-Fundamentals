//#include <iostream>
//using namespace std;
//
//int main() {
//    int choice, totalBill = 0;
//
//    do {
//        // Display menu
//        cout << "Welcome to the Cafe!" << endl;
//        cout << "1. Tea - $2" << endl;
//        cout << "2. Coffee - $5" << endl;
//        cout << "3. Chai - $6" << endl;
//        cout << "4. Biscuit - $7" << endl;
//        cout << "5. Exit" << endl;
//        cout << "Please enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//            case 1:
//                cout << "You ordered Tea. $2 added to your bill." << endl;
//                totalBill += 2;
//                break;
//            case 2:
//                cout << "You ordered Coffee. $5 added to your bill." << endl;
//                totalBill += 5;
//                break;
//            case 3:
//                cout << "You ordered Chai. $6 added to your bill." << endl;
//                totalBill += 6;
//                break;
//            case 4:
//                cout << "You ordered Biscuit. $7 added to your bill." << endl;
//                totalBill += 7;
//                break;
//            case 5:
//                cout << "Thanks for ordering! Your total bill is: $" << totalBill << endl;
//                break;
//            default:
//                cout << "Invalid choice. Please select from the menu." << endl;
//                break;
//        }
//    } while (choice != 5);
//
//    return 0;
//
//}



#include<iostream>
using namespace std;

int main(){
	
	int choice,totalBill =0;
	do{
		cout << " Press 1 for ordering tea"<<endl;
		cout << " Press 2 for ordering tea"<<endl;
		cout << " Press 3 for ordering tea"<<endl;
		cout << " Press 4 for ordering tea"<<endl;
		cout << " Press 5 for total bill"<<endl;
		cin >> choice;
		
		switch(choice){
			
			case 1:
				cout << " tea is ordered " << endl;
				totalBill += 2;
			break;
			case 2:
				cout << " tea is ordered " << endl;
				totalBill += 3;
			break;
			case 3:
				cout << " tea is ordered " << endl;
				totalBill += 3;
			break;
			case 4:
				cout << " tea is ordered " << endl;
				totalBill += 4;
			break;
			case 5:
				cout << " You order is successful. Your total bill is  :"<<totalBill << endl;				
			break;
			default:
				cout<<"we don't have more in cart"<<endl;
				break;	
		}	
	}while (choice != 5);
	return 0;
}

