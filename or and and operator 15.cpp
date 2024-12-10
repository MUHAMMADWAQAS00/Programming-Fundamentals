//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int num1, num2;
//
//    // Input two numbers
//    cout << "Enter two integers: ";
//    cin >> num1 >> num2;
//
//    // Example of AND operator
//    if (num1 > 0 && num2 > 0) {
//        cout << "Both numbers are positive.\n";
//    } else {
//        cout << "At least one number is not positive.\n";
//    }
//
//    // Example of OR operator
//    if (num1 == 0 || num2 == 0) {
//        cout << "At least one number is zero.\n";
//    } else {
//        cout << "Neither number is zero.\n";
//    }
//
//    // Example of NOT operator
//    if (!(num1 > 0)) {
//        cout << "The first number is not positive.\n";
//    } else {
//        cout << "The first number is positive.\n";
//    }
//
//    // Conditional (ternary) operator example
//    string result = (num1 > num2) ? "The first number is greater than the second." 
//                                  : "The first number is not greater than the second.";
//    cout << result << endl;
//
//    return 0;
//}


#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    cout<<"Enter 2 numbers"<<endl;
    cin>>num1>>num2;
    
    if(num1 > 0 && num2 > 0){
    	cout<<"both num +ve"<<endl;
	}else{
		cout<<"at least one num is not positve"<<endl;
	}
    
    if(!(num1 >0)){
    	cout<<"num is not positive "<<endl;
	}else{
		cout<<"num is positive"<<endl;
	}
    
    

    return 0;
}

