#include <iostream>
#include <math.h>
using namespace std;//using standard namespace
//Function declaration
double add(double a, double b);
double subtract(double a,double b);
double multiply(double a, double b);
double divide(double a, double b);

//Function definitions
double add(double a, double b){
    return a + b;
}

double subtract(double a, double b){
    return a - b;
}

double multiply(double a, double b){
    return a * b;
}

double divide(double a, double b){
    if(b == 0){
        cout<<"Error: Division by zero"<<endl;
        return 0;
    }
    return a / b;
}

int main(){
    double num1, num2, result;
    char operation;
    char continueCalc = 'y';

    cout<<"===== SIMPLE CALCULATOR ====="<<endl;

    while(continueCalc == 'y' || continueCalc == 'Y'){
        cout<<"\nEnter first number: ";
        cin>>num1;

        cout<<"Enter operation (+, -, *, /): ";
        cin>>operation;

        cout<<"Enter second number: ";
        cin>>num2;

        switch(operation){
            case '+':
                result = add(num1, num2);
                break;
            case '-':
                result = subtract(num1, num2);
                break;
            case '*':
                result = multiply(num1, num2);
                break;
            case '/':
                result = divide(num1, num2);
                break;
            default:
                cout<<"Invalid operation!"<<endl;
                continue;
        }

        cout<<"Result: "<<num1<<" "<<operation<<" "<<num2<<" = "<<result<<endl;

        cout<<"\nDo you want to continue? (y/n): ";
        cin>>continueCalc;
    }

    cout<<"Thank you for using the calculator!"<<endl;
    return 0;
}


