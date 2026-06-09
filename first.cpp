#include <iostream>
#include<string>
using namespace std;//using standard namespace
class Vehicle{
    public:
    void vehicle(){
        cout<<"This is a vehicle"<<endl;
    }
};
class Car:public Vehicle{
    public:
    Car(){
        cout<<"This is a car"<<endl;
    }
};
class Bus:public Vehicle{
    public:
    Bus(){
        cout<<"This is a bus"<<endl;
    }
};
int main(){
    Car obj1;
    Bus obj2;
    
    return 0;
}








