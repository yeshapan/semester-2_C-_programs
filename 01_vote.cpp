//C++ program to check if user is eligible to vote or not

#include <iostream>
using namespace std;
int main() {
  
    int age; //declare variable

    // Get age input
    cout << "Enter your age: ";
    cin >> age;

    // Check eligibility using if else
    if (age >= 18) {
        cout << "Hooray! You are eligible to vote!\n";
    } else {
        cout << "Oopsie, you are not eligible to vote yet. Wait until you turn 18.\n";
    }

    return 0;
}
