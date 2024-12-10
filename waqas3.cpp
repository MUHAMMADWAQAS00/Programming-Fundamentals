#include<iostream>
using namespace std;
int main(){
	int num1,num2,result,choice,operation;
	result = num1,num2;
	cout<<"It's a simple calculator :\n";
	
	cout<<"Enter first number\n";
	cin >> num1;
	cout<<"Enter the operation the result you want just like + - / * :\n";
	cin>>operation;
	cout<<"Enter second number :\n";
	cin>> num2 ;
	do{
	switch(choice){
		case 1:
		result = num1 + num2;
		cout<<""<<result;
		break;
		case 2:
			if(num1>num2){
				result == num1 - num2;
				cout<<"result of subtraction is :"<<result;
			}else{
				cout<<"Your number is less than second num :\n";
				
		}	
	}break;
	}while (choice!=2);
 return 0;
}
