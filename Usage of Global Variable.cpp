#include<iostream>
using namespace std;
void func1(void);
int func2(void);
int y;
int main(){
	int ans;
	cin>> y;
	func1();
	ans = func2( );
	cout << ans;
	return 0;
}

void func1( void)
{
int x;
for( int x = 1; x <= 10 ; x++){
	cout<< y*x<<" ";
	}
	cout<<endl;
}

int func2(void)
{
	int fact =1;
	
	for (int i = y ; i > 0; i--){
		fact *= i;
	}
	return (fact);
}
	

//#include <iostream>
//using namespace std;
//
//void func1(void);
//int func2(void);
//
//int y; // Global variable
//
//int main() {
//    int ans;
//    cin >> y; // Input value for y
//    func1();
//    ans = func2();
//    cout << ans;
//    return 0;
//}
//
//void func1(void) {
//    for (int x = 1; x <= 10; x++) {
//        cout << y * x << " ";
//    }
//    cout << endl; // To separate the output
//}
//
//int func2(void) {
//    int fact = 1; // Initialize fact to 1
//    for (int i = y; i > 0; i--) {
//        fact *= i;
//    }
//    return fact;
//}

