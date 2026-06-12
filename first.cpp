#include <iostream>
#include <vector>
using namespace std;//using standard namespace

//Example of Behavioral pattern (Strategy)

class Payment{
    public:
    virtual void pay()=0;
    virtual ~Payment() = default;
};
class UPI:public Payment{
    public:
    void pay() override {
        cout<<"Paid using UPI\n";
    }
};
class Card:public Payment{
    public:
    void pay() override {
        cout<<"Paid using Card\n";
    }
};
class Shopping{
    private:
    Payment* method = nullptr;
    public:
    void setPayment(Payment* P){
        method = P;
    }
    void checkout(){
        if(method) method->pay();
    }
};
int main(){
    Shopping s;
    UPI u;
    s.setPayment(&u);
    s.checkout();
    return 0;
}




