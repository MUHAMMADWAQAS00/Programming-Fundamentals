#include<iostream>
#include<fstream>
//File Handling
using namespace std;

int main(){
	int num1, num2;
	cout << "enter num"<<endl;
	cin  >> num1;
	
	cout << "enter num 2"<<endl;
	cin  >> num2;
	
	int sum = num1 + num2;                    //app means append mode
	
	
	ofstream outFile("calculation_results.txt",ios::app);
	if(!outFile){
		cout << "Error: Unable to open file for saving results." << endl;
		return 1;
	}
	outFile << "The sum of " << num1 << "and" << num2 << "is :" << sum<<endl;
	outFile.close(); // close the file
	
	cout << "Result saved to 'calculation_results.txt'."<<endl;
	return 0;
}
