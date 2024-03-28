//C++ program to display students' name and roll number using class and objects

#include <iostream>
using namespace std;

class student{
    private:
        int roll_no;
        char name[20];
    public:
        void getdata(){
            cout<<"Enter name: ";
            cin>> name;
            cout<<"Enter roll number: ";
            cin>> roll_no;
        }
        
        void putdata(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll number: "<<roll_no<<endl;
        }
};

int main(){
    student object1;
    object1.getdata();
    object1.putdata();
    return 0;
}

