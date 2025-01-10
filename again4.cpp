#include<iostream>
using namespace std;
struct student{
	int id;
	 char name;
	float marks[5];
};

void fun1(student std);
int fun2(int max);
int main(){
	student std;
	cout << "enter the student data" << endl;
	cin >> std.id;
	
	cout << "enter name"<<endl;
	cin >> std.name;
	
	for(int i =0 ; i < 5 ; i++){
		cout << "enter marks of subject "<<i+1;
		cin >> std.marks[i];
	}
	

	return 0;
}

void fun1(student std){
	int smallest = INT_MAX;
	for(int i = 0 ; i < 5 ; i++){
		if(std.marks[i] < smallest  ){
		smallest = std.marks[i];
	}
	}
	
	fun2(smallest);
		fun1( std);
	cout << " smallest is" << smallest << endl;
	cout << "addition is " << fun2(smallest);
}
int fun2(int max){
	
//	student std1 = { 123, "Ali" ,{34,56,67,87,65}};
    student std1 = {"Ali", 123 , {45.0,65.1,67.3,78.0,87.0}};
	int result = std1.marks[3] + max;
	
	return result;
	
	
}
