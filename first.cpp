#include <iostream>
using namespace std;//using standard namespace

int main(){
    int n;
    cin >> n; //taking input from user
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial  = factorial * i;
    }
    cout<<"Factorial of "<<n<<" is "<<factorial<<endl;

    return 0;
}








