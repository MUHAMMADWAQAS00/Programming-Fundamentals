#include<iostream>
using namespace std;
float calculateAverage(int marks[], int size);
int main(){
	int size;
	cout<<"Enter The size how much Subject do you have "<<endl;
	cin >> size;
	int studentMarks[size];
	for(int i = 0; i < size ; i++){
		cout<<"Enter Your Subject Marks"<<i+1<<" :"<<endl;
		cin>>studentMarks[i];
	}
	cout<< "You Entered Marks: "<<endl;
	for (int i = 0; i < size ; i++){
		cout<< studentMarks[i]<<" "<<endl;
	}
	cout<< endl;
	int sum = 0;
	for( int i = 0; i < size; i++){
		sum += studentMarks[i];
	}
	cout<<"Sum of marks :" << sum << endl; 
	
	float avg = calculateAverage(studentMarks , size);
	cout<<"Your average is: "<<avg;
	return 0;
}

float calculateAverage (int marks[], int size){
	int sum = 0;
	for(int i = 0 ; i < size ; i++){
		sum += marks[i];
	}
	return (float)sum / size;
}
