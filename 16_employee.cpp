//Write a program in cpp that would print the information (name, year of joining, salary, address) of 3 employees by creating a class called Employee (use manipulators to display output)
#include<iostream>
using namespace std;

class Employee{
    public:
        char name[100];
        int year;
        char address[300];
        int salary;
        void getdata(){
            cout<<"Enter name of employee: ";
            cin>>name;
            cout<<"Enter year of joining: ";
            cin>>year;
            cout<<"Enter address: ";
            cin>>address;
            cout<<"Enter salary: ";
            cin>>salary;
        }
        void putdata(){
            cout<<name<<"\t\t"<<year<<"\t\t"<<address<<"\t\t"<<salary<<endl;
        }
};

int main(){
    
    Employee obj[3];
    for(int i=0; i<3; i++){
        obj[i].getdata();
    }
    cout<<"Name\t\tYear of Joining\t\tAddress\t\tSalary"<<endl;
    for(int i=0; i<3; i++){
        obj[i].putdata();
    }
    return 0;
}
