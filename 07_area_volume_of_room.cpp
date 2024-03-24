//create a class "ROOM" having data members l, b and h and calculate it's area and volume

//functions defined inside class
#include <iostream>
using namespace std;

class room{
    private:
        int length, breadth, height;
    public:
        //function to get dimensions of the room from the user
        void getdata(){
            cout<<"Enter length of room: ";
            cin>>length;
            cout<<"Enter breadth of room: ";
            cin>>breadth;
            cout<<"Enter height of room: ";
            cin>>height;
        }

        //function to calculate area of the room
        void calculate_area(){
            int area;
            area=length*breadth;
            cout<<"Area of the room is "<<area<<endl;
        }
        
        //function to calculate the volume of the room
        void calculate_volume(){
            int volume;
            volume=length*breadth*height;
            cout<<"Volume of the room is "<<volume<<endl;
        }
};

int main(){
    room object1;
    object1.getdata();
    object1.calculate_area();
    object1.calculate_volume();
    return 0;
}

//--------------------------------------------------------------------------------------OR----------------------------------------------------------------------------------------

//using scope resolution operator and defining member functions outside class
#include <iostream>
using namespace std;

class room{
    private:
        int length, breadth, height;
    public:
        //initialised functions but definition outside class
        void getdata();
        
        void calculate_area();
        
        void calculate_volume();
};

//defined the member functions outside class using scope resolution operator
void room:: getdata(){
    cout<<"Enter length of room: ";
    cin>>length;
    cout<<"Enter breadth of room: ";
    cin>>breadth;
    cout<<"Enter height of room: ";
    cin>>height;
}

void room:: calculate_area(){
    int area;
    area=length*breadth;
    cout<<"Area of the room is "<<area<<endl;
}

void room:: calculate_volume(){
    int volume;
    volume=length*breadth*height;
    cout<<"Volume of the room is "<<volume<<endl;
}

int main(){
    room object1;
    object1.getdata();
    object1.calculate_area();
    object1.calculate_volume();
    return 0;
}
