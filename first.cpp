#include <iostream>
#include <string>
using namespace std;//using standard namespace

template <class T>
class Box{
    private:
    T value;
    public:
    void set(T v){
        value = v;
    }
    T get(){
        return value;
    }
};
int main(){
    Box<int>b1;
    Box<float>b2;
    Box<string>b3;

    b1.set(100);
    b2.set(10.5);
    b3.set("Hello");

    cout<<b1.get()<<endl;
    cout<<b2.get()<<endl;
    cout<<b3.get()<<endl;
}