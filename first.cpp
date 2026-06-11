#include <iostream>
#include <math.h>
using namespace std;//using standard namespace

//Example of composition
class Engine{
    public:
    void start(){
        cout<<"Engine start"<<endl;
    }
};
class Car{
    private:
    Engine engine;//Compositon
    public:
    void drive(){
        engine.start();
        cout<<"Car is moving"<<endl;
    }
};
int main(){
    Car c;
    c.drive();
    return 0;
}