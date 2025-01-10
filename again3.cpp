#include<iostream>
using namespace std;
struct student{
	char name;
	int id;
	float marks[5];
};

void fun1(student waqas);
int fun2(int smax);
int main(){
	student waqas;
	cout << "Enter student details" << endl;
	
	cin >> waqas.name;
	
	cout << "enter id"<<endl;
	cin >> waqas.id;
	
	for(int i = 0 ; i < 5 ; i++){
		cout << "enter the marks of subject" << i+1;
		cin >> waqas.marks[i];
	};
	
	
	fun1(waqas);
	
	return 0;
}
void fun1(student waqas){
	int i;
	int smallest = INT_MAX;
	if(smallest < waqas.marks[i]){
		smallest = waqas.marks[i];
	}
	cout << "smallest marks are in subject" << smallest;
	fun2(smallest);
	cout << "the result after addition is :" <<fun2(smallest);
}

int fun2(int max){
	student waqas = {"waqas" , 123, {45,67,78,87,67}};
	int sum;
	sum = max + waqas.marks[3];
	return sum;
}
