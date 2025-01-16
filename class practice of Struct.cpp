#include<iostream>
#include<string>

using namespace std;

struct Student {
	string name;
	string id;
	float gpa;
};


int main(){
	

	Student s1;
	
	s1.name = "Waqas Awan";
    s1.id   = "F24BSE018";
    s1.gpa = 4.0;
    cout<<s1.name<<endl;
	cout<<s1.id<<endl;
	cout<<s1.gpa<<endl;
}
