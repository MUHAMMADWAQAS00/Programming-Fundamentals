#include<iostream>
using namespace std;
struct teacher{
	char name[50];
	int age;
	float salary;
};
int main(){
	
		teacher std[5]={{"Sir Farzeen", 25 , 130000.0} , {"Sir Mansoor", 30 , 120000.0} , { "Sir Owais" , 35 , 150000.0} , { "Sir Sheeraz", 40 , 200000.0}  , {"Sir Zubair", 30 , 80000.0}};
		int a = 1;
	 do{
	 	cout<<	std[a].name<<endl;
	 	cout<<std[a].age<<endl;
	 	cout<<std[a].salary<<endl;
	 	a++;
	 }
	 while(a < 5);
	
	return 0;
}
