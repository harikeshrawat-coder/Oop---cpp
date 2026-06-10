#include <bits/stdc++.h>
using namespace std;//using standard namespace

class Base{
    public:

    //virtual function
    virtual void display(){
        cout<<"Base class function";
    }
};

class Derived:public Base{
    public:
    //Overriding the base class function
    void display()override{
        cout<<"Derived class function";
    }
};

int main(){//main function
    Base*basePtr;//creating a pointer of type base
    Derived derivedObj;//creating an object of derived class
    
    //pointing base class pointerton derived class object
    basePtr= &derivedObj;

    //calling the display function using base class objct class pointer
    basePtr-> display();
    return 0;
}



    





