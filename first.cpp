#include <iostream>
#include <string>
using namespace std;//using standard namespace

//Use Case Example:ATM System

class ATM{
    private:
    int balance = 5000;

    public:
    void checkBalance(){
        cout<<"Balance:"<<balance<<endl;
    }

    void withdraw(int amount){
        if(amount <=  balance){
            balance -= amount;
            cout<<"Withdrawal Successfull\n";
        }else{
            cout<<"Insufficient Balance\n";
        }
    }
};
int main(){
    ATM atm;

    atm.checkBalance();
    atm.withdraw(2000);
    atm.checkBalance();

    return 0;


}