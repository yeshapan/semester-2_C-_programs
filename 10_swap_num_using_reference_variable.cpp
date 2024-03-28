//C++ program to swap two numbers using reference variable

#include <iostream>
using namespace std;

class swapping{
    public:
        void swap(int &num1, int &num2){
            int temp=num1;
            num1=num2;
            num2=temp;
            cout<<num1<<num2;
        }
};


int main(){
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    swapping object1;
    object1.swap(num1, num2);
    return 0;
}
