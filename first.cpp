#include <iostream>
#include <vector>
using namespace std;//using standard namespace

//Example of Behaviroal pattern (Observer)

class Subscriber{
    public:
    void update(){
        cout<<"New video uploaded!\n";
    }
};
class Channel{
    vector<Subscriber*>subs;

    public:
      void subscribe(Subscriber*s){
        subs.push_back(s);
      }
      void notify(){
        for(auto s:subs)
        s->update();
      }
};
int main(){
    Channel ch;
    Subscriber s1,s2;
    ch.subscribe(&s1);
    ch.subscribe(&s2);
    ch.notify();
    return 0;
}


