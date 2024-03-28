//C++ program to swap two numbers using 2 variables

#include <iostream>
using namespace std;

class swapping{
    private:
        int x=10, y=20;
    public:
        void swap(){
            x=x+y;
            y=x-y;
            x=x-y;
            cout<<"x: "<<x<<" y: "<<y<<endl;
        }
};

int main(){
    swapping object1;
    object1.swap();
    return 0;
}
