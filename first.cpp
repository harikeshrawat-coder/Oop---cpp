#include <iostream>
using namespace std;//using standard namespace

//Example of class diagram
class BankAccount{
    private:
    string accountHolder;
    int balance;
    public:
    void createAccount(string name,int amount){
         accountHolder = name;
         balance = amount;
    }
    void deposit(int amount){
        balance += amount;
    }
    void display(){
        cout<<"Account Holder:"<<accountHolder<<endl;
        cout<<"Balance:"<<balance<<endl;
    }
};
int main(){
    BankAccount acc;

    acc.createAccount("Harkesh", 1000);
    acc.deposit(500);

    acc.display();

    return 0;
}
