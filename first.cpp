#include <iostream>
using namespace std;//using standard namespace
//Abstract class
class shape{
    public:
    //Pure virtual function
    virtual void draw()=0;

    //Concrete(normal)function
    void info(){
        cout<<"this is a shape"<<endl;
    }
};

//derived class 1
class Circle: public shape{
    public:
    void draw(){
        cout<<"Drawing a Circle"<<endl;
    }
};

//Derived class 2
class Rectangle: public shape{
    public:
    void draw(){
        cout<<"Drawing a Rectangle"<<endl;
    }
};

int main(){
    //creating objects for derived classes
    Circle c;
    Rectangle r;

    //calling functions
    c.draw();
    r.draw();
}