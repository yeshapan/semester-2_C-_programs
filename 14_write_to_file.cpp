//cpp program to create a file and write into it
#include<iostream>
#include <fstream>
using namespace std;
int main(){
    //create and open a text file
    ofstream myfile("filename.txt");
    //write onto file
    myfile<<"blah blah hehe haha";
    //close file
    myfile.close();
}
