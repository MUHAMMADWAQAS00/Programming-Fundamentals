//object
//ek structure uska data main me input lena ha udf 1 ko call krwa kr usse minimum
// find krwana ha minimum ko udf 2 me bhej udf 2 me data declare krwana ha or maximum
// find krwa kr minimum or maximum ka addition udf 1 me bhejna ha or udf 1 print krwai ga
#include<iostream>
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
   
    for (int i = 0; i < 5; i++) {
    	 cout << "Enter marks of subject: "<< i+1 << endl;
        cin >> std.marks[i];
    }

    // Call func1 with student data
    func1(std);

    return 0;
}

void func1(Student std){
	
	int smallest = INT_MAX;
	for(int i = 0 ; i < 5; i++){
		if (std.marks[i] < smallest){
		smallest = std.marks[i];
	}
	}
	cout << "smallest num is :" << smallest << endl;

	cout << "addition is "<<func2(smallest) << endl;
}
int func2(int minMarks){
	
	Student std1 = {123 , "Ali" ,{45,65,67,78,87}};

	int ans = minMarks + std1.marks[4];
	return ans;
	
}


//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Student {
//    int id;
//    string name;
//    int marks[5];
//};
//
//void func1(Student std);
//int func2(int minMarks);
//
//int main() {
//    Student std;
//
//    // Input Student Data
//    cout << "Enter student name: ";
//    cin >> std.name;
//    cout << "Enter student ID: ";
//    cin >> std.id;
//
//    for (int i = 0; i < 5; i++) {
//        cout << "Enter marks of subject " << i + 1 << ": ";
//        cin >> std.marks[i];
//    }
//
//    // Call func1 with student data
//    func1(std);
//
//    return 0;
//}
//
//void func1(Student std) {
//    int smallest = INT_MAX;
//
//    // Find the smallest marks
//    for (int i = 0; i < 5; i++) {
//        if (std.marks[i] < smallest) {
//            smallest = std.marks[i];
//        }
//    }
//    cout << "Smallest marks are: " << smallest << endl;
//
//    // Call func2 with smallest marks and print the result
//    cout << "Addition is: " << func2(smallest) << endl;
//}
//
//int func2(int minMarks) {
//    // Declare a new student
//    Student std1 = {123, "Ali", {45, 65, 67, 78, 87}};
//
//    // Calculate the sum of smallest marks and the last subject's marks of the second student
//    int ans = minMarks + std1.marks[4];
//    return ans;
//}

