#include <iostream>
#include <string>
using namespace std;//using standard namespace

template <typename T>
T maximum(T a,T b){
    return(a>b)? a:b;
};

int main(){
    cout<<maximum(10,20)<<endl;
    cout<<maximum(5.5,3.2)<<endl;
    cout<<maximum('A','B')<<endl;
}