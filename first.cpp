#include <iostream>
using namespace std;//using standard namespace
class FuncOver{
    public:
    void Multiplication(int x, int y){//function to multiply tow integer point values
        cout<<"Integer Multiplication Result="<<x*y<<endl;
    }
    void Multiplication(double x, double y){//function to multiply two double point values
        cout<<"Double Float Result="<<x*y<<endl;
    }
};

int main(){//main function
    FuncOver obj;
    obj.Multiplication(12,5);//calls show(int)
    obj.Multiplication(3.5,5.5);//calls show(double)
    return 0;
}



    





