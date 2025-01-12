//#include<iostream>
//#include<string>
//
//using namespace std;
//struct Student
//{
//	char name , grade;
//	int rno;
//	int marks;
//	float avg;
//
//};
//
//int main(){
//	Student s;
//	cout<<"Enter Your Name: "<<endl;
//	cin>>s.name;
//	
//	cout<<"Enter Your Roll no: "<<endl;
//	cin>>s.rno;
//	
//	cout<<"Enter Your Marks: "<<endl;
//	cin>>s.marks;
//	
//	cout<<"Enter avreage: "<<endl;
//	cin>>s.avg;
//	
//	cout<<"Enter grade: "<<endl;
//	cin>>s.grade;
//	
//	cout<<"You entered the following details: \n";
//	cout<<"Name: "<<s.name<<endl;
//	cout<<"Roll No is: "<<s.rno<<endl;
//	cout<<"Marks are: "<<s.marks<<endl;
//	cout<<"Average is: "<<s.avg<<endl;
//	cout<<"Your Grade is : "<<s.grade<<endl;
//
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct Student {
//    string name;  // Changed from char to string
//    char grade;   // grade can remain as a char
//    int rno;
//    int marks;
//    float avg;
//};
//
//int main() {
//    Student s;
//
//    cout << "Enter Your Name: " << endl;
//    getline(cin, s.name);  // Use getline to read a full string including spaces
//
//    cout << "Enter Your Roll No: " << endl;
//    cin >> s.rno;
//
//    cout << "Enter Your Marks: " << endl;
//    cin >> s.marks;
//
//    cout << "Enter Average: " << endl;
//    cin >> s.avg;
//
//    cout << "Enter Grade: " << endl;
//    cin >> s.grade;
//
//    cout << "You entered the following details:\n";
//    cout << "Name: " << s.name << endl;
//    cout << "Roll No: " << s.rno << endl;
//    cout << "Marks: " << s.marks << endl;
//    cout << "Average: " << s.avg << endl;
//    cout << "Grade: " << s.grade << endl;
//
//    return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Student {
//    string name;
//    int rollNo;
//    int marks[3];
//};
//
//// Function to add student details
//void addStudent(Student &s) {
//    cout << "Enter Name: ";
//    cin.ignore();
//    getline(cin, s.name);
//    cout << "Enter Roll No: ";
//    cin >> s.rollNo;
//    cout << "Enter Marks for 3 Subjects:\n";
//    for (int i = 0; i < 3; ++i) {
//        cin >> s.marks[i];
//    }
//}
//
//// Function to display student details
//void displayStudent(const Student &s) {
//    int total = 0;
//    cout << "\nName: " << s.name << "\nRoll No: " << s.rollNo << "\nMarks: ";
//    for (int i = 0; i < 3; ++i) {
//        cout << s.marks[i] << " ";
//        total += s.marks[i];
//    }
//    cout << "\nTotal Marks: " << total << endl;
//}
//
//int main() {
//    Student s;
//    addStudent(s);
//    displayStudent(s);
//    return 0;
//}


