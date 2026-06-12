#include <iostream>
using namespace std;//using standard namespace

//Example of creational patterns (singleton)

class Singleton{
    private:
    static Singleton * instance;

    Singleton(){}

    public:
    static Singleton*getInstance(){
        if(instance == nullptr)
        instance = new Singleton();
        return instance;
    }

    void show(){
        cout<<"Singleton Instance\n";
    }
};

Singleton*Singleton:: instance= nullptr;

int main(){
    Singleton*s1 = Singleton::getInstance();
    s1->show();
    return 0; 
}