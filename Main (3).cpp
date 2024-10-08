#include <iostream>

using namespace std;

class Student {
private:
string name;
int rollNumber;
float marks;
public:
// Method to input student details
void inputDetails() {
cout << "Enter student's name: ";
cin >> name; // Single word input for name
cout << "Enter roll number: ";
cin >> rollNumber;
cout << "Enter marks: ";
cin >> marks;
}
// Method to display student details
void displayDetails() {
cout << "\nStudent Details:\n";
cout << "Name: " << name << endl;
cout << "Roll Number: " << rollNumber << endl;
cout << "Marks: " << marks << endl;
}
};
int main() {
// Create two Student objects
Student student1, student2;
// Input details for the first student
cout << "Enter details for the first student:\n";
student1.inputDetails();
// Input details for the second student
cout << "\nEnter details for the second student:\n";
student2.inputDetails();
// Display details of the first student
cout << "\nDetails of the first student:";
student1.displayDetails();
// Display details of the second student
cout << "\nDetails of the second student:";
student2.displayDetails();
return 0;
}
