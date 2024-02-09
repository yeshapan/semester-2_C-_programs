//C++ program to ask user for marks and display grade obtained

#include <iostream>
using namespace std;
int main() {
    float marks; //declare variable
    char grade;
  
    // Input marks from the user
    cout << "Enter the marks: ";
    cin >> marks;

    // Find grade
    if (marks >= 90) {
        grade = 'A';
    } 
    else if (marks >= 80) {
        grade = 'B';
    } 
    else if (marks >= 70) {
        grade = 'C';
    } 
    else if (marks >= 60) {
        grade = 'D';
    } 
    else {
        grade = 'F';
    }

    // Display the grade
    cout << "Grade: " << grade << endl;

    return 0;
}
