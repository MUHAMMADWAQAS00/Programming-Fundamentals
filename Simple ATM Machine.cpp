#include<iostream>

#include<conio.h>

using namespace std;

int main()

{ 

    double balance , deposit , withdraw;

    int option;

    balance=100; //default balance

    do{

    

	cout<<"\n\t\t\t***************MENU***************";

	cout<<"\n\t*                                                             *";

	cout<<"\n\t*      1. Press 1 for Check yours Account Balance             *";

	cout<<"\n\t*      2. Press 2 for Deposit in yours Account                *";

	cout<<"\n\t*      3. Press 3 for Withdraw your Money                     *";

	cout<<"\n\t*      4. Press 4 for Transfer Money                          *";

	cout<<"\n\t*      5. Press 5 for Exit Your Transaction                   *";

	cout<<"\n\t*                                                             *";

	cout<<"\n\t**********************************";

	cout<<"\n\t Please Choose an Option: ";

	cin>>option;
	


	switch(option)

	{

		case 1:
            cout<<"\n\tThanking You For Choosing Us! "<<endl;
			cout<<"\n\tYour Current Balance is: $"<<balance<<endl;
			cout<<"\n\tPlease Deposit more Money for Better experience in Future!!"<<endl;

			break;

		case 2:
            cout<<"\n\tThanking You For Choosing Us! "<<endl;
			cout<<"\n\tEnter Amount You Want to deposit: "<<endl;
            cout<<"\n\t$ ";
			cin>>deposit;

			balance += deposit; // balance =balance + deposit;

			cout<<"\n\t Deposit Successful. Your New Balance is : $"<<balance<<endl;

			break;

		case 3:
            cout<<"\n\tThanking You For Choosing Us! "<<endl;
			cout<<"\n\tHow much do you want to withdraw? "<<endl;
            cout<<"\n\t$";

               cin>>withdraw;
             

			if(balance<withdraw)
           
			   cout<<"\n\tYou do not have enough money in your account to withdraw"<<endl; 
			  
            
			else
		
				
			balance -= withdraw; // balance =balance - deposit;

			cout<<"\n\t Withdraw Successful. Your New Balance is : $"<<balance<<endl;
		    

			break;
        


		case 4:
            cout<<"\n\tThanking You For Choosing Us! "<<endl;
			cout<<"\n\t This Service is Currently Not Available!!! We Are Apologize on it and we are continuosly working on it for your better experience!!"<<endl;

			break;

		default:

			if(option !=5)

			cout<<"\n\t Invalid Option Please Try Again"<<endl;

			break;

			

			}

	

}while(option !=5);

system("pause");

	

	return 0;

	getch();

}
