//#include<iostream>
//using namespace std;
//int main(){
//	int arr[3][5]={{3,4,5,6,7},{8,9,6,7,5},{1,2,3,4,5}};
//	int sum = 0;
//	for(int i = 2; i >=0 ; i--){
//		for(int j = 4; j>=0 ; j--){
//		
//
//	sum = sum + arr[i][j];
//	cout<<arr[i][j]<<endl;
//	if(arr[i][j] % 3 == 0 || arr[i][j] % 5 == 0 ){
//		cout<<arr[i][j]<<endl;
//	}
//}
//	//}
//}
//	return 0;
//
//}


//#include <iostream>
//#include <string.h>
//using namespace std;
//int main(){
//	char str1[20]="Ahmed\0";
//	char str2[20],str3[ 20],str4[40];
//	
//	cout<<"Enter any name for given value str 2 \0"<<endl;
//	cin >> str2;
//	cout<<"Enter any name for given value str 3 \0 "<<endl;
//	cin >> str3;
//	//output a string which is intialize in str 1
//	cout<<str1<<endl;
//	//Used for checking the lenth of the string
//	cout<<strlen(str1)<<endl;
//	//changing a string into uppercase
//	cout<<strupr(str3)<<endl;
//	//for copy an array use an place where copy then apply the string which u copying
//	cout<<strcpy(str4,str3)<<endl;
//	//get s is not working
//	
//	return 0;
//}


#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str[40];
	int i, count = 0;
	cin>>str;
 for(int i=0 ; str[i]!=0; i++){
	cout<<str[i];
	
	}count++;
	
	
	
	
	return 0;
}
