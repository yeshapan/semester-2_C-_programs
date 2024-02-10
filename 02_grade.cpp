//C++ program to ask user for marks and display grade obtained

#include <iostream>
using namespace std;
int main() {
    float marks; //declare variable
    char grade;
  
    // Input marks from the user
    cout << "Enter marks obtained : ";
    cin >> marks;

    // Find grade using else if statements
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

    // Display the grade obtained
    cout << "Grade: " << grade << endl;

    return 0;
}
