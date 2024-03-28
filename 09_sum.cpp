//C++ program to add two numbers using the concept of class and object with arguments

#include <iostream>
using namespace std;

class add{
    public:
        void sum(int, int);
};

//function defined outside class using scope resolution operator
void add::sum(int x, int y){
    cout<<x+y;
}

int main(){
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    add object1;   //created object of class
    object1.sum(num1, num2);
    return 0;
}
