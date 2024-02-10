//C++ program to convert degree celcuis to degree farenheit

#include <iostream>
using namespace std;
int main() {
  
    float cel, faren; //declare variable

    // Get age input
    cout << "Enter temperature in degree celcius: ";
    cin >> cel;

    // Covert celcuis to farenheit
    faren=((9/5)*cel)+32;
    
    cout<<"Temperature in degree farenheit is: " << faren << end1;

    return 0;
}
