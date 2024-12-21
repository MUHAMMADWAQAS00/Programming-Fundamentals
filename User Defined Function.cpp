#include<iostream>
using namespace std;

//dataType name() Round brackets means Functions
//stand alone functions k liye data type void use kren gey
//void sayHello(){
//	cout<<"Hello";
//}
// void Pakistan();
//int main(){
//	Pakistan();
//	
//	
//	
//	return 0;
//}
//
//
////void Pakistan(){
////	cout<<"Pakistan";
////}

int getSum (int a, int b);

int main(){
	int firstNumber, secondNumber;
	cout<<"Enter first Number :"<<endl;
	cin>>firstNumber;

    cout<<"Enter Second Number :"<<endl;
	cin>>secondNumber;
	
	cout<<"Your Sum is "<<getSum(firstNumber , secondNumber);
	return 0;	
}

int getSum (int a , int b){
	return a * b ;
}











