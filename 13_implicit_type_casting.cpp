// C++ program to demonstrate implicit type casting

/*Type casting in C++ refers to the process of converting a value of one data type to another data type. This can be useful in situations where we need to change the type of a variable to perform a certain operation or pass it to a function that requires a different data type.
Implicit type casting occurs automatically when the compiler converts a value from one data type to another. This happens when a value is assigned to a variable of a different data type, or when an expression involving different data types is evaluated. For example, if we assign an integer value to a float variable, the compiler will automatically convert the integer value to a float value.*/

#include <iostream>
using namespace std;

int main() {
    int int_num=10;
    double double_num=int_num;  //implicit type casting
    cout<<"Integer number: "<<int_num<<endl;
    cout<<"Double number: "<<double_num<<endl;
    return 0;
}
