#include <iostream>
using namespace std;
int main (){
	char gender;
	cout<<"enter any alphabet if you are male enter m\n";
	cin>>gender;
	
	if(gender == 'm' || gender == 'M'){
		cout<<"you are male\n";
	}else{
		cout<<"you are female\n";
	}
	return 0;
}
