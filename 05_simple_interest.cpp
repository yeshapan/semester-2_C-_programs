//C++ program to calculate simple interest

#include <iostream>
using namespace std;
int main() {
  
    float prin, rate, time, si; //declare variable

    // Get inputs from user
    cout << "Enter principal amount: ";
    cin >> prin;
    
    cout << "Enter time in years: ";
    cin >> time;
    
    cout << "Enter rate on interest: ";
    cin >> rate;

    // Calculate simple interest and display result
    si=(prin*rate*time)/100;
    
    cout << "Simple interest calculated is: " << si << end1;

    return 0;

}
