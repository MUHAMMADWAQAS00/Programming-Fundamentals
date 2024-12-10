//#include <iostream>
//using namespace std;
//
//int main() {
//    // Declare variables
//    double A, b, x, y, a, c, d;
//
//    // Input values
//    cout << "Enter values for b, x, y, a, c, and d: ";
//    cin >> b >> x >> y >> a >> c >> d;
//
//    // Ensure 'y' and 'c' are not zero to avoid division by zero
//    if (y == 0 || c == 0) {
//        cout << "Error: 'y' and 'c' must not be zero to avoid division by zero." << endl;
//        return 1; // Exit the program with an error code
//    }
//
//    // Calculate A using the given formula
//    A = (7 * 7 * b * (x * y + a) / c - 0.8 + 2 * b * d) / ((x + a) * (1 / y));
// 	A = (7*7*b*(x*y+a)/c-0.8 + 2 *b*d)/((x+a)*(1/y));
//   
//
//    // Output the result
//    cout << "The value of A is: " << A << endl;
//
//    return 0;
//}

#include<iostream>
using namespace std;
int main(){
	double  A,x,c,a,b,d,y;
	cout<<"enter the values of b,x,c,a,d,y"<<endl;
	cin>>x>>c>>a>>b>>d>>y;
	if(y == 0 || c == 0){
		cout<<"y and c value should be greater than 0";
	return 1;
	}
////	A = (7*7*b*(x*y+a)/c-0.8 + 2 *b*(d))/((x+a)*(1/y));
// //	A = (7*7*b*(x*y+a)/c-0.8 + 2 *b*d)/((x+a)*(1/y));
     A = (7 * 7 * b * (x * y + a) / c - 0.8 + 2 * b * d) / ((x + a) * (1 / y));
	cout<<"value of A is"<<A<<endl;
	
	
	return 0 ;
}
