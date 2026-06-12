#include <iostream>
using namespace std;//using standard namespace

//Sequence Diagram example

class Payment{
    public:
    void processPayment(){
        cout<<"Payment Processed\n";
    }
};

class Order{
    public:
    void placeOrder(){
        cout<<"Order placed\n";
    }
};

int main(){
    Order o;
    Payment p;

    o.placeOrder();
    p.processPayment();

    cout<<"Order Confirmed\n";

    return 0;
}
