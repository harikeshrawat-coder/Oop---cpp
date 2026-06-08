#include <iostream>
#include <string>
using namespace std;

class MyClass{
    public:
    int myNum;
    string myString;
};

int main(){
    MyClass myObj;

    myObj.myNum = 15;
    myObj. myString = "Hello Harkesh";
    cout<<myObj.myNum<<endl;
    cout<<myObj.myString<<endl;

    return 0;
}