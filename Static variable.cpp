
#include <iostream>
using namespace std;
int abc(int);

int main(){
	int x;
	for(int x = 1; x <=3 ; x++){
		cout<<abc(x)<<endl;
	}
}
int abc(int i)
{
	static int c = 10;
	  int d = 10;
	c = c * 1;
	c++;
	d = d*i;
	d++;
	cout<<d<<endl;
	return(c);
}
