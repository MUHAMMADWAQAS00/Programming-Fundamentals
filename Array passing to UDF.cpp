//#include<iostream>
//using namespace std;
//int search (int , int[]);
//int main(){
//
//	int  arr[7]={3,-5,0,6,2,3,5};
//	int no , ans;
//	cin>>no;
//	ans = search(no , arr);
//	cout<<no<< "is found at position "<<ans;
//	return 0;
//}
//search(int x , int arr[]){
//	int i , position = 0 ;
//
//	for( i = 0; i <=0; i++){
//		if(x == arr[i])
//		{
//		position = i + 1;
//		break;
//		}
//	}
//	if(position == 0)
//	{
//		cout << "num is not found :"<<endl;
//	}else{
//		return(position);
//	}
//}
//#include <iostream>
//using namespace std;
//
//// Function prototype with return type
//int search(int, int[]);
//
//int main() {
//    int arr[7] = {6,6,9,-9,8,8,-7};
//    
//    int no, ans;
//    
//    cout << "Enter the number to search: ";
//    cin >> no;
//
//    ans = search(no, arr); // Missing semicolon added
//    if (ans != 0)
//        cout << no << " is found at position " << ans << endl;
//    else
//        cout << no << " is not found in the array." << endl;
//
//    return 0;
//}
//
//// Function definition
//int search(int x, int arr[]) {
//    int position = 0; // Correct spelling of `position`
//
//    for (int i = 0; i < 7; i++) { // Fix loop condition
//        if (x == arr[i]) {
//            position = i + 1;
//            break;
//        }
//    }
//
//    return position; // Return the position directly
//}



#include<iostream>
using namespace std;
int search (int , int[]);
int main(){
	int arr[10] = {1,2,3,4,5,56,6,7,8,9};
	int no , ans;
}
