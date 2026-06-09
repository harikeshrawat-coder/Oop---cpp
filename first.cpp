#include <iostream>
#include<string>
using namespace std;//using standard namespace
class animal{ //Base class
    public: //Access specifier
    void eat(){
        cout<<"Eating..."<<endl;

    }

};
class Dog:public animal{ //intermediate class
    public:
    void bark(){
        cout<<"Barking..."<<endl;
    }

};
class BabyDog:public Dog{ //Derived class
    public:
    void weep(){
        cout<<"Weeping..."<<endl;
    }
};
int main(){
    BabyDog d1;
    d1.eat();
    d1.bark();
    d1.weep();
    return 0;
}







