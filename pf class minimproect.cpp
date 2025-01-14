//#include<iostream>
//using namespace std;
//void func1( data, xyz);
//int func2(int);
//struct data{
//int id; 
//char name;
//int marks[5];
//	
//};
//
//int main(){
//	int i;
//	struct data std;
//	cin >> std.name;
//	cin >> std.id;
//	for ( int i =0 ; i < 5 ; i++)
//	{
//		cin >> std.marks[i];
//	}
//	func1(std);
//}
// void func1(int xyz)
//	{
//		int min, i;
//		cout << xyz.id;
//		min = xyz.marks[0];
//		for(int i = 1; i <= 4; i++)
//		{
//			if(min >xyz.marks[i])
//			min=xyz.marks[i];
//		}
//		func2(min);
//	}	
//
//int func2(int x){
//	int ans;
//	data abc = {20, "Ali",{34,94,89,59,90}};
//	ans = x+ abc.marks[4];
//	return (ans);


#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    int marks[5];
};

void func1(Student std);
int func2(int minMarks);

int main() {
    Student std;

    // Input Student Data
    cout << "Enter student name: ";
    cin >> std.name;
    cout << "Enter student ID: ";
    cin >> std.id;
    cout << "Enter marks for 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> std.marks[i];
    }

    // Call func1 with student data
    func1(std);

    return 0;
}

void func1(Student std) {
    // Find the minimum marks from the student's data
    int minMarks = std.marks[0];
    for (int i = 1; i < 5; i++) {
        if (minMarks > std.marks[i]) {
            minMarks = std.marks[i];
        }
    }

    // Pass the minimum marks to func2
    int result = func2(minMarks);

    // Print the final result
    cout << "Minimum marks from first student: " << minMarks << endl;
    cout << "Final result after adding max marks of student 2: " << result << endl;
}

int func2(int minMarks) {
    // Declare another student's data
    Student student2 = {20, "Ali", {34, 94, 89, 59, 90}};

    // Find the maximum marks of student 2
    int maxMarks = student2.marks[0];
    for (int i = 1; i < 5; i++) {
        if (maxMarks < student2.marks[i]) {
            maxMarks = student2.marks[i];
        }
    }

    // Add max marks of student 2 to the minimum marks of student 1
    int result = minMarks + maxMarks;

    return result;
}

