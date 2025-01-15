// LENGTH   // TABLE    // FACTORIAL  // UPPERCASE  // LOWERCASE   //


#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string s;//User input de ga koi bhi name or uski length count ho jai gii
	cout << "Enter Name" << endl;
	getline(cin , s);
	cout << "The length of "<< s << " is :" << s.length() << endl;
	
	
	int i,n,fact;//user jo bhi num input kre ga uska factorial count ho jai ga
	cout << "Enter num" << endl;
	cin >> n;
	fact = n;
	
	for(i =1 ; i < n ; i++){
		fact = fact*i;
	}
	cout << "The Factorial of " << n << " is: " << fact << endl;
	
	
	int m ;//user jo bhi input kre ga uska table genrate ho jai ga
	cout << "Enter Num"<< endl;
	cin >> m;
	for(i = 1 ; i <= 10 ; i++){
		cout << m << " * " << i << " = " << m*i <<endl;
	}
	

	char a[100];//user small letters me jo bhi name de ga usko upper case me convert ho jai ga 
	cout << "Enter Name"<< endl;
	cin >> a;
	cout << "The Upper Case  Form is : "<< endl;
	puts(strupr(a)) ;
	
	char b[100];//user Capitals letters me jo bhi name de ga usko lower case me convert ho jai ga 
	cout << "Enter Name"<< endl;
	cin >> b;
	cout << "The Upper Case  Form is : "<< endl;
	puts(strlwr(b)) ;
	return 0;
}
