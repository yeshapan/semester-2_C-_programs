//C++ program to convert degree celcuis to degree farenheit

#include <iostream>
using namespace std;
int main() {
  
    float cel, faren; //declare variables

    // Get input temperature in degree celcuis
    cout << "Enter temperature in degree celcius: ";
    cin >> cel;

    // Convert celcuis to farenheit
    faren=((9/5)*cel)+32;

    //display result temperature in degree fahrenheit
    cout<<"Temperature in degree fahrenheit is: " << faren << end1;

    return 0;
}
