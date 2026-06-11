#include <iostream>
#include <string>
using namespace std;//using standard namespace

//Example of Function Templete with multiple parameter
template <class T>
void fun(T a){
    cout<<"Value of a is:"<<a<<endl;
}
template<class x,class y >void fun(x b,y c){
    cout<<"Value of b is:"<<b<<endl;
    cout<<"Value of c is:"<<c<<endl; 
};
int main(){
    fun(10);
    fun(20,30.5);
    return 0;
}