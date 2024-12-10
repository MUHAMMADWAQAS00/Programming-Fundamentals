//#include<iostream>
//using namespace std;
//int main(){
//	int choice,balance,amount;
//
//	balance = 1000;
//	//For menu
//	do{
//	cout<<"welcome"<<endl;
//	cout<<"Thanks For Reaching Us"<<endl;
//	cout<<"Press 1-  To Check Your Account Balance "<<endl;
//	cout<<"Press 2- For withdrawl"<<endl;
//	cout<<"Press 3- For Deposit"<<endl;
//	cout<<"Press 4- For exit"<<endl;
//	cin>>choice;
//	switch(choice){
//		case 1:
//			cout<<"Your account balance is :$"<<balance<<endl;
//		break;
//		case 2:
//			cout<<"Enter the amount to withdrawl :$"<<amount<<endl;
//			cin>>amount;
//		if(amount>0 && amount <= balance){
//				balance = balance - amount;
//				cout<<"new balance:$"<<balance<<endl;		
//			}else{
//				cout<<"Insufficient balance"<<endl;
//			}
//		break;
//		case 3:
//			cout<<"Enter the amount to deposit :$"<<amount<<endl;
//			cin>>amount;
//			balance += amount;
//			cout<<"Your new balance is :$"<<balance<<endl;
//		case 4:
//			cout<<"Thanks for using our branch. Good Byee!"<<endl;
//		break;
//		default:
//			cout<<"Invalid num is using :"<<endl;			
//	}
//		
//}while(choice != 4);
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main(){
//	int choice,amount,balance;
//	balance = 100;
//	
//	do{
//		cout<<"Welcome :"<<endl;
//		cout<<"Press 1- check balance"<<endl;
//        cout<<"Press 2- withdrawl"<<endl;
//        cout<<"Press 3- deposit"<<endl;
//        cout<<"Press 4- exit"<<endl;
//        cin>>choice;
//        switch(choice){
//		
//		case 1:
//		cout<<"your balance is :$"<<balance<<endl;
//		break;
//		case 2:
//		cout<<"Enter the amount you want to withdrawl :$";
//		cin>>amount;
//		balance -= amount;
//		
//		if(amount > balance && amount <= balance ){
//			cout<<"insuficient balance";
//		}		else{
//			cout<<"your new balance is :$"<<balance<<endl;
//		}
//		break;
//		case 3:
//			cout<<"enter amount to deposit :";
//			cin>>amount;
//			balance += amount;
//			if(balance > 0){ 
//			cout<<"Deposit added. New balance :$"<<balance<<endl;
//			}else{
//				cout<<"Invalid choice :\n";
//			}
//		break;
//		case 4:
//			cout<<"thanks Good BYee:\n";
//			break;
//		default:
//			cout<<"invalid choice:"<<endl;
//	}
//	}while(choice !=4);
//	
//	return 0;
//}
