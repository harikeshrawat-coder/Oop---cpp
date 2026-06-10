#include <iostream>
using namespace std;//using standard namespace
class Vehicle{
private:
void piston(){
    cout<<"4 piston\n";
}
void manWhoMade(){
  cout<<"Markus Librette\n";
}
public:
void company(){
     cout<<"GFG\n";
}
void model(){
    cout<<"SIMPLE\n";
}
void color(){
    cout<<"Red/Green/Silver\n";
}
void cost(){
    cout<<"Rs.60,000 to 90,000\n";
}
void oil(){
    cout<<"PATROL\n";
}
};
int main(){
    Vehicle obj;
    obj.company();
    obj.model();
    obj.color();
    obj.cost();
    obj.oil();
}