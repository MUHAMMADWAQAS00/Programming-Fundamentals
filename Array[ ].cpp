//#include<iostream>
//using namespace std;
//int main(){
//	// Taking 2 array 1 and 2 and declare values to 1 and take  values from user for array 2  
//	int arr1[6],arr2[6]={-3,0,4,5,3,3};
//	//declaration/ Take integer as i and j
//	int i,j;
//	//use first loop for first table numbers
//	for(int i =0; i<=5; i++){
//		cout<<"enter value for comparing"<<endl;
//		cin>>arr1[i];
//	}
//	// use second loop for sencond table numbers
//		for(int i =0,j =5; i<=5,j>=0; i++, j--){
//	
//       cout<<"sum of comapring Different numbers "<<arr1[i] + arr2[j]<<endl;;
//	} 
//	
//         
//	return 0;
//}
#include <iostream>
using namespace std;
int main(){
	int arr[7];
	int i,min;
	for(int i=0; i<=6; i++){
		cout<<"enter the value at position "<<i+1<<endl;
		cin>> arr[i];
	}
	min = arr[0];
	for(int i =1; i<=6 ; i++){
		if(min > arr[i]){
			min = arr[i];
		}
		
	}cout<<"minimum value is "<<min<<endl;
	
	
	
	return 0;
}
