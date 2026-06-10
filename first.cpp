#include <iostream>
using namespace std;//using standard namespace
class Complex{
    public:
    int real, imag;
    Complex operator + (Complex c){
        Complex temp;
        temp.real = real + c.real;
        temp.imag= imag + c. imag;
        return temp;
    }
};

int main(){//main function
    Complex c1, c2, c3;
    //assining values manually
    c1.real = 10;
    c1. imag = 5;
    c2.real = 2;
    c2.imag = 4;
    
    //Add tow complex numbers using operator overloading
    c3=c1+c2;
    //displaying the result
    cout<<c3.real<<"+"<<c3.imag<<"i"<<endl;

    return 0;
}



    





