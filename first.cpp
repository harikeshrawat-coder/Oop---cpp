#include <iostream>
using namespace std;//using standard namespace

//Example of creational pattern (Factory)

class Shape{
    public:
    virtual void draw()=0;
};
class Circle:public Shape{
    public:
    void draw(){
        cout<<"Drawing Circle\n";
    }
};
class Square:public Shape{
    public:
    void draw(){
        cout<<"Drawing Square\n";
    }
};
class ShapeFactory{
    public:
    Shape* getShape(string type){
        if(type=="Circle")
           return new Circle();
        else if(type=="Square")
           return new Square();
        return nullptr;
    }
};
int main(){
    ShapeFactory factory;
    Shape*s=factory.getShape("Circle");
    s->draw();
    return 0;
}

