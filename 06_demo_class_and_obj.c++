//C++ program to demonstrate basic class and objects (and various access specifiers
#include <iostream>

class circle{
    private:
        double radius;  //data member
    public:
        double area_circle(){   //member function to calculate area
            return 3.14*radius*radius;
        }
};

class rectangle{
    private:
        int length=10, breadth=5;
    public:
        double area_rectangle(){    //member function to calculate area
            return length*breadth;
        }
};

int main(){
    circle object1; //created an object of the class "circle"
    rectangle object2; //created an object of the class "rectangle"
    //now calling member functions
    object1.area_circle();
    object2.area_rectangle();
    return 0;
    
}
