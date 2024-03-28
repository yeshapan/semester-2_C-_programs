//C++ program with two functions: oneto reverse a number and other to print fibonacci series using class and objects

#include <iostream>
using namespace std;

class A{
    public:
        void reverse_num(int num){
            int reversed_num=0;
            while(num!=0){
                int digit=num%10;
                reversed_num=reversed_num*10+digit;
                num/=10;
            }
            cout<<"Reversed number is: "<<reversed_num<<endl;
        }
        
        void print_fibonacci(int n){
            int first=0, second=1, next;
            cout<<"Fibonacci series upto n terms: "<<endl;
            for(int i=0; i<n; i++){
                if(i<=1){
                    next=i;
                }
                else{
                    next=first+second;
                    first=second;
                    second=next;
                }
                cout<<next<<"  ";
            }
        }
};

int main(){
    int num, n;
    A object1;
    cout<<"Enter number to be reversed: ";
    cin>>num;
    object1.reverse_num(num);
    cout<<"Enter terms upto which fibonacci series to be printed: ";
    cin>>n;
    object1.print_fibonacci(n);
    return 0;
}
