#include <iostream>
using namespace std;//using standard namespace

//Activity diagram example
int main(){
    string username,password;
    cout<<"Enter username:";
    cin>>username;
    cout<<"Enter password:";
    cin>>password;

    if(username=="admin" && password=="1234"){
        cout<<"Login Sccessfull";
    }
    else{
        cout<<"Login failed";
    }
    return 0;
}
