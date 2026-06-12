#include <iostream>
using namespace std;//using standard namespace

//Deployment Diagram example

class Server{
    public:
    void request(){
        cout<<"Server processing request\n";
    }
};
class Client{
    public:
    void sendRequest(Server &s){
        cout<<"Client sending request\n";
        s.request();
    }
};

int main(){
    Server server;
    Client client;

    client.sendRequest(server);

    return 0;
}
