#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	
int choice,total_bill;
do{
	cout<< "Quetta CAFETERIA "<<endl;
	cout<< " Hello Sir Welcome"<<endl;
	cout<< "See menu in our cafeteria"<<endl;
	cout<< "1-Tea - $2 "<<endl;
	cout<< "2-Coffee - $3 "<<endl;
	cout<< "3-Sandwich - $5 "<<endl;
	cout<< "4-Burger - $7"<<endl;
	cout<< "5-Exit  "<<endl;
	cout<<"Select 1 to 4 num for order and 5 for exit "<<endl;
	cin>> choice;

	
	switch(choice){
	case 1:
		cout<<" You are ordering Tea.Tea is for $2"<<endl;
		total_bill =  +2;
		//cout<<""<<total_bill<<endl;
		
	break;
	case 2:
	    cout<<"You are ordering coffee.Coffee is for $3";
	    total_bill += 3;
	    //cout<<""<<total_bill;
	break;
	case 3:
		cout<<" You are ordering sandwitch .Sandwitch is for $5";
		total_bill +=5;
		//cout<<""<<total_bill;
	break;		
	case 4:
		cout<<" You are ordering Burger.Burger is for $7";
		total_bill +=7;
		//cout<<""<<total_bill;
	break;
	default :
		cout<< "Printing Your Bill"<<endl;
	
	        
}
}
while(choice!=5);

cout<<"your bill is : " <<total_bill;



	return 0;
	
}

