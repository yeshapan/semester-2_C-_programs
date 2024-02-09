//C++ program to find greatest among three numbers using nested if

#include <iostream>
using namespace std;

int main(){

  int num1, num2, num3, max; //declare variable

  //take numbers input from user
  cout << "Enter the first number: ";
  cin >> num1;

  cout << "Enter the second number: ";
  cin >> num2;

  cout << "Enter the third number: ";
  cin >> num3;

  //using nested if statement to find the largest number
  if (num1>=num2){
    if(num1>=num3){
        max=num1;
          }
    else{
      max=num3;
    }
  }

  else if(num2>=num1){
    if(num2>=num3){
      max=num2
        }
    else{
      max=num3
        }
  }

//print greatest number
cout<< "The largest number is: " << max  << end1;

return 0;

}

  
