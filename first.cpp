#include <iostream>
#include<string>
using namespace std;//using standard namespace
class Vehicle{
    public:
    void vehicle(){
        cout<<"This is a vehicle"<<endl;
    }
};
class Fare{
    public:
    void fare(){
        cout<<"fare of vehicle"<<endl;
    }
};
class Car:public Vehicle{
    public:
    void car(){
        cout<<"This is a car"<<endl;
    }
};
class Bus:public Vehicle,public Fare{
    public:
    void bus(){
      cout<<"This is a bus with fare"<<endl;  
    }
};
int main(){
    Bus obj2;
    obj2.vehicle();
    obj2.fare();
    obj2.bus();
    return 0;
}








