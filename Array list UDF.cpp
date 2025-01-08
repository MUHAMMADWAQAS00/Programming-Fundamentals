#include <iostream>
using namespace std;
int func1 (int,int);
int func2 (int);

int main(){
	int no1,no2,ans;
	cout<<"Enter Two Numbers Which You want to square and then sum of that numbers :"<<endl;
       cin>>no1 >> no2;	
	ans = func1(no1,no2);
	cout<<ans;

	return 0;
}   int func1(int x, int y){
	int m,n;
	m = func2(x);
	n = func2(y);
	return(m+n);
}

	int func2 (int z)

	{
	return (z*z);
}
